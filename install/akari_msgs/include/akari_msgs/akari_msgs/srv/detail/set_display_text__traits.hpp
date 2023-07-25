// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from akari_msgs:srv/SetDisplayText.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_TEXT__TRAITS_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_TEXT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "akari_msgs/srv/detail/set_display_text__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace akari_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDisplayText_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << ", ";
  }

  // member: pos_x
  {
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << ", ";
  }

  // member: pos_y
  {
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << ", ";
  }

  // member: text_color
  {
    out << "text_color: ";
    rosidl_generator_traits::value_to_yaml(msg.text_color, out);
    out << ", ";
  }

  // member: back_color
  {
    out << "back_color: ";
    rosidl_generator_traits::value_to_yaml(msg.back_color, out);
    out << ", ";
  }

  // member: refresh
  {
    out << "refresh: ";
    rosidl_generator_traits::value_to_yaml(msg.refresh, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDisplayText_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }

  // member: pos_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_x: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_x, out);
    out << "\n";
  }

  // member: pos_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_y: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_y, out);
    out << "\n";
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size: ";
    rosidl_generator_traits::value_to_yaml(msg.size, out);
    out << "\n";
  }

  // member: text_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text_color: ";
    rosidl_generator_traits::value_to_yaml(msg.text_color, out);
    out << "\n";
  }

  // member: back_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "back_color: ";
    rosidl_generator_traits::value_to_yaml(msg.back_color, out);
    out << "\n";
  }

  // member: refresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refresh: ";
    rosidl_generator_traits::value_to_yaml(msg.refresh, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDisplayText_Request & msg, bool use_flow_style = false)
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
  const akari_msgs::srv::SetDisplayText_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::srv::SetDisplayText_Request & msg)
{
  return akari_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::srv::SetDisplayText_Request>()
{
  return "akari_msgs::srv::SetDisplayText_Request";
}

template<>
inline const char * name<akari_msgs::srv::SetDisplayText_Request>()
{
  return "akari_msgs/srv/SetDisplayText_Request";
}

template<>
struct has_fixed_size<akari_msgs::srv::SetDisplayText_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<akari_msgs::srv::SetDisplayText_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<akari_msgs::srv::SetDisplayText_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace akari_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDisplayText_Response & msg,
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
  const SetDisplayText_Response & msg,
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

inline std::string to_yaml(const SetDisplayText_Response & msg, bool use_flow_style = false)
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
  const akari_msgs::srv::SetDisplayText_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::srv::SetDisplayText_Response & msg)
{
  return akari_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::srv::SetDisplayText_Response>()
{
  return "akari_msgs::srv::SetDisplayText_Response";
}

template<>
inline const char * name<akari_msgs::srv::SetDisplayText_Response>()
{
  return "akari_msgs/srv/SetDisplayText_Response";
}

template<>
struct has_fixed_size<akari_msgs::srv::SetDisplayText_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<akari_msgs::srv::SetDisplayText_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<akari_msgs::srv::SetDisplayText_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<akari_msgs::srv::SetDisplayText>()
{
  return "akari_msgs::srv::SetDisplayText";
}

template<>
inline const char * name<akari_msgs::srv::SetDisplayText>()
{
  return "akari_msgs/srv/SetDisplayText";
}

template<>
struct has_fixed_size<akari_msgs::srv::SetDisplayText>
  : std::integral_constant<
    bool,
    has_fixed_size<akari_msgs::srv::SetDisplayText_Request>::value &&
    has_fixed_size<akari_msgs::srv::SetDisplayText_Response>::value
  >
{
};

template<>
struct has_bounded_size<akari_msgs::srv::SetDisplayText>
  : std::integral_constant<
    bool,
    has_bounded_size<akari_msgs::srv::SetDisplayText_Request>::value &&
    has_bounded_size<akari_msgs::srv::SetDisplayText_Response>::value
  >
{
};

template<>
struct is_service<akari_msgs::srv::SetDisplayText>
  : std::true_type
{
};

template<>
struct is_service_request<akari_msgs::srv::SetDisplayText_Request>
  : std::true_type
{
};

template<>
struct is_service_response<akari_msgs::srv::SetDisplayText_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_TEXT__TRAITS_HPP_
