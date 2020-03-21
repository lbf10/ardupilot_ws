// Generated by gencpp from file mavros_msgs/PolyStart.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_POLYSTART_H
#define MAVROS_MSGS_MESSAGE_POLYSTART_H

#include <ros/service_traits.h>


#include <mavros_msgs/PolyStartRequest.h>
#include <mavros_msgs/PolyStartResponse.h>


namespace mavros_msgs
{

struct PolyStart
{

typedef PolyStartRequest Request;
typedef PolyStartResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PolyStart
} // namespace mavros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros_msgs::PolyStart > {
  static const char* value()
  {
    return "b2e171e32daca896a60ae860b3386531";
  }

  static const char* value(const ::mavros_msgs::PolyStart&) { return value(); }
};

template<>
struct DataType< ::mavros_msgs::PolyStart > {
  static const char* value()
  {
    return "mavros_msgs/PolyStart";
  }

  static const char* value(const ::mavros_msgs::PolyStart&) { return value(); }
};


// service_traits::MD5Sum< ::mavros_msgs::PolyStartRequest> should match 
// service_traits::MD5Sum< ::mavros_msgs::PolyStart > 
template<>
struct MD5Sum< ::mavros_msgs::PolyStartRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::PolyStart >::value();
  }
  static const char* value(const ::mavros_msgs::PolyStartRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::PolyStartRequest> should match 
// service_traits::DataType< ::mavros_msgs::PolyStart > 
template<>
struct DataType< ::mavros_msgs::PolyStartRequest>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::PolyStart >::value();
  }
  static const char* value(const ::mavros_msgs::PolyStartRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros_msgs::PolyStartResponse> should match 
// service_traits::MD5Sum< ::mavros_msgs::PolyStart > 
template<>
struct MD5Sum< ::mavros_msgs::PolyStartResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::PolyStart >::value();
  }
  static const char* value(const ::mavros_msgs::PolyStartResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::PolyStartResponse> should match 
// service_traits::DataType< ::mavros_msgs::PolyStart > 
template<>
struct DataType< ::mavros_msgs::PolyStartResponse>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::PolyStart >::value();
  }
  static const char* value(const ::mavros_msgs::PolyStartResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_POLYSTART_H
