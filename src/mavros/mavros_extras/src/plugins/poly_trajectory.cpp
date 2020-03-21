#include "mavros/mavros_plugin.h"
#include "mavros_msgs/PolyWaypoint.h"
#include "mavros_msgs/PolyWaypointAdd.h"
#include "mavros_msgs/PolyStop.h"
#include "mavros_msgs/PolyStart.h"
#include "mavros_msgs/PolyClear.h"

namespace mavros
{
namespace extra_plugins
{
class PolyTrajectoryPlugin : public plugin::PluginBase
{
public:
    PolyTrajectoryPlugin() : PluginBase(), nh("~poly_traj") {};

    void initialize(UAS &uas_)
    {
        PluginBase::initialize(uas_);

        addwp_server = nh.advertiseService("polyAddWaypoint", &PolyTrajectoryPlugin::add_cb, this);
        clear_server = nh.advertiseService("polyClear", &PolyTrajectoryPlugin::clear_cb, this);
        start_server = nh.advertiseService("polyStart", &PolyTrajectoryPlugin::start_cb, this);
        stop_server = nh.advertiseService("polyStop", &PolyTrajectoryPlugin::stop_cb, this);
    }

    Subscriptions get_subscriptions()
    {
        return {/* Rx disabled */};
    }

private:
    ros::NodeHandle nh;
    ros::ServiceServer addwp_server, start_server, stop_server, clear_server;

	bool add_cb(mavros_msgs::PolyWaypointAdd::Request &req,
				mavros_msgs::PolyWaypointAdd::Response &res)
	{
        mavlink::common::msg::POLY_ADD_WP msg;
		m_uas->msg_set_target(msg);
		msg.id = req.waypoint.id;
        msg.timeto = req.waypoint.timeto;
        msg.x_lat = req.waypoint.x_lat;
        msg.x_vel = req.waypoint.x_vel;
        msg.x_acc = req.waypoint.x_acc;
        msg.y_lon = req.waypoint.y_long;
        msg.y_vel = req.waypoint.y_vel;
        msg.y_acc = req.waypoint.y_acc;
        msg.z_alt = req.waypoint.z_alt;
        msg.z_vel = req.waypoint.z_vel;
        msg.z_acc = req.waypoint.z_acc;
        msg.yaw = req.waypoint.yaw;
        msg.yaw_vel = req.waypoint.yaw_vel;
        msg.yaw_acc = req.waypoint.yaw_acc;
        
		res.success = true;
		try {
			UAS_FCU(m_uas)->send_message(msg);
		} catch (std::length_error&) {
			res.success = false;
		}
		return true;
	}

    bool clear_cb(mavros_msgs::PolyClear::Request &req,
	        		mavros_msgs::PolyClear::Response &res)
	{
        mavlink::common::msg::POLY_CLEAR msg;
		m_uas->msg_set_target(msg);
        
		res.success = true;
		try {
			UAS_FCU(m_uas)->send_message(msg);
		} catch (std::length_error&) {
			res.success = false;
		}
		return true;
	}

    bool start_cb(mavros_msgs::PolyStart::Request &req,
	        		mavros_msgs::PolyStart::Response &res)
	{
        mavlink::common::msg::POLY_START msg;
		m_uas->msg_set_target(msg);
        msg.delay = req.delay;
        
		res.success = true;
		try {
			UAS_FCU(m_uas)->send_message(msg);
		} catch (std::length_error&) {
			res.success = false;
		}
		return true;
	}


    bool stop_cb(mavros_msgs::PolyStop::Request &req,
	        		mavros_msgs::PolyStop::Response &res)
	{
        mavlink::common::msg::POLY_STOP msg;
		m_uas->msg_set_target(msg);
        msg.delay = req.delay;
        
		res.success = true;
		try {
			UAS_FCU(m_uas)->send_message(msg);
		} catch (std::length_error&) {
			res.success = false;
		}
		return true;
	}
};
} // namespace extra_plugins
} // namespace mavros

#include <pluginlib/class_list_macros.h>
PLUGINLIB_EXPORT_CLASS(mavros::extra_plugins::PolyTrajectoryPlugin, mavros::plugin::PluginBase)