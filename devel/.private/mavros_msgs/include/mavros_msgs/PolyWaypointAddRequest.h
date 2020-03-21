// Generated by gencpp from file mavros_msgs/PolyWaypointAddRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_POLYWAYPOINTADDREQUEST_H
#define MAVROS_MSGS_MESSAGE_POLYWAYPOINTADDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <mavros_msgs/PolyWaypoint.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct PolyWaypointAddRequest_
{
  typedef PolyWaypointAddRequest_<ContainerAllocator> Type;

  PolyWaypointAddRequest_()
    : waypoint()  {
    }
  PolyWaypointAddRequest_(const ContainerAllocator& _alloc)
    : waypoint(_alloc)  {
  (void)_alloc;
    }



   typedef  ::mavros_msgs::PolyWaypoint_<ContainerAllocator>  _waypoint_type;
  _waypoint_type waypoint;





  typedef boost::shared_ptr< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PolyWaypointAddRequest_

typedef ::mavros_msgs::PolyWaypointAddRequest_<std::allocator<void> > PolyWaypointAddRequest;

typedef boost::shared_ptr< ::mavros_msgs::PolyWaypointAddRequest > PolyWaypointAddRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::PolyWaypointAddRequest const> PolyWaypointAddRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geographic_msgs': ['/opt/ros/melodic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/home/lbf10/ardupilot_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/melodic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d9e29539cc7b48d95ce2d493649e68df";
  }

  static const char* value(const ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd9e29539cc7b48d9ULL;
  static const uint64_t static_value2 = 0x5ce2d493649e68dfULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/PolyWaypointAddRequest";
  }

  static const char* value(const ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"\n"
"mavros_msgs/PolyWaypoint waypoint\n"
"\n"
"================================================================================\n"
"MSG: mavros_msgs/PolyWaypoint\n"
"# PolyWaypoint.msg\n"
"#\n"
"# Representation of a waypoint according to a 5th order polynomial\n"
"# Contains 3D position and yaw orientation, as well as their first and second derivatives\n"
"\n"
"uint16  id      #           ID of the waypoint in relation to previous configured ones. \n"
"                #           id = 0 means inserting this waypoint in the beginning\n"
"                #           id = NaN means inserting this waypoint at the end\n"
"                #           id = 3 means inserting this waypoint in position 2 and shifting all others after 2\n"
"\n"
"float32 timeto  # [s]       time to get to the waypoint\n"
"float64 x_lat   # [m]       position in x relative to the home position\n"
"float64 y_long  # [m]       position in y relative to the home position\n"
"float64 z_alt   # [m]       position in z relative to the home position\n"
"float64 yaw     # [rad]     yaw position relative to x \n"
"float64 x_vel   # [m/s]     velocity in x\n"
"float64 y_vel   # [m/s]     velocity in y\n"
"float64 z_vel   # [m/s]     velocity in z\n"
"float64 yaw_vel # [rad/s]   velocity in yaw (around z axis)\n"
"float64 x_acc   # [m/s^2]   acceleration in x\n"
"float64 y_acc   # [m/s^2]   acceleration in y\n"
"float64 z_acc   # [m/s^2]   acceleration in z\n"
"float64 yaw_acc # [rad/s^2] acceleration in yaw (around z axis)\n"
;
  }

  static const char* value(const ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.waypoint);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PolyWaypointAddRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::PolyWaypointAddRequest_<ContainerAllocator>& v)
  {
    s << indent << "waypoint: ";
    s << std::endl;
    Printer< ::mavros_msgs::PolyWaypoint_<ContainerAllocator> >::stream(s, indent + "  ", v.waypoint);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_POLYWAYPOINTADDREQUEST_H