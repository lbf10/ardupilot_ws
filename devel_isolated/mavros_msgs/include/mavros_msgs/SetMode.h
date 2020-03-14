// Generated by gencpp from file mavros_msgs/SetMode.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_SETMODE_H
#define MAVROS_MSGS_MESSAGE_SETMODE_H

#include <ros/service_traits.h>


#include <mavros_msgs/SetModeRequest.h>
#include <mavros_msgs/SetModeResponse.h>


namespace mavros_msgs
{

struct SetMode
{

typedef SetModeRequest Request;
typedef SetModeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetMode
} // namespace mavros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros_msgs::SetMode > {
  static const char* value()
  {
    return "e4f18fa93379f9ff1780d270ce110203";
  }

  static const char* value(const ::mavros_msgs::SetMode&) { return value(); }
};

template<>
struct DataType< ::mavros_msgs::SetMode > {
  static const char* value()
  {
    return "mavros_msgs/SetMode";
  }

  static const char* value(const ::mavros_msgs::SetMode&) { return value(); }
};


// service_traits::MD5Sum< ::mavros_msgs::SetModeRequest> should match 
// service_traits::MD5Sum< ::mavros_msgs::SetMode > 
template<>
struct MD5Sum< ::mavros_msgs::SetModeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::SetMode >::value();
  }
  static const char* value(const ::mavros_msgs::SetModeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::SetModeRequest> should match 
// service_traits::DataType< ::mavros_msgs::SetMode > 
template<>
struct DataType< ::mavros_msgs::SetModeRequest>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::SetMode >::value();
  }
  static const char* value(const ::mavros_msgs::SetModeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros_msgs::SetModeResponse> should match 
// service_traits::MD5Sum< ::mavros_msgs::SetMode > 
template<>
struct MD5Sum< ::mavros_msgs::SetModeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::SetMode >::value();
  }
  static const char* value(const ::mavros_msgs::SetModeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::SetModeResponse> should match 
// service_traits::DataType< ::mavros_msgs::SetMode > 
template<>
struct DataType< ::mavros_msgs::SetModeResponse>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::SetMode >::value();
  }
  static const char* value(const ::mavros_msgs::SetModeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_SETMODE_H
