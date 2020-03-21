#pragma once
// MESSAGE POLY_START PACKING

#define MAVLINK_MSG_ID_POLY_START 273

MAVPACKED(
typedef struct __mavlink_poly_start_t {
 float delay; /*<  [s] Delay to start execution of trajectory*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
}) mavlink_poly_start_t;

#define MAVLINK_MSG_ID_POLY_START_LEN 6
#define MAVLINK_MSG_ID_POLY_START_MIN_LEN 6
#define MAVLINK_MSG_ID_273_LEN 6
#define MAVLINK_MSG_ID_273_MIN_LEN 6

#define MAVLINK_MSG_ID_POLY_START_CRC 45
#define MAVLINK_MSG_ID_273_CRC 45



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_POLY_START { \
    273, \
    "POLY_START", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_poly_start_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_poly_start_t, target_component) }, \
         { "delay", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_poly_start_t, delay) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_POLY_START { \
    "POLY_START", \
    3, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_poly_start_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 5, offsetof(mavlink_poly_start_t, target_component) }, \
         { "delay", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_poly_start_t, delay) }, \
         } \
}
#endif

/**
 * @brief Pack a poly_start message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param delay  [s] Delay to start execution of trajectory
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_poly_start_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, float delay)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POLY_START_LEN];
    _mav_put_float(buf, 0, delay);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POLY_START_LEN);
#else
    mavlink_poly_start_t packet;
    packet.delay = delay;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POLY_START_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_POLY_START;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POLY_START_MIN_LEN, MAVLINK_MSG_ID_POLY_START_LEN, MAVLINK_MSG_ID_POLY_START_CRC);
}

/**
 * @brief Pack a poly_start message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param delay  [s] Delay to start execution of trajectory
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_poly_start_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,float delay)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POLY_START_LEN];
    _mav_put_float(buf, 0, delay);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POLY_START_LEN);
#else
    mavlink_poly_start_t packet;
    packet.delay = delay;
    packet.target_system = target_system;
    packet.target_component = target_component;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POLY_START_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_POLY_START;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POLY_START_MIN_LEN, MAVLINK_MSG_ID_POLY_START_LEN, MAVLINK_MSG_ID_POLY_START_CRC);
}

/**
 * @brief Encode a poly_start struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param poly_start C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_poly_start_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_poly_start_t* poly_start)
{
    return mavlink_msg_poly_start_pack(system_id, component_id, msg, poly_start->target_system, poly_start->target_component, poly_start->delay);
}

/**
 * @brief Encode a poly_start struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param poly_start C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_poly_start_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_poly_start_t* poly_start)
{
    return mavlink_msg_poly_start_pack_chan(system_id, component_id, chan, msg, poly_start->target_system, poly_start->target_component, poly_start->delay);
}

/**
 * @brief Send a poly_start message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param delay  [s] Delay to start execution of trajectory
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_poly_start_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, float delay)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POLY_START_LEN];
    _mav_put_float(buf, 0, delay);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_START, buf, MAVLINK_MSG_ID_POLY_START_MIN_LEN, MAVLINK_MSG_ID_POLY_START_LEN, MAVLINK_MSG_ID_POLY_START_CRC);
#else
    mavlink_poly_start_t packet;
    packet.delay = delay;
    packet.target_system = target_system;
    packet.target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_START, (const char *)&packet, MAVLINK_MSG_ID_POLY_START_MIN_LEN, MAVLINK_MSG_ID_POLY_START_LEN, MAVLINK_MSG_ID_POLY_START_CRC);
#endif
}

/**
 * @brief Send a poly_start message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_poly_start_send_struct(mavlink_channel_t chan, const mavlink_poly_start_t* poly_start)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_poly_start_send(chan, poly_start->target_system, poly_start->target_component, poly_start->delay);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_START, (const char *)poly_start, MAVLINK_MSG_ID_POLY_START_MIN_LEN, MAVLINK_MSG_ID_POLY_START_LEN, MAVLINK_MSG_ID_POLY_START_CRC);
#endif
}

#if MAVLINK_MSG_ID_POLY_START_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_poly_start_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, float delay)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, delay);
    _mav_put_uint8_t(buf, 4, target_system);
    _mav_put_uint8_t(buf, 5, target_component);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_START, buf, MAVLINK_MSG_ID_POLY_START_MIN_LEN, MAVLINK_MSG_ID_POLY_START_LEN, MAVLINK_MSG_ID_POLY_START_CRC);
#else
    mavlink_poly_start_t *packet = (mavlink_poly_start_t *)msgbuf;
    packet->delay = delay;
    packet->target_system = target_system;
    packet->target_component = target_component;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_START, (const char *)packet, MAVLINK_MSG_ID_POLY_START_MIN_LEN, MAVLINK_MSG_ID_POLY_START_LEN, MAVLINK_MSG_ID_POLY_START_CRC);
#endif
}
#endif

#endif

// MESSAGE POLY_START UNPACKING


/**
 * @brief Get field target_system from poly_start message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_poly_start_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Get field target_component from poly_start message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_poly_start_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  5);
}

/**
 * @brief Get field delay from poly_start message
 *
 * @return  [s] Delay to start execution of trajectory
 */
static inline float mavlink_msg_poly_start_get_delay(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Decode a poly_start message into a struct
 *
 * @param msg The message to decode
 * @param poly_start C-struct to decode the message contents into
 */
static inline void mavlink_msg_poly_start_decode(const mavlink_message_t* msg, mavlink_poly_start_t* poly_start)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    poly_start->delay = mavlink_msg_poly_start_get_delay(msg);
    poly_start->target_system = mavlink_msg_poly_start_get_target_system(msg);
    poly_start->target_component = mavlink_msg_poly_start_get_target_component(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_POLY_START_LEN? msg->len : MAVLINK_MSG_ID_POLY_START_LEN;
        memset(poly_start, 0, MAVLINK_MSG_ID_POLY_START_LEN);
    memcpy(poly_start, _MAV_PAYLOAD(msg), len);
#endif
}
