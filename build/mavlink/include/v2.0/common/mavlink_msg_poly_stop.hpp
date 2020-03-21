// MESSAGE POLY_STOP support class

#pragma once

namespace mavlink {
namespace common {
namespace msg {

/**
 * @brief POLY_STOP message
 *
 *  Stop mission in execution defined by polynomial trajectory generator
 */
struct POLY_STOP : mavlink::Message {
    static constexpr msgid_t MSG_ID = 274;
    static constexpr size_t LENGTH = 6;
    static constexpr size_t MIN_LENGTH = 6;
    static constexpr uint8_t CRC_EXTRA = 74;
    static constexpr auto NAME = "POLY_STOP";


    uint8_t target_system; /*<  System ID */
    uint8_t target_component; /*<  Component ID */
    float delay; /*<  [s] Delay to stop execution of trajectory */


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
        ss << "  delay: " << delay << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << delay;                         // offset: 0
        map << target_system;                 // offset: 4
        map << target_component;              // offset: 5
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> delay;                         // offset: 0
        map >> target_system;                 // offset: 4
        map >> target_component;              // offset: 5
    }
};

} // namespace msg
} // namespace common
} // namespace mavlink
