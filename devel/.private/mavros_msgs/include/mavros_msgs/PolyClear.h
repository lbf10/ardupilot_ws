// Generated by gencpp from file mavros_msgs/PolyClear.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_POLYCLEAR_H
#define MAVROS_MSGS_MESSAGE_POLYCLEAR_H

#include <ros/service_traits.h>


#include <mavros_msgs/PolyClearRequest.h>
#include <mavros_msgs/PolyClearResponse.h>


namespace mavros_msgs
{

struct PolyClear
{

typedef PolyClearRequest Request;
typedef PolyClearResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct PolyClear
} // namespace mavros_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::mavros_msgs::PolyClear > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::mavros_msgs::PolyClear&) { return value(); }
};

template<>
struct DataType< ::mavros_msgs::PolyClear > {
  static const char* value()
  {
    return "mavros_msgs/PolyClear";
  }

  static const char* value(const ::mavros_msgs::PolyClear&) { return value(); }
};


// service_traits::MD5Sum< ::mavros_msgs::PolyClearRequest> should match 
// service_traits::MD5Sum< ::mavros_msgs::PolyClear > 
template<>
struct MD5Sum< ::mavros_msgs::PolyClearRequest>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::PolyClear >::value();
  }
  static const char* value(const ::mavros_msgs::PolyClearRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::PolyClearRequest> should match 
// service_traits::DataType< ::mavros_msgs::PolyClear > 
template<>
struct DataType< ::mavros_msgs::PolyClearRequest>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::PolyClear >::value();
  }
  static const char* value(const ::mavros_msgs::PolyClearRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::mavros_msgs::PolyClearResponse> should match 
// service_traits::MD5Sum< ::mavros_msgs::PolyClear > 
template<>
struct MD5Sum< ::mavros_msgs::PolyClearResponse>
{
  static const char* value()
  {
    return MD5Sum< ::mavros_msgs::PolyClear >::value();
  }
  static const char* value(const ::mavros_msgs::PolyClearResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::mavros_msgs::PolyClearResponse> should match 
// service_traits::DataType< ::mavros_msgs::PolyClear > 
template<>
struct DataType< ::mavros_msgs::PolyClearResponse>
{
  static const char* value()
  {
    return DataType< ::mavros_msgs::PolyClear >::value();
  }
  static const char* value(const ::mavros_msgs::PolyClearResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_POLYCLEAR_H
