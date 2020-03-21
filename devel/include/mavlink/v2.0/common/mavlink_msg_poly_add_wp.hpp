// MESSAGE POLY_ADD_WP support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief POLY_ADD_WP message
 *
 *  Add waypoint to be used with polynomial trajectory generator
 */
struct POLY_ADD_WP : mavlink::Message {
    static constexpr msgid_t MSG_ID = 271;
    static constexpr size_t LENGTH = 55;
    static constexpr size_t MIN_LENGTH = 55;
    static constexpr uint8_t CRC_EXTRA = 52;
    static constexpr auto NAME = "POLY_ADD_WP";


    uint8_t target_system; /*<  System ID */
    uint8_t target_component; /*<  Component ID */
    uint8_t id; /*<  ID of the waypoint in relation to previous configured ones. */
    float timeto; /*<  [s] Time to get to the waypoint. */
    float x_lat; /*<  [m] position in x relative to the home position */
    float y_lon; /*<  [m] position in y relative to the home position */
    float z_alt; /*<  [m] position in z relative to the home position */
    float yaw; /*<  [rad] yaw position around z in right handed system for. z upwards */
    float x_vel; /*<  [m/s] velocity in x */
    float y_vel; /*<  [m/s] velocity in y */
    float z_vel; /*<  [m/s] velocity in z */
    float yaw_vel; /*<  [rad/s] velocity in yaw (around z axis) */
    float x_acc; /*<  [m/s^2] acceleration in x */
    float y_acc; /*<  [m/s^2] acceleration in y */
    float z_acc; /*<  [m/s^2] acceleration in z */
    float yaw_acc; /*<  [rad/s^2] acceleration in yaw (around z axis) */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  target_system: " << +target_system << std::endl;
        ss << "  target_component: " << +target_component << std::endl;
        ss << "  id: " << +id << std::endl;
        ss << "  timeto: " << timeto << std::endl;
        ss << "  x_lat: " << x_lat << std::endl;
        ss << "  y_lon: " << y_lon << std::endl;
        ss << "  z_alt: " << z_alt << std::endl;
        ss << "  yaw: " << yaw << std::endl;
        ss << "  x_vel: " << x_vel << std::endl;
        ss << "  y_vel: " << y_vel << std::endl;
        ss << "  z_vel: " << z_vel << std::endl;
        ss << "  yaw_vel: " << yaw_vel << std::endl;
        ss << "  x_acc: " << x_acc << std::endl;
        ss << "  y_acc: " << y_acc << std::endl;
        ss << "  z_acc: " << z_acc << std::endl;
        ss << "  yaw_acc: " << yaw_acc << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << timeto;                        // offset: 0
        map << x_lat;                         // offset: 4
        map << y_lon;                         // offset: 8
        map << z_alt;                         // offset: 12
        map << yaw;                           // offset: 16
        map << x_vel;                         // offset: 20
        map << y_vel;                         // offset: 24
        map << z_vel;                         // offset: 28
        map << yaw_vel;                       // offset: 32
        map << x_acc;                         // offset: 36
        map << y_acc;                         // offset: 40
        map << z_acc;                         // offset: 44
        map << yaw_acc;                       // offset: 48
        map << target_system;                 // offset: 52
        map << target_component;              // offset: 53
        map << id;                            // offset: 54
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> timeto;                        // offset: 0
        map >> x_lat;                         // offset: 4
        map >> y_lon;                         // offset: 8
        map >> z_alt;                         // offset: 12
        map >> yaw;                           // offset: 16
        map >> x_vel;                         // offset: 20
        map >> y_vel;                         // offset: 24
        map >> z_vel;                         // offset: 28
        map >> yaw_vel;                       // offset: 32
        map >> x_acc;                         // offset: 36
        map >> y_acc;                         // offset: 40
        map >> z_acc;                         // offset: 44
        map >> yaw_acc;                       // offset: 48
        map >> target_system;                 // offset: 52
        map >> target_component;              // offset: 53
        map >> id;                            // offset: 54
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
