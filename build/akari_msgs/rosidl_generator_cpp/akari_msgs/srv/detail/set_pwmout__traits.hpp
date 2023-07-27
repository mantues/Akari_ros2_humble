// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from akari_msgs:srv/SetPwmout.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_PWMOUT__TRAITS_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_PWMOUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "akari_msgs/srv/detail/set_pwmout__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace akari_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPwmout_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: pin_id
  {
    out << "pin_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pin_id, out);
    out << ", ";
  }

  // member: val
  {
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPwmout_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pin_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pin_id: ";
    rosidl_generator_traits::value_to_yaml(msg.pin_id, out);
    out << "\n";
  }

  // member: val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPwmout_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace akari_msgs

namespace rosidl_generator_traits
{

[[deprecated("use akari_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const akari_msgs::srv::SetPwmout_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::srv::SetPwmout_Request & msg)
{
  return akari_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::srv::SetPwmout_Request>()
{
  return "akari_msgs::srv::SetPwmout_Request";
}

template<>
inline const char * name<akari_msgs::srv::SetPwmout_Request>()
{
  return "akari_msgs/srv/SetPwmout_Request";
}

template<>
struct has_fixed_size<akari_msgs::srv::SetPwmout_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<akari_msgs::srv::SetPwmout_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<akari_msgs::srv::SetPwmout_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace akari_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetPwmout_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetPwmout_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetPwmout_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace akari_msgs

namespace rosidl_generator_traits
{

[[deprecated("use akari_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const akari_msgs::srv::SetPwmout_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::srv::SetPwmout_Response & msg)
{
  return akari_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::srv::SetPwmout_Response>()
{
  return "akari_msgs::srv::SetPwmout_Response";
}

template<>
inline const char * name<akari_msgs::srv::SetPwmout_Response>()
{
  return "akari_msgs/srv/SetPwmout_Response";
}

template<>
struct has_fixed_size<akari_msgs::srv::SetPwmout_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<akari_msgs::srv::SetPwmout_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<akari_msgs::srv::SetPwmout_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<akari_msgs::srv::SetPwmout>()
{
  return "akari_msgs::srv::SetPwmout";
}

template<>
inline const char * name<akari_msgs::srv::SetPwmout>()
{
  return "akari_msgs/srv/SetPwmout";
}

template<>
struct has_fixed_size<akari_msgs::srv::SetPwmout>
  : std::integral_constant<
    bool,
    has_fixed_size<akari_msgs::srv::SetPwmout_Request>::value &&
    has_fixed_size<akari_msgs::srv::SetPwmout_Response>::value
  >
{
};

template<>
struct has_bounded_size<akari_msgs::srv::SetPwmout>
  : std::integral_constant<
    bool,
    has_bounded_size<akari_msgs::srv::SetPwmout_Request>::value &&
    has_bounded_size<akari_msgs::srv::SetPwmout_Response>::value
  >
{
};

template<>
struct is_service<akari_msgs::srv::SetPwmout>
  : std::true_type
{
};

template<>
struct is_service_request<akari_msgs::srv::SetPwmout_Request>
  : std::true_type
{
};

template<>
struct is_service_response<akari_msgs::srv::SetPwmout_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AKARI_MSGS__SRV__DETAIL__SET_PWMOUT__TRAITS_HPP_
