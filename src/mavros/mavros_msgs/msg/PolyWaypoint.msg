# PolyWaypoint.msg
#
# Representation of a waypoint according to a 5th order polynomial
# Contains 3D position and yaw orientation, as well as their first and second derivatives

uint16  id      #           ID of the waypoint in relation to previous configured ones. 
                #           id = 0 means inserting this waypoint in the beginning
                #           id = NaN means inserting this waypoint at the end
                #           id = 3 means inserting this waypoint in position 2 and shifting all others after 2

float32 timeto  # [s]       time to get to the waypoint
float64 x_lat   # [m]       position in x relative to the home position
float64 y_long  # [m]       position in y relative to the home position
float64 z_alt   # [m]       position in z relative to the home position
float64 yaw     # [rad]     yaw position relative to x 
float64 x_vel   # [m/s]     velocity in x
float64 y_vel   # [m/s]     velocity in y
float64 z_vel   # [m/s]     velocity in z
float64 yaw_vel # [rad/s]   velocity in yaw (around z axis)
float64 x_acc   # [m/s^2]   acceleration in x
float64 y_acc   # [m/s^2]   acceleration in y
float64 z_acc   # [m/s^2]   acceleration in z
float64 yaw_acc # [rad/s^2] acceleration in yaw (around z axis)
