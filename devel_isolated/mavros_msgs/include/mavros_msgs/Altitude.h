// Generated by gencpp from file mavros_msgs/Altitude.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_ALTITUDE_H
#define MAVROS_MSGS_MESSAGE_ALTITUDE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct Altitude_
{
  typedef Altitude_<ContainerAllocator> Type;

  Altitude_()
    : header()
    , monotonic(0.0)
    , amsl(0.0)
    , local(0.0)
    , relative(0.0)
    , terrain(0.0)
    , bottom_clearance(0.0)  {
    }
  Altitude_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , monotonic(0.0)
    , amsl(0.0)
    , local(0.0)
    , relative(0.0)
    , terrain(0.0)
    , bottom_clearance(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _monotonic_type;
  _monotonic_type monotonic;

   typedef float _amsl_type;
  _amsl_type amsl;

   typedef float _local_type;
  _local_type local;

   typedef float _relative_type;
  _relative_type relative;

   typedef float _terrain_type;
  _terrain_type terrain;

   typedef float _bottom_clearance_type;
  _bottom_clearance_type bottom_clearance;





  typedef boost::shared_ptr< ::mavros_msgs::Altitude_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::Altitude_<ContainerAllocator> const> ConstPtr;

}; // struct Altitude_

typedef ::mavros_msgs::Altitude_<std::allocator<void> > Altitude;

typedef boost::shared_ptr< ::mavros_msgs::Altitude > AltitudePtr;
typedef boost::shared_ptr< ::mavros_msgs::Altitude const> AltitudeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::Altitude_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::Altitude_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geographic_msgs': ['/opt/ros/melodic/share/geographic_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'mavros_msgs': ['/home/lbf10/ardupilot_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/melodic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::Altitude_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::Altitude_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::Altitude_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::Altitude_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::Altitude_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::Altitude_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::Altitude_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1296a05dc5b6160be0ae04ba9ed3a3fa";
  }

  static const char* value(const ::mavros_msgs::Altitude_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1296a05dc5b6160bULL;
  static const uint64_t static_value2 = 0xe0ae04ba9ed3a3faULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::Altitude_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/Altitude";
  }

  static const char* value(const ::mavros_msgs::Altitude_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::Altitude_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Altitude information\n"
"#\n"
"# https://mavlink.io/en/messages/common.html#ALTITUDE\n"
"\n"
"std_msgs/Header header\n"
"\n"
"float32 monotonic\n"
"float32 amsl\n"
"float32 local\n"
"float32 relative\n"
"float32 terrain\n"
"float32 bottom_clearance\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::mavros_msgs::Altitude_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::Altitude_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.monotonic);
      stream.next(m.amsl);
      stream.next(m.local);
      stream.next(m.relative);
      stream.next(m.terrain);
      stream.next(m.bottom_clearance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Altitude_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::Altitude_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::Altitude_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "monotonic: ";
    Printer<float>::stream(s, indent + "  ", v.monotonic);
    s << indent << "amsl: ";
    Printer<float>::stream(s, indent + "  ", v.amsl);
    s << indent << "local: ";
    Printer<float>::stream(s, indent + "  ", v.local);
    s << indent << "relative: ";
    Printer<float>::stream(s, indent + "  ", v.relative);
    s << indent << "terrain: ";
    Printer<float>::stream(s, indent + "  ", v.terrain);
    s << indent << "bottom_clearance: ";
    Printer<float>::stream(s, indent + "  ", v.bottom_clearance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_ALTITUDE_H
