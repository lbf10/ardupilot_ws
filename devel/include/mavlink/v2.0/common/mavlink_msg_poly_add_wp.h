#pragma once
// MESSAGE POLY_ADD_WP PACKING

#define MAVLINK_MSG_ID_POLY_ADD_WP 271

MAVPACKED(
typedef struct __mavlink_poly_add_wp_t {
 float timeto; /*<  [s] Time to get to the waypoint.*/
 float x_lat; /*<  [m] position in x relative to the home position*/
 float y_lon; /*<  [m] position in y relative to the home position*/
 float z_alt; /*<  [m] position in z relative to the home position*/
 float yaw; /*<  [rad] yaw position around z in right handed system for. z upwards*/
 float x_vel; /*<  [m/s] velocity in x*/
 float y_vel; /*<  [m/s] velocity in y*/
 float z_vel; /*<  [m/s] velocity in z*/
 float yaw_vel; /*<  [rad/s] velocity in yaw (around z axis)*/
 float x_acc; /*<  [m/s^2] acceleration in x*/
 float y_acc; /*<  [m/s^2] acceleration in y*/
 float z_acc; /*<  [m/s^2] acceleration in z*/
 float yaw_acc; /*<  [rad/s^2] acceleration in yaw (around z axis)*/
 uint8_t target_system; /*<  System ID*/
 uint8_t target_component; /*<  Component ID*/
 uint8_t id; /*<  ID of the waypoint in relation to previous configured ones.*/
}) mavlink_poly_add_wp_t;

#define MAVLINK_MSG_ID_POLY_ADD_WP_LEN 55
#define MAVLINK_MSG_ID_POLY_ADD_WP_MIN_LEN 55
#define MAVLINK_MSG_ID_271_LEN 55
#define MAVLINK_MSG_ID_271_MIN_LEN 55

#define MAVLINK_MSG_ID_POLY_ADD_WP_CRC 52
#define MAVLINK_MSG_ID_271_CRC 52



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_POLY_ADD_WP { \
    271, \
    "POLY_ADD_WP", \
    16, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 52, offsetof(mavlink_poly_add_wp_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 53, offsetof(mavlink_poly_add_wp_t, target_component) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 54, offsetof(mavlink_poly_add_wp_t, id) }, \
         { "timeto", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_poly_add_wp_t, timeto) }, \
         { "x_lat", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_poly_add_wp_t, x_lat) }, \
         { "y_lon", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_poly_add_wp_t, y_lon) }, \
         { "z_alt", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_poly_add_wp_t, z_alt) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_poly_add_wp_t, yaw) }, \
         { "x_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_poly_add_wp_t, x_vel) }, \
         { "y_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_poly_add_wp_t, y_vel) }, \
         { "z_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_poly_add_wp_t, z_vel) }, \
         { "yaw_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_poly_add_wp_t, yaw_vel) }, \
         { "x_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_poly_add_wp_t, x_acc) }, \
         { "y_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_poly_add_wp_t, y_acc) }, \
         { "z_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_poly_add_wp_t, z_acc) }, \
         { "yaw_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_poly_add_wp_t, yaw_acc) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_POLY_ADD_WP { \
    "POLY_ADD_WP", \
    16, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 52, offsetof(mavlink_poly_add_wp_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 53, offsetof(mavlink_poly_add_wp_t, target_component) }, \
         { "id", NULL, MAVLINK_TYPE_UINT8_T, 0, 54, offsetof(mavlink_poly_add_wp_t, id) }, \
         { "timeto", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_poly_add_wp_t, timeto) }, \
         { "x_lat", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_poly_add_wp_t, x_lat) }, \
         { "y_lon", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_poly_add_wp_t, y_lon) }, \
         { "z_alt", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_poly_add_wp_t, z_alt) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_poly_add_wp_t, yaw) }, \
         { "x_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_poly_add_wp_t, x_vel) }, \
         { "y_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_poly_add_wp_t, y_vel) }, \
         { "z_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_poly_add_wp_t, z_vel) }, \
         { "yaw_vel", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_poly_add_wp_t, yaw_vel) }, \
         { "x_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_poly_add_wp_t, x_acc) }, \
         { "y_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_poly_add_wp_t, y_acc) }, \
         { "z_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_poly_add_wp_t, z_acc) }, \
         { "yaw_acc", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_poly_add_wp_t, yaw_acc) }, \
         } \
}
#endif

