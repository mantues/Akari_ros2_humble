// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from akari_msgs:srv/SetJointBool.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_JOINT_BOOL__TRAITS_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_JOINT_BOOL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "akari_msgs/srv/detail/set_joint_bool__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace akari_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointBool_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_name
  {
    if (msg.joint_name.size() == 0) {
      out << "joint_name: []";
    } else {
      out << "joint_name: [";
      size_t pending_items = msg.joint_name.size();
      for (auto item : msg.joint_name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: val
  {
    if (msg.val.size() == 0) {
      out << "val: []";
    } else {
      out << "val: [";
      size_t pending_items = msg.val.size();
      for (auto item : msg.val) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetJointBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_name.size() == 0) {
      out << "joint_name: []\n";
    } else {
      out << "joint_name:\n";
      for (auto item : msg.joint_name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.val.size() == 0) {
      out << "val: []\n";
    } else {
      out << "val:\n";
      for (auto item : msg.val) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetJointBool_Request & msg, bool use_flow_style = false)
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
  const akari_msgs::srv::SetJointBool_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::srv::SetJointBool_Request & msg)
{
  return akari_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::srv::SetJointBool_Request>()
{
  return "akari_msgs::srv::SetJointBool_Request";
}

template<>
inline const char * name<akari_msgs::srv::SetJointBool_Request>()
{
  return "akari_msgs/srv/SetJointBool_Request";
}

template<>
struct has_fixed_size<akari_msgs::srv::SetJointBool_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<akari_msgs::srv::SetJointBool_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<akari_msgs::srv::SetJointBool_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace akari_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetJointBool_Response & msg,
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
  const SetJointBool_Response & msg,
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

inline std::string to_yaml(const SetJointBool_Response & msg, bool use_flow_style = false)
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
  const akari_msgs::srv::SetJointBool_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::srv::SetJointBool_Response & msg)
{
  return akari_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::srv::SetJointBool_Response>()
{
  return "akari_msgs::srv::SetJointBool_Response";
}

template<>
inline const char * name<akari_msgs::srv::SetJointBool_Response>()
{
  return "akari_msgs/srv/SetJointBool_Response";
}

template<>
struct has_fixed_size<akari_msgs::srv::SetJointBool_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<akari_msgs::srv::SetJointBool_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<akari_msgs::srv::SetJointBool_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<akari_msgs::srv::SetJointBool>()
{
  return "akari_msgs::srv::SetJointBool";
}

template<>
inline const char * name<akari_msgs::srv::SetJointBool>()
{
  return "akari_msgs/srv/SetJointBool";
}

template<>
struct has_fixed_size<akari_msgs::srv::SetJointBool>
  : std::integral_constant<
    bool,
    has_fixed_size<akari_msgs::srv::SetJointBool_Request>::value &&
    has_fixed_size<akari_msgs::srv::SetJointBool_Response>::value
  >
{
};

template<>
struct has_bounded_size<akari_msgs::srv::SetJointBool>
  : std::integral_constant<
    bool,
    has_bounded_size<akari_msgs::srv::SetJointBool_Request>::value &&
    has_bounded_size<akari_msgs::srv::SetJointBool_Response>::value
  >
{
};

template<>
struct is_service<akari_msgs::srv::SetJointBool>
  : std::true_type
{
};

template<>
struct is_service_request<akari_msgs::srv::SetJointBool_Request>
  : std::true_type
{
};

template<>
struct is_service_response<akari_msgs::srv::SetJointBool_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AKARI_MSGS__SRV__DETAIL__SET_JOINT_BOOL__TRAITS_HPP_
