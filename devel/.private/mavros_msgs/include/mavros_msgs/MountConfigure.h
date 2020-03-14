// Generated by gencpp from file mavros_msgs/MountConfigure.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_MOUNTCONFIGURE_H
#define MAVROS_MSGS_MESSAGE_MOUNTCONFIGURE_H

#include <ros/service_traits.h>


#include <mavros_msgs/MountConfigureRequest.h>
#include <mavros_msgs/MountConfigureResponse.h>


namespace mavros_msgs
{

struct MountConfigure
{

typedef MountConfigureRequest Request;
typedef MountConfigureResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct MountConfigure
} // namespace mavros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros_msgs::MountConfigure > {
  static const char* value()
  {
    return "8d724be18b06cd8e10d8c97c487c546a";
  }

  static const char* value(const ::mavros_msgs::MountConfigure&) { return value(); }
};

template<>
struct DataType< ::mavros_msgs::MountConfigure > {
  static const char* value()
  {
    return "mavros_msgs/MountConfigure";
  }

  static const char* value(const ::mavros_msgs::MountConfigure&) { return value(); }
};


// service_traits::MD5Sum< ::mavros_msgs::MountConfigureRequest> should match 
// service_traits::MD5Sum< ::mavros_msgs::MountConfigure > 
template<>
struct MD5Sum< ::mavros_msgs::MountConfigureRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::MountConfigure >::value();
  }
  static const char* value(const ::mavros_msgs::MountConfigureRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::MountConfigureRequest> should match 
// service_traits::DataType< ::mavros_msgs::MountConfigure > 
template<>
struct DataType< ::mavros_msgs::MountConfigureRequest>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::MountConfigure >::value();
  }
  static const char* value(const ::mavros_msgs::MountConfigureRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros_msgs::MountConfigureResponse> should match 
// service_traits::MD5Sum< ::mavros_msgs::MountConfigure > 
template<>
struct MD5Sum< ::mavros_msgs::MountConfigureResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::MountConfigure >::value();
  }
  static const char* value(const ::mavros_msgs::MountConfigureResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::MountConfigureResponse> should match 
// service_traits::DataType< ::mavros_msgs::MountConfigure > 
template<>
struct DataType< ::mavros_msgs::MountConfigureResponse>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::MountConfigure >::value();
  }
  static const char* value(const ::mavros_msgs::MountConfigureResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_MOUNTCONFIGURE_H