/**
 * @brief Pack a poly_add_wp message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param id  ID of the waypoint in relation to previous configured ones.
 * @param timeto  [s] Time to get to the waypoint.
 * @param x_lat  [m] position in x relative to the home position
 * @param y_lon  [m] position in y relative to the home position
 * @param z_alt  [m] position in z relative to the home position
 * @param yaw  [rad] yaw position around z in right handed system for. z upwards
 * @param x_vel  [m/s] velocity in x
 * @param y_vel  [m/s] velocity in y
 * @param z_vel  [m/s] velocity in z
 * @param yaw_vel  [rad/s] velocity in yaw (around z axis)
 * @param x_acc  [m/s^2] acceleration in x
 * @param y_acc  [m/s^2] acceleration in y
 * @param z_acc  [m/s^2] acceleration in z
 * @param yaw_acc  [rad/s^2] acceleration in yaw (around z axis)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_poly_add_wp_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t id, float timeto, float x_lat, float y_lon, float z_alt, float yaw, float x_vel, float y_vel, float z_vel, float yaw_vel, float x_acc, float y_acc, float z_acc, float yaw_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POLY_ADD_WP_LEN];
    _mav_put_float(buf, 0, timeto);
    _mav_put_float(buf, 4, x_lat);
    _mav_put_float(buf, 8, y_lon);
    _mav_put_float(buf, 12, z_alt);
    _mav_put_float(buf, 16, yaw);
    _mav_put_float(buf, 20, x_vel);
    _mav_put_float(buf, 24, y_vel);
    _mav_put_float(buf, 28, z_vel);
    _mav_put_float(buf, 32, yaw_vel);
    _mav_put_float(buf, 36, x_acc);
    _mav_put_float(buf, 40, y_acc);
    _mav_put_float(buf, 44, z_acc);
    _mav_put_float(buf, 48, yaw_acc);
    _mav_put_uint8_t(buf, 52, target_system);
    _mav_put_uint8_t(buf, 53, target_component);
    _mav_put_uint8_t(buf, 54, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POLY_ADD_WP_LEN);
#else
    mavlink_poly_add_wp_t packet;
    packet.timeto = timeto;
    packet.x_lat = x_lat;
    packet.y_lon = y_lon;
    packet.z_alt = z_alt;
    packet.yaw = yaw;
    packet.x_vel = x_vel;
    packet.y_vel = y_vel;
    packet.z_vel = z_vel;
    packet.yaw_vel = yaw_vel;
    packet.x_acc = x_acc;
    packet.y_acc = y_acc;
    packet.z_acc = z_acc;
    packet.yaw_acc = yaw_acc;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POLY_ADD_WP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_POLY_ADD_WP;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_POLY_ADD_WP_MIN_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_CRC);
}

/**
 * @brief Pack a poly_add_wp message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param id  ID of the waypoint in relation to previous configured ones.
 * @param timeto  [s] Time to get to the waypoint.
 * @param x_lat  [m] position in x relative to the home position
 * @param y_lon  [m] position in y relative to the home position
 * @param z_alt  [m] position in z relative to the home position
 * @param yaw  [rad] yaw position around z in right handed system for. z upwards
 * @param x_vel  [m/s] velocity in x
 * @param y_vel  [m/s] velocity in y
 * @param z_vel  [m/s] velocity in z
 * @param yaw_vel  [rad/s] velocity in yaw (around z axis)
 * @param x_acc  [m/s^2] acceleration in x
 * @param y_acc  [m/s^2] acceleration in y
 * @param z_acc  [m/s^2] acceleration in z
 * @param yaw_acc  [rad/s^2] acceleration in yaw (around z axis)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_poly_add_wp_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t id,float timeto,float x_lat,float y_lon,float z_alt,float yaw,float x_vel,float y_vel,float z_vel,float yaw_vel,float x_acc,float y_acc,float z_acc,float yaw_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POLY_ADD_WP_LEN];
    _mav_put_float(buf, 0, timeto);
    _mav_put_float(buf, 4, x_lat);
    _mav_put_float(buf, 8, y_lon);
    _mav_put_float(buf, 12, z_alt);
    _mav_put_float(buf, 16, yaw);
    _mav_put_float(buf, 20, x_vel);
    _mav_put_float(buf, 24, y_vel);
    _mav_put_float(buf, 28, z_vel);
    _mav_put_float(buf, 32, yaw_vel);
    _mav_put_float(buf, 36, x_acc);
    _mav_put_float(buf, 40, y_acc);
    _mav_put_float(buf, 44, z_acc);
    _mav_put_float(buf, 48, yaw_acc);
    _mav_put_uint8_t(buf, 52, target_system);
    _mav_put_uint8_t(buf, 53, target_component);
    _mav_put_uint8_t(buf, 54, id);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_POLY_ADD_WP_LEN);
#else
    mavlink_poly_add_wp_t packet;
    packet.timeto = timeto;
    packet.x_lat = x_lat;
    packet.y_lon = y_lon;
    packet.z_alt = z_alt;
    packet.yaw = yaw;
    packet.x_vel = x_vel;
    packet.y_vel = y_vel;
    packet.z_vel = z_vel;
    packet.yaw_vel = yaw_vel;
    packet.x_acc = x_acc;
    packet.y_acc = y_acc;
    packet.z_acc = z_acc;
    packet.yaw_acc = yaw_acc;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.id = id;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_POLY_ADD_WP_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_POLY_ADD_WP;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_POLY_ADD_WP_MIN_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_CRC);
}

/**
 * @brief Encode a poly_add_wp struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param poly_add_wp C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_poly_add_wp_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_poly_add_wp_t* poly_add_wp)
{
    return mavlink_msg_poly_add_wp_pack(system_id, component_id, msg, poly_add_wp->target_system, poly_add_wp->target_component, poly_add_wp->id, poly_add_wp->timeto, poly_add_wp->x_lat, poly_add_wp->y_lon, poly_add_wp->z_alt, poly_add_wp->yaw, poly_add_wp->x_vel, poly_add_wp->y_vel, poly_add_wp->z_vel, poly_add_wp->yaw_vel, poly_add_wp->x_acc, poly_add_wp->y_acc, poly_add_wp->z_acc, poly_add_wp->yaw_acc);
}

/**
 * @brief Encode a poly_add_wp struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param poly_add_wp C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_poly_add_wp_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_poly_add_wp_t* poly_add_wp)
{
    return mavlink_msg_poly_add_wp_pack_chan(system_id, component_id, chan, msg, poly_add_wp->target_system, poly_add_wp->target_component, poly_add_wp->id, poly_add_wp->timeto, poly_add_wp->x_lat, poly_add_wp->y_lon, poly_add_wp->z_alt, poly_add_wp->yaw, poly_add_wp->x_vel, poly_add_wp->y_vel, poly_add_wp->z_vel, poly_add_wp->yaw_vel, poly_add_wp->x_acc, poly_add_wp->y_acc, poly_add_wp->z_acc, poly_add_wp->yaw_acc);
}

/**
 * @brief Send a poly_add_wp message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system  System ID
 * @param target_component  Component ID
 * @param id  ID of the waypoint in relation to previous configured ones.
 * @param timeto  [s] Time to get to the waypoint.
 * @param x_lat  [m] position in x relative to the home position
 * @param y_lon  [m] position in y relative to the home position
 * @param z_alt  [m] position in z relative to the home position
 * @param yaw  [rad] yaw position around z in right handed system for. z upwards
 * @param x_vel  [m/s] velocity in x
 * @param y_vel  [m/s] velocity in y
 * @param z_vel  [m/s] velocity in z
 * @param yaw_vel  [rad/s] velocity in yaw (around z axis)
 * @param x_acc  [m/s^2] acceleration in x
 * @param y_acc  [m/s^2] acceleration in y
 * @param z_acc  [m/s^2] acceleration in z
 * @param yaw_acc  [rad/s^2] acceleration in yaw (around z axis)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_poly_add_wp_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t id, float timeto, float x_lat, float y_lon, float z_alt, float yaw, float x_vel, float y_vel, float z_vel, float yaw_vel, float x_acc, float y_acc, float z_acc, float yaw_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_POLY_ADD_WP_LEN];
    _mav_put_float(buf, 0, timeto);
    _mav_put_float(buf, 4, x_lat);
    _mav_put_float(buf, 8, y_lon);
    _mav_put_float(buf, 12, z_alt);
    _mav_put_float(buf, 16, yaw);
    _mav_put_float(buf, 20, x_vel);
    _mav_put_float(buf, 24, y_vel);
    _mav_put_float(buf, 28, z_vel);
    _mav_put_float(buf, 32, yaw_vel);
    _mav_put_float(buf, 36, x_acc);
    _mav_put_float(buf, 40, y_acc);
    _mav_put_float(buf, 44, z_acc);
    _mav_put_float(buf, 48, yaw_acc);
    _mav_put_uint8_t(buf, 52, target_system);
    _mav_put_uint8_t(buf, 53, target_component);
    _mav_put_uint8_t(buf, 54, id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_ADD_WP, buf, MAVLINK_MSG_ID_POLY_ADD_WP_MIN_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_CRC);
#else
    mavlink_poly_add_wp_t packet;
    packet.timeto = timeto;
    packet.x_lat = x_lat;
    packet.y_lon = y_lon;
    packet.z_alt = z_alt;
    packet.yaw = yaw;
    packet.x_vel = x_vel;
    packet.y_vel = y_vel;
    packet.z_vel = z_vel;
    packet.yaw_vel = yaw_vel;
    packet.x_acc = x_acc;
    packet.y_acc = y_acc;
    packet.z_acc = z_acc;
    packet.yaw_acc = yaw_acc;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.id = id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_ADD_WP, (const char *)&packet, MAVLINK_MSG_ID_POLY_ADD_WP_MIN_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_CRC);
#endif
}

/**
 * @brief Send a poly_add_wp message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_poly_add_wp_send_struct(mavlink_channel_t chan, const mavlink_poly_add_wp_t* poly_add_wp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_poly_add_wp_send(chan, poly_add_wp->target_system, poly_add_wp->target_component, poly_add_wp->id, poly_add_wp->timeto, poly_add_wp->x_lat, poly_add_wp->y_lon, poly_add_wp->z_alt, poly_add_wp->yaw, poly_add_wp->x_vel, poly_add_wp->y_vel, poly_add_wp->z_vel, poly_add_wp->yaw_vel, poly_add_wp->x_acc, poly_add_wp->y_acc, poly_add_wp->z_acc, poly_add_wp->yaw_acc);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_ADD_WP, (const char *)poly_add_wp, MAVLINK_MSG_ID_POLY_ADD_WP_MIN_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_CRC);
#endif
}

#if MAVLINK_MSG_ID_POLY_ADD_WP_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_poly_add_wp_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t id, float timeto, float x_lat, float y_lon, float z_alt, float yaw, float x_vel, float y_vel, float z_vel, float yaw_vel, float x_acc, float y_acc, float z_acc, float yaw_acc)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, timeto);
    _mav_put_float(buf, 4, x_lat);
    _mav_put_float(buf, 8, y_lon);
    _mav_put_float(buf, 12, z_alt);
    _mav_put_float(buf, 16, yaw);
    _mav_put_float(buf, 20, x_vel);
    _mav_put_float(buf, 24, y_vel);
    _mav_put_float(buf, 28, z_vel);
    _mav_put_float(buf, 32, yaw_vel);
    _mav_put_float(buf, 36, x_acc);
    _mav_put_float(buf, 40, y_acc);
    _mav_put_float(buf, 44, z_acc);
    _mav_put_float(buf, 48, yaw_acc);
    _mav_put_uint8_t(buf, 52, target_system);
    _mav_put_uint8_t(buf, 53, target_component);
    _mav_put_uint8_t(buf, 54, id);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_ADD_WP, buf, MAVLINK_MSG_ID_POLY_ADD_WP_MIN_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_CRC);
#else
    mavlink_poly_add_wp_t *packet = (mavlink_poly_add_wp_t *)msgbuf;
    packet->timeto = timeto;
    packet->x_lat = x_lat;
    packet->y_lon = y_lon;
    packet->z_alt = z_alt;
    packet->yaw = yaw;
    packet->x_vel = x_vel;
    packet->y_vel = y_vel;
    packet->z_vel = z_vel;
    packet->yaw_vel = yaw_vel;
    packet->x_acc = x_acc;
    packet->y_acc = y_acc;
    packet->z_acc = z_acc;
    packet->yaw_acc = yaw_acc;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->id = id;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_POLY_ADD_WP, (const char *)packet, MAVLINK_MSG_ID_POLY_ADD_WP_MIN_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_LEN, MAVLINK_MSG_ID_POLY_ADD_WP_CRC);
#endif
}
#endif

#endif

// MESSAGE POLY_ADD_WP UNPACKING


/**
 * @brief Get field target_system from poly_add_wp message
 *
 * @return  System ID
 */
