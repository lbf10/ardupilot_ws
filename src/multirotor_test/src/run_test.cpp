#include "mavros/mavros.h"
#include <geometry_msgs/PoseStamped.h>
// #include "mavros_msgs/ParamGet.h"
// #include "mavros_msgs/ParamSet.h"
// #include "mavros_msgs/ParamValue.h"
#include "mavros_msgs/CommandBool.h"
#include "mavros_msgs/CommandTOL.h"
#include "mavros_msgs/CommandLong.h"
#include "mavros_msgs/PolyWaypointAdd.h"
#include "mavros_msgs/PolyStop.h"
#include "mavros_msgs/PolyStart.h"
#include "mavros_msgs/PolyClear.h"
#include "mavros_msgs/PolyWaypoint.h"
// #include "mavros_msgs/SetMode.h"
// #include "mavros_msgs/Param.h"
#include "mavros_msgs/State.h"
#include <cstdlib>
#include <chrono>
#include <thread>
#include "traj_gen.h"

using namespace std;

// Declare drone state message
mavros_msgs::State current_state;

// Callbacks %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// State message callback
void readStateCallback(const mavros_msgs::State::ConstPtr& msg)
{
  current_state = *msg;
}

// Main loop %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
int main(int argc, char **argv)
{

  ros::init(argc, argv, "run_test");
  ros::NodeHandle nh;

  traj_gen tg;

  // Declare Services %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

  ros::ServiceClient arming_client = nh.serviceClient<mavros_msgs::CommandBool>("mavros/cmd/arming");
  ros::ServiceClient takeoff_client = nh.serviceClient<mavros_msgs::CommandTOL>("mavros/cmd/takeoff");
  ros::ServiceClient command_client = nh.serviceClient<mavros_msgs::CommandLong>("mavros/cmd/command");
  ros::ServiceClient polyClear_client = nh.serviceClient<mavros_msgs::PolyClear>("mavros/poly_traj/polyClear");
  ros::ServiceClient polyStart_client = nh.serviceClient<mavros_msgs::PolyStart>("mavros/poly_traj/polyStart");
  ros::ServiceClient polyStop_client = nh.serviceClient<mavros_msgs::PolyStop>("mavros/poly_traj/polyStop");
  ros::ServiceClient polyAdd_client = nh.serviceClient<mavros_msgs::PolyWaypointAdd>("mavros/poly_traj/polyAddWaypoint");
  // ros::ServiceClient get_param_client = nh.serviceClient<mavros_msgs::ParamGet>("mavros/param/get");
  // ros::ServiceClient set_param_client = nh.serviceClient<mavros_msgs::ParamSet>("mavros/param/set");
  //ros::ServiceClient set_mode_client = nh.serviceClient<mavros_msgs::SetMode>("mavros/set_mode");
  
  // Nickname Services/Messages%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

  mavros_msgs::CommandBool arming_srv;
  mavros_msgs::CommandTOL takeoff_srv;
  mavros_msgs::CommandLong command_srv;
  mavros_msgs::PolyClear polyClear_srv;
  mavros_msgs::PolyStart polyStart_srv;
  mavros_msgs::PolyStop polyStop_srv;
  mavros_msgs::PolyWaypointAdd polyAdd_srv;
  // mavros_msgs::ParamGet get_param_srv;
  // mavros_msgs::ParamSet set_param_srv;
  //mavros_msgs::SetMode set_mode_srv;

  // Start
  ROS_INFO("Initializing...");

  // Declare subscriptions %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  ROS_INFO("Subscribing to State msg");
  ros::Subscriber sub = nh.subscribe("/mavros/state", 10, readStateCallback);
  ROS_INFO("Subscribed!");
  
  // Declare publishers %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
  ROS_INFO("Creating position set point publisher");
  ros::Publisher local_pos_pub = nh.advertise<geometry_msgs::PoseStamped>("/mavros/setpoint_position/local", 10);
  ROS_INFO("Created!");
  
  //the setpoint publishing rate MUST be faster than 2Hz
  ros::Rate rate(2.0);

  // wait for FCU connection
  ROS_INFO("Waiting for FCU connection");
  while(ros::ok() && !current_state.connected){
      ros::spinOnce();
      rate.sleep();
  }
  ROS_INFO("Connected!");

  // Example setpoint
  geometry_msgs::PoseStamped pose;
  pose.pose.position.x = 0;
  pose.pose.position.y = 0;
  pose.pose.position.z = 0;

  //TRAJETORIA GERONO
  int steps=8;
  MatrixXd wp_matrix(12,steps);
  ArrayXd wp_times(steps);

  double takeOffTime = 5;
  double takeOffAltitude = 2;
  double geronoDuration = 60;
  tg.geronoToWaypoints(3, 4, 1, geronoDuration, steps, goTo, 0*M_PI,wp_matrix,wp_times);

  MatrixXd aux(wp_matrix.rows(),wp_matrix.cols()+2);
  aux << ArrayXd::Zero(wp_matrix.rows()).matrix(),ArrayXd::Zero(wp_matrix.rows()).matrix(),wp_matrix;
  aux.row(2) = (aux.row(2).array()+takeOffAltitude).matrix();
  wp_matrix = aux;

  ArrayXd aux1(2+wp_times.size());
  aux1 << ArrayXd::Zero(2).array(), wp_times;
  aux1 = aux1+2*takeOffTime;
  aux1(0) -= takeOffTime;
  wp_times = aux1;

  //TRAJETORIA TESTE
  // MatrixXd wp_matrix(12,4);
  // wp_matrix << 0, 0, 0, 0,
  //              0, 1.5, -1.5, 0,
  //              2, 2,  2, 2,
  //              0, 0,  0, 0,
  //              0, 0,  0, 0,
  //              0, 0,  0, 0,
  //              0, 0,  0, 0,
  //              0, 0,  0, 0,
  //              0, 0,  0, 0,
  //              0, 0,  0, 0,
  //              0, 0,  0, 0,
  //              0, 0,  0, 0;
  // ArrayXd wp_times(4);
  // wp_times << 10, 20, 40, 50;

  cout << "Matriz de waypoints = " << endl << wp_matrix << endl;
  cout << "Array de tempos = " << endl << wp_times << endl << endl;

  Array3d initialPosition;
  initialPosition << 0,0,2;
  tg.setTrajectory(wp_matrix,wp_times,initialPosition,Array3d::Zero(),0,0);

  Vector3d position;
  Vector3d velocity;
  Vector3d acceleration;
  double yaw;
  position << 0.0,0.0,0.0;
  velocity << 0.0,0.0,0.0;
  acceleration << 0.0,0.0,0.0;

  local_pos_pub.publish(pose);

  // PolyClear
  ROS_INFO("Clearing Poly Waypoints...");
  polyClear_client.call(polyClear_srv);
  if(polyClear_srv.response.success){
  	ROS_INFO("Cleared!");
  }
  else{
  	ROS_INFO("Clear fail!");
  } 
  std::this_thread::sleep_for(std::chrono::seconds(1));

    // PolyAdd
  ROS_INFO("Adding Poly Waypoints...");
  for (int it=0;it<wp_matrix.cols();it++){
      if(it==0){
        polyAdd_srv.request.waypoint.timeto = wp_times(it);
      }
      else{
        polyAdd_srv.request.waypoint.timeto = wp_times(it)-wp_times(it-1);
      }
      polyAdd_srv.request.waypoint.x_lat = wp_matrix(0,it);
      polyAdd_srv.request.waypoint.y_long = wp_matrix(1,it);
      polyAdd_srv.request.waypoint.z_alt = wp_matrix(2,it);
      polyAdd_srv.request.waypoint.yaw = wp_matrix(3,it);
      polyAdd_srv.request.waypoint.x_vel = wp_matrix(4,it);
      polyAdd_srv.request.waypoint.y_vel = wp_matrix(5,it);
      polyAdd_srv.request.waypoint.z_vel = wp_matrix(6,it);
      polyAdd_srv.request.waypoint.yaw_vel = wp_matrix(7,it);
      polyAdd_srv.request.waypoint.x_acc = wp_matrix(8,it);
      polyAdd_srv.request.waypoint.y_acc = wp_matrix(9,it);
      polyAdd_srv.request.waypoint.z_acc = wp_matrix(10,it);
      polyAdd_srv.request.waypoint.yaw_acc = wp_matrix(11,it);

      polyAdd_client.call(polyAdd_srv);
      if(polyAdd_srv.response.success){
        ROS_INFO("Waypoint %d added.",it);
      }
      else{
        ROS_INFO("Waypoint %d transmition failed.",it);
      } 
      std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  ROS_INFO("Finished transmitting poly waypoints!");
  
  // Force Arm
  ROS_INFO("Arming...");
  command_srv.request.broadcast = 1;
  command_srv.request.command = 400;
  command_srv.request.confirmation = 1;
  command_srv.request.param1 = 1;
  command_srv.request.param2 = 2989;
  command_client.call(command_srv);
  if(command_srv.response.success){
  	ROS_INFO("Armed!");
  }
  else{
  	ROS_INFO("Arm fail!");
	ROS_INFO("End");
	return 0;
  } 
  std::this_thread::sleep_for(std::chrono::seconds(3));
  //arming_srv.request.value = true;
  // //arming_client.call(arming_srv);
  // if(arming_srv.response.success){
  // 	ROS_INFO("Armed!");
  // }
  // else{
  // 	ROS_INFO("Arm fail!");
	// ROS_INFO("End");
	// return 0;
  // } 
  // sleep(3);
  // Takeoff
  ROS_INFO("Taking off...");
  takeoff_srv.request.latitude = initialPosition(0);
  takeoff_srv.request.longitude = initialPosition(1);
  takeoff_srv.request.altitude = initialPosition(2);
  takeoff_srv.request.min_pitch = 0;
  takeoff_srv.request.yaw = 0;
  takeoff_client.call(takeoff_srv);
  if(takeoff_srv.response.success){
  	ROS_INFO("Lift off!");
  }
  else{
  	ROS_INFO("Take off fail!");
	ROS_INFO("End");
	return 0;
  } 
  std::this_thread::sleep_for(std::chrono::seconds(3));

  // PolyStart
  ROS_INFO("Requesting polynomial trajectory to start...");
  polyStart_srv.request.delay = 0;
  polyStart_client.call(polyStart_srv);
  if(polyStart_srv.response.success){
    ROS_INFO("Polynomial trajectory started!");
  }
  else{
    ROS_INFO("Polynomial trajectory failed.");
  } 
  std::this_thread::sleep_for(std::chrono::seconds(1));

  // auto t_ini = chrono::steady_clock::now();
  // auto t_now = t_ini;
  // double t = 0;
  // float quaternion[4];
  // ROS_INFO("Publishing set points.");
  // while(ros::ok()){
  //     t_now = chrono::steady_clock::now();
  //     t = chrono::duration_cast<chrono::milliseconds>(t_now - t_ini).count()/1000.0;
  //     tg.desiredTrajectory(t, position, velocity, acceleration, yaw);
  //     cout << "Position command = " << position.transpose() << " " << yaw << endl;
  //     pose.pose.position.x = position(0);
  //     pose.pose.position.y = position(1);
  //     pose.pose.position.z = position(2);
  //     mavlink_euler_to_quaternion(0,0,yaw,quaternion);
  //     pose.pose.orientation.w = quaternion[0];
  //     pose.pose.orientation.x = quaternion[1];
  //     pose.pose.orientation.y = quaternion[2];
  //     pose.pose.orientation.z = quaternion[3];

  //     local_pos_pub.publish(pose);
  //     ros::spinOnce();
  //     rate.sleep();
  // }

  // ROS_INFO("Stopped");

  ros::spin();

  // // Set mode STABILIZE
  // ROS_INFO("Changing mode to STABILIZE...");
  // set_mode_srv.request.base_mode = 0;
  // set_mode_srv.request.custom_mode = "STABILIZE";
  // set_mode_client.call(set_mode_srv);
  // if(set_mode_srv.response.mode_sent){
  // 	ROS_INFO("Mode set!");
  // }
  // else{
  // 	ROS_INFO("Mode set fail!");
	// ROS_INFO("End");
	// return 0;
  // } 



  // // Check SERVO2 value
  // get_param_srv.request.param_id = "SERVO2_FUNCTION";
  // get_param_client.call(get_param_srv);
  // ROS_INFO("SERVO2_FUNCTION = %ld", (long int)get_param_srv.response.value.integer);

  // // Check SERVO1 value
  // get_param_srv.request.param_id = "SERVO1_FUNCTION";
  // get_param_client.call(get_param_srv);
  // ROS_INFO("SERVO1_FUNCTION = %ld", (long int)get_param_srv.response.value.integer);

  // // Wait 7 seconds
  // sleep(7);

  // // Change SERVO2 value and confirm
  // set_param_srv.request.param_id = "SERVO2_FUNCTION";
  // set_param_srv.request.value.integer = 61;
  // get_param_srv.request.param_id = "SERVO2_FUNCTION";	
  // ROS_INFO("Changing SERVO2_FUNCTION to 61...");
  // set_param_client.call(set_param_srv);
  // ROS_INFO("SERVO2_FUNCTION set to 61: %d", (bool)set_param_srv.response.success);
  // get_param_client.call(get_param_srv);
  // ROS_INFO("SERVO2_FUNCTION = %ld", (long int)get_param_srv.response.value.integer);

  // // Change SERVO1 value and confirm
  // set_param_srv.request.param_id = "SERVO1_FUNCTION";
  // set_param_srv.request.value.integer = 34;
  // get_param_srv.request.param_id = "SERVO1_FUNCTION";
  // ROS_INFO("Changing SERVO1_FUNCTION to 34...");
  // set_param_client.call(set_param_srv);
  // ROS_INFO("SERVO1_FUNCTION set to 34: %d", (bool)set_param_srv.response.success);
  // get_param_client.call(get_param_srv);
  // ROS_INFO("SERVO1_FUNCTION = %ld", (long int)get_param_srv.response.value.integer);

  // // Wait 10 seconds
  // sleep(10);
  // // Change SERVO2 value back and confirm
  // set_param_srv.request.param_id = "SERVO2_FUNCTION";
  // set_param_srv.request.value.integer = 34;
  // get_param_srv.request.param_id = "SERVO2_FUNCTION";
  // ROS_INFO("Changing SERVO2_FUNCTION to 34...");
  // set_param_client.call(set_param_srv);
  // ROS_INFO("SERVO2_FUNCTION set to 34: %d", (bool)set_param_srv.response.success);
  // get_param_client.call(get_param_srv);
  // ROS_INFO("SERVO2_FUNCTION = %ld", (long int)get_param_srv.response.value.integer);

  // // Change SERVO1 value back and confirm
  // set_param_srv.request.param_id = "SERVO1_FUNCTION";
  // set_param_srv.request.value.integer = 0;
  // get_param_srv.request.param_id = "SERVO1_FUNCTION";
  // ROS_INFO("Changing SERVO1_FUNCTION to 0...");
  // set_param_client.call(set_param_srv);
  // ROS_INFO("SERVO1_FUNCTION set to 0: %d", (bool)set_param_srv.response.success);
  // get_param_client.call(get_param_srv);
  // ROS_INFO("SERVO1_FUNCTION = %ld", (long int)get_param_srv.response.value.integer);

  // // Wait 5 seconds
  // sleep(7);

  // // Disarm
  // arming_srv.request.value = false;
  // ROS_INFO("Disarming...");
  // arming_client.call(arming_srv);
  // if(arming_srv.response.success){
  // 	ROS_INFO("Disarmed!");
  // }
  // else{
  // 	ROS_INFO("Disarm fail!");
  // } 

  ROS_INFO("End");


  return 0;
}

