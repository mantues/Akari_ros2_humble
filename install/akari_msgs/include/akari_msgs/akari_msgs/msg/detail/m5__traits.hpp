// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from akari_msgs:msg/M5.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__MSG__DETAIL__M5__TRAITS_HPP_
#define AKARI_MSGS__MSG__DETAIL__M5__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "akari_msgs/msg/detail/m5__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace akari_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const M5 & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: button_a
  {
    out << "button_a: ";
    rosidl_generator_traits::value_to_yaml(msg.button_a, out);
    out << ", ";
  }

  // member: button_b
  {
    out << "button_b: ";
    rosidl_generator_traits::value_to_yaml(msg.button_b, out);
    out << ", ";
  }

  // member: button_c
  {
    out << "button_c: ";
    rosidl_generator_traits::value_to_yaml(msg.button_c, out);
    out << ", ";
  }

  // member: din0
  {
    out << "din0: ";
    rosidl_generator_traits::value_to_yaml(msg.din0, out);
    out << ", ";
  }

  // member: din1
  {
    out << "din1: ";
    rosidl_generator_traits::value_to_yaml(msg.din1, out);
    out << ", ";
  }

  // member: ain0
  {
    out << "ain0: ";
    rosidl_generator_traits::value_to_yaml(msg.ain0, out);
    out << ", ";
  }

  // member: dout0
  {
    out << "dout0: ";
    rosidl_generator_traits::value_to_yaml(msg.dout0, out);
    out << ", ";
  }

  // member: dout1
  {
    out << "dout1: ";
    rosidl_generator_traits::value_to_yaml(msg.dout1, out);
    out << ", ";
  }

  // member: pwmout0
  {
    out << "pwmout0: ";
    rosidl_generator_traits::value_to_yaml(msg.pwmout0, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: pressure
  {
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << ", ";
  }

  // member: brightness
  {
    out << "brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness, out);
    out << ", ";
  }

  // member: imu_ax
  {
    out << "imu_ax: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_ax, out);
    out << ", ";
  }

  // member: imu_ay
  {
    out << "imu_ay: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_ay, out);
    out << ", ";
  }

  // member: imu_az
  {
    out << "imu_az: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_az, out);
    out << ", ";
  }

  // member: imu_gx
  {
    out << "imu_gx: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gx, out);
    out << ", ";
  }

  // member: imu_gy
  {
    out << "imu_gy: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gy, out);
    out << ", ";
  }

  // member: imu_gz
  {
    out << "imu_gz: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gz, out);
    out << ", ";
  }

  // member: imu_pitch
  {
    out << "imu_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_pitch, out);
    out << ", ";
  }

  // member: imu_roll
  {
    out << "imu_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_roll, out);
    out << ", ";
  }

  // member: imu_yaw
  {
    out << "imu_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_yaw, out);
    out << ", ";
  }

  // member: general0
  {
    out << "general0: ";
    rosidl_generator_traits::value_to_yaml(msg.general0, out);
    out << ", ";
  }

  // member: general1
  {
    out << "general1: ";
    rosidl_generator_traits::value_to_yaml(msg.general1, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const M5 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: button_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_a: ";
    rosidl_generator_traits::value_to_yaml(msg.button_a, out);
    out << "\n";
  }

  // member: button_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_b: ";
    rosidl_generator_traits::value_to_yaml(msg.button_b, out);
    out << "\n";
  }

  // member: button_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "button_c: ";
    rosidl_generator_traits::value_to_yaml(msg.button_c, out);
    out << "\n";
  }

  // member: din0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "din0: ";
    rosidl_generator_traits::value_to_yaml(msg.din0, out);
    out << "\n";
  }

  // member: din1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "din1: ";
    rosidl_generator_traits::value_to_yaml(msg.din1, out);
    out << "\n";
  }

  // member: ain0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ain0: ";
    rosidl_generator_traits::value_to_yaml(msg.ain0, out);
    out << "\n";
  }

  // member: dout0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dout0: ";
    rosidl_generator_traits::value_to_yaml(msg.dout0, out);
    out << "\n";
  }

  // member: dout1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dout1: ";
    rosidl_generator_traits::value_to_yaml(msg.dout1, out);
    out << "\n";
  }

  // member: pwmout0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pwmout0: ";
    rosidl_generator_traits::value_to_yaml(msg.pwmout0, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << "\n";
  }

  // member: brightness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "brightness: ";
    rosidl_generator_traits::value_to_yaml(msg.brightness, out);
    out << "\n";
  }

  // member: imu_ax
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_ax: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_ax, out);
    out << "\n";
  }

  // member: imu_ay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_ay: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_ay, out);
    out << "\n";
  }

  // member: imu_az
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_az: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_az, out);
    out << "\n";
  }

  // member: imu_gx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_gx: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gx, out);
    out << "\n";
  }

  // member: imu_gy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_gy: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gy, out);
    out << "\n";
  }

  // member: imu_gz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_gz: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_gz, out);
    out << "\n";
  }

  // member: imu_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_pitch, out);
    out << "\n";
  }

  // member: imu_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_roll, out);
    out << "\n";
  }

  // member: imu_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_yaw, out);
    out << "\n";
  }

  // member: general0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "general0: ";
    rosidl_generator_traits::value_to_yaml(msg.general0, out);
    out << "\n";
  }

  // member: general1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "general1: ";
    rosidl_generator_traits::value_to_yaml(msg.general1, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const M5 & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace akari_msgs

namespace rosidl_generator_traits
{

[[deprecated("use akari_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const akari_msgs::msg::M5 & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::msg::M5 & msg)
{
  return akari_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::msg::M5>()
{
  return "akari_msgs::msg::M5";
}

template<>
inline const char * name<akari_msgs::msg::M5>()
{
  return "akari_msgs/msg/M5";
}

template<>
struct has_fixed_size<akari_msgs::msg::M5>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<akari_msgs::msg::M5>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<akari_msgs::msg::M5>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AKARI_MSGS__MSG__DETAIL__M5__TRAITS_HPP_