static inline uint8_t mavlink_msg_poly_add_wp_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  52);
}

/**
 * @brief Get field target_component from poly_add_wp message
 *
 * @return  Component ID
 */
static inline uint8_t mavlink_msg_poly_add_wp_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  53);
}

/**
 * @brief Get field id from poly_add_wp message
 *
 * @return  ID of the waypoint in relation to previous configured ones.
 */
static inline uint8_t mavlink_msg_poly_add_wp_get_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  54);
}

/**
 * @brief Get field timeto from poly_add_wp message
 *
 * @return  [s] Time to get to the waypoint.
 */
static inline float mavlink_msg_poly_add_wp_get_timeto(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field x_lat from poly_add_wp message
 *
 * @return  [m] position in x relative to the home position
 */
static inline float mavlink_msg_poly_add_wp_get_x_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field y_lon from poly_add_wp message
 *
 * @return  [m] position in y relative to the home position
 */
static inline float mavlink_msg_poly_add_wp_get_y_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field z_alt from poly_add_wp message
 *
 * @return  [m] position in z relative to the home position
 */
static inline float mavlink_msg_poly_add_wp_get_z_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field yaw from poly_add_wp message
 *
 * @return  [rad] yaw position around z in right handed system for. z upwards
 */
static inline float mavlink_msg_poly_add_wp_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field x_vel from poly_add_wp message
 *
 * @return  [m/s] velocity in x
 */
static inline float mavlink_msg_poly_add_wp_get_x_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field y_vel from poly_add_wp message
 *
 * @return  [m/s] velocity in y
 */
static inline float mavlink_msg_poly_add_wp_get_y_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field z_vel from poly_add_wp message
 *
 * @return  [m/s] velocity in z
 */
static inline float mavlink_msg_poly_add_wp_get_z_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field yaw_vel from poly_add_wp message
 *
 * @return  [rad/s] velocity in yaw (around z axis)
 */
static inline float mavlink_msg_poly_add_wp_get_yaw_vel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field x_acc from poly_add_wp message
 *
 * @return  [m/s^2] acceleration in x
 */
static inline float mavlink_msg_poly_add_wp_get_x_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field y_acc from poly_add_wp message
 *
 * @return  [m/s^2] acceleration in y
 */
static inline float mavlink_msg_poly_add_wp_get_y_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field z_acc from poly_add_wp message
 *
 * @return  [m/s^2] acceleration in z
 */
static inline float mavlink_msg_poly_add_wp_get_z_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field yaw_acc from poly_add_wp message
 *
 * @return  [rad/s^2] acceleration in yaw (around z axis)
 */
static inline float mavlink_msg_poly_add_wp_get_yaw_acc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Decode a poly_add_wp message into a struct
 *
 * @param msg The message to decode
 * @param poly_add_wp C-struct to decode the message contents into
 */
static inline void mavlink_msg_poly_add_wp_decode(const mavlink_message_t* msg, mavlink_poly_add_wp_t* poly_add_wp)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    poly_add_wp->timeto = mavlink_msg_poly_add_wp_get_timeto(msg);
    poly_add_wp->x_lat = mavlink_msg_poly_add_wp_get_x_lat(msg);
    poly_add_wp->y_lon = mavlink_msg_poly_add_wp_get_y_lon(msg);
    poly_add_wp->z_alt = mavlink_msg_poly_add_wp_get_z_alt(msg);
    poly_add_wp->yaw = mavlink_msg_poly_add_wp_get_yaw(msg);
    poly_add_wp->x_vel = mavlink_msg_poly_add_wp_get_x_vel(msg);
    poly_add_wp->y_vel = mavlink_msg_poly_add_wp_get_y_vel(msg);
    poly_add_wp->z_vel = mavlink_msg_poly_add_wp_get_z_vel(msg);
    poly_add_wp->yaw_vel = mavlink_msg_poly_add_wp_get_yaw_vel(msg);
    poly_add_wp->x_acc = mavlink_msg_poly_add_wp_get_x_acc(msg);
    poly_add_wp->y_acc = mavlink_msg_poly_add_wp_get_y_acc(msg);
    poly_add_wp->z_acc = mavlink_msg_poly_add_wp_get_z_acc(msg);
    poly_add_wp->yaw_acc = mavlink_msg_poly_add_wp_get_yaw_acc(msg);
    poly_add_wp->target_system = mavlink_msg_poly_add_wp_get_target_system(msg);
    poly_add_wp->target_component = mavlink_msg_poly_add_wp_get_target_component(msg);
    poly_add_wp->id = mavlink_msg_poly_add_wp_get_id(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_POLY_ADD_WP_LEN? msg->len : MAVLINK_MSG_ID_POLY_ADD_WP_LEN;
        memset(poly_add_wp, 0, MAVLINK_MSG_ID_POLY_ADD_WP_LEN);
    memcpy(poly_add_wp, _MAV_PAYLOAD(msg), len);
#endif
}
