// Generated by gencpp from file mavros_msgs/SetMavFrame.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_SETMAVFRAME_H
#define MAVROS_MSGS_MESSAGE_SETMAVFRAME_H

#include <ros/service_traits.h>


#include <mavros_msgs/SetMavFrameRequest.h>
#include <mavros_msgs/SetMavFrameResponse.h>


namespace mavros_msgs
{

struct SetMavFrame
{

typedef SetMavFrameRequest Request;
typedef SetMavFrameResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetMavFrame
} // namespace mavros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros_msgs::SetMavFrame > {
  static const char* value()
  {
    return "1d70e285b39e6f989f9ad19447c79649";
  }

  static const char* value(const ::mavros_msgs::SetMavFrame&) { return value(); }
};

template<>
struct DataType< ::mavros_msgs::SetMavFrame > {
  static const char* value()
  {
    return "mavros_msgs/SetMavFrame";
  }

  static const char* value(const ::mavros_msgs::SetMavFrame&) { return value(); }
};


// service_traits::MD5Sum< ::mavros_msgs::SetMavFrameRequest> should match 
// service_traits::MD5Sum< ::mavros_msgs::SetMavFrame > 
template<>
struct MD5Sum< ::mavros_msgs::SetMavFrameRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::SetMavFrame >::value();
  }
  static const char* value(const ::mavros_msgs::SetMavFrameRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::SetMavFrameRequest> should match 
// service_traits::DataType< ::mavros_msgs::SetMavFrame > 
template<>
struct DataType< ::mavros_msgs::SetMavFrameRequest>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::SetMavFrame >::value();
  }
  static const char* value(const ::mavros_msgs::SetMavFrameRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros_msgs::SetMavFrameResponse> should match 
// service_traits::MD5Sum< ::mavros_msgs::SetMavFrame > 
template<>
struct MD5Sum< ::mavros_msgs::SetMavFrameResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::SetMavFrame >::value();
  }
  static const char* value(const ::mavros_msgs::SetMavFrameResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::SetMavFrameResponse> should match 
// service_traits::DataType< ::mavros_msgs::SetMavFrame > 
template<>
struct DataType< ::mavros_msgs::SetMavFrameResponse>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::SetMavFrame >::value();
  }
  static const char* value(const ::mavros_msgs::SetMavFrameResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_SETMAVFRAME_H
