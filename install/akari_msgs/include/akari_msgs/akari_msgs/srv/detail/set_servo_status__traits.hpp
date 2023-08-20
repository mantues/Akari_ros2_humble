// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from akari_msgs:srv/SetServoStatus.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_SERVO_STATUS__TRAITS_HPP_
#define AKARI_MSGS__SRV__DETAIL__SET_SERVO_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "akari_msgs/srv/detail/set_servo_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace akari_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetServoStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_name
  {
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << ", ";
  }

  // member: joint_name_array
  {
    if (msg.joint_name_array.size() == 0) {
      out << "joint_name_array: []";
    } else {
      out << "joint_name_array: [";
      size_t pending_items = msg.joint_name_array.size();
      for (auto item : msg.joint_name_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_vel_val
  {
    out << "joint_vel_val: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_vel_val, out);
    out << ", ";
  }

  // member: joint_vel_array
  {
    if (msg.joint_vel_array.size() == 0) {
      out << "joint_vel_array: []";
    } else {
      out << "joint_vel_array: [";
      size_t pending_items = msg.joint_vel_array.size();
      for (auto item : msg.joint_vel_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: joint_acc_val
  {
    out << "joint_acc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_acc_val, out);
    out << ", ";
  }

  // member: joint_acc_array
  {
    if (msg.joint_acc_array.size() == 0) {
      out << "joint_acc_array: []";
    } else {
      out << "joint_acc_array: [";
      size_t pending_items = msg.joint_acc_array.size();
      for (auto item : msg.joint_acc_array) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: servo_enable
  {
    out << "servo_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_enable, out);
    out << ", ";
  }

  // member: servo_enable_array
  {
    if (msg.servo_enable_array.size() == 0) {
      out << "servo_enable_array: []";
    } else {
      out << "servo_enable_array: [";
      size_t pending_items = msg.servo_enable_array.size();
      for (auto item : msg.servo_enable_array) {
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
  const SetServoStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_name, out);
    out << "\n";
  }

  // member: joint_name_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_name_array.size() == 0) {
      out << "joint_name_array: []\n";
    } else {
      out << "joint_name_array:\n";
      for (auto item : msg.joint_name_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_vel_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_vel_val: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_vel_val, out);
    out << "\n";
  }

  // member: joint_vel_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_vel_array.size() == 0) {
      out << "joint_vel_array: []\n";
    } else {
      out << "joint_vel_array:\n";
      for (auto item : msg.joint_vel_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: joint_acc_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_acc_val: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_acc_val, out);
    out << "\n";
  }

  // member: joint_acc_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_acc_array.size() == 0) {
      out << "joint_acc_array: []\n";
    } else {
      out << "joint_acc_array:\n";
      for (auto item : msg.joint_acc_array) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: servo_enable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "servo_enable: ";
    rosidl_generator_traits::value_to_yaml(msg.servo_enable, out);
    out << "\n";
  }

  // member: servo_enable_array
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servo_enable_array.size() == 0) {
      out << "servo_enable_array: []\n";
    } else {
      out << "servo_enable_array:\n";
      for (auto item : msg.servo_enable_array) {
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

inline std::string to_yaml(const SetServoStatus_Request & msg, bool use_flow_style = false)
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
  const akari_msgs::srv::SetServoStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::srv::SetServoStatus_Request & msg)
{
  return akari_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::srv::SetServoStatus_Request>()
{
  return "akari_msgs::srv::SetServoStatus_Request";
}

template<>
inline const char * name<akari_msgs::srv::SetServoStatus_Request>()
{
  return "akari_msgs/srv/SetServoStatus_Request";
}

template<>
struct has_fixed_size<akari_msgs::srv::SetServoStatus_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<akari_msgs::srv::SetServoStatus_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<akari_msgs::srv::SetServoStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace akari_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetServoStatus_Response & msg,
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
  const SetServoStatus_Response & msg,
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

inline std::string to_yaml(const SetServoStatus_Response & msg, bool use_flow_style = false)
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
  const akari_msgs::srv::SetServoStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::srv::SetServoStatus_Response & msg)
{
  return akari_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::srv::SetServoStatus_Response>()
{
  return "akari_msgs::srv::SetServoStatus_Response";
}

template<>
inline const char * name<akari_msgs::srv::SetServoStatus_Response>()
{
  return "akari_msgs/srv/SetServoStatus_Response";
}

template<>
struct has_fixed_size<akari_msgs::srv::SetServoStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<akari_msgs::srv::SetServoStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<akari_msgs::srv::SetServoStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<akari_msgs::srv::SetServoStatus>()
{
  return "akari_msgs::srv::SetServoStatus";
}

template<>
inline const char * name<akari_msgs::srv::SetServoStatus>()
{
  return "akari_msgs/srv/SetServoStatus";
}

template<>
struct has_fixed_size<akari_msgs::srv::SetServoStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<akari_msgs::srv::SetServoStatus_Request>::value &&
    has_fixed_size<akari_msgs::srv::SetServoStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<akari_msgs::srv::SetServoStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<akari_msgs::srv::SetServoStatus_Request>::value &&
    has_bounded_size<akari_msgs::srv::SetServoStatus_Response>::value
  >
{
};

template<>
struct is_service<akari_msgs::srv::SetServoStatus>
  : std::true_type
{
};

template<>
struct is_service_request<akari_msgs::srv::SetServoStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<akari_msgs::srv::SetServoStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // AKARI_MSGS__SRV__DETAIL__SET_SERVO_STATUS__TRAITS_HPP_
