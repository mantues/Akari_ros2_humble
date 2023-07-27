// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from akari_msgs:action/MoveJoint.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__TRAITS_HPP_
#define AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "akari_msgs/action/detail/move_joint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace akari_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveJoint_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: acc_pan
  {
    out << "acc_pan: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_pan, out);
    out << ", ";
  }

  // member: acc_tilt
  {
    out << "acc_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_tilt, out);
    out << ", ";
  }

  // member: vel_pan
  {
    out << "vel_pan: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_pan, out);
    out << ", ";
  }

  // member: vel_tilt
  {
    out << "vel_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_tilt, out);
    out << ", ";
  }

  // member: goal_pan
  {
    out << "goal_pan: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_pan, out);
    out << ", ";
  }

  // member: goal_tilt
  {
    out << "goal_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_tilt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveJoint_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: acc_pan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_pan: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_pan, out);
    out << "\n";
  }

  // member: acc_tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_tilt, out);
    out << "\n";
  }

  // member: vel_pan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_pan: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_pan, out);
    out << "\n";
  }

  // member: vel_tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_tilt, out);
    out << "\n";
  }

  // member: goal_pan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_pan: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_pan, out);
    out << "\n";
  }

  // member: goal_tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.goal_tilt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveJoint_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace akari_msgs

namespace rosidl_generator_traits
{

[[deprecated("use akari_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const akari_msgs::action::MoveJoint_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::action::MoveJoint_Goal & msg)
{
  return akari_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::action::MoveJoint_Goal>()
{
  return "akari_msgs::action::MoveJoint_Goal";
}

template<>
inline const char * name<akari_msgs::action::MoveJoint_Goal>()
{
  return "akari_msgs/action/MoveJoint_Goal";
}

template<>
struct has_fixed_size<akari_msgs::action::MoveJoint_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<akari_msgs::action::MoveJoint_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<akari_msgs::action::MoveJoint_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace akari_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveJoint_Result & msg,
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
  const MoveJoint_Result & msg,
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

inline std::string to_yaml(const MoveJoint_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace akari_msgs

namespace rosidl_generator_traits
{

[[deprecated("use akari_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const akari_msgs::action::MoveJoint_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::action::MoveJoint_Result & msg)
{
  return akari_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::action::MoveJoint_Result>()
{
  return "akari_msgs::action::MoveJoint_Result";
}

template<>
inline const char * name<akari_msgs::action::MoveJoint_Result>()
{
  return "akari_msgs/action/MoveJoint_Result";
}

template<>
struct has_fixed_size<akari_msgs::action::MoveJoint_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<akari_msgs::action::MoveJoint_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<akari_msgs::action::MoveJoint_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace akari_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveJoint_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: pos_pan
  {
    out << "pos_pan: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_pan, out);
    out << ", ";
  }

  // member: pos_tilt
  {
    out << "pos_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_tilt, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveJoint_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: pos_pan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_pan: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_pan, out);
    out << "\n";
  }

  // member: pos_tilt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_tilt: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_tilt, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveJoint_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace akari_msgs

namespace rosidl_generator_traits
{

[[deprecated("use akari_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const akari_msgs::action::MoveJoint_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::action::MoveJoint_Feedback & msg)
{
  return akari_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::action::MoveJoint_Feedback>()
{
  return "akari_msgs::action::MoveJoint_Feedback";
}

template<>
inline const char * name<akari_msgs::action::MoveJoint_Feedback>()
{
  return "akari_msgs/action/MoveJoint_Feedback";
}

template<>
struct has_fixed_size<akari_msgs::action::MoveJoint_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<akari_msgs::action::MoveJoint_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<akari_msgs::action::MoveJoint_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "akari_msgs/action/detail/move_joint__traits.hpp"

namespace akari_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveJoint_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveJoint_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveJoint_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace akari_msgs

namespace rosidl_generator_traits
{

[[deprecated("use akari_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const akari_msgs::action::MoveJoint_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::action::MoveJoint_SendGoal_Request & msg)
{
  return akari_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::action::MoveJoint_SendGoal_Request>()
{
  return "akari_msgs::action::MoveJoint_SendGoal_Request";
}

template<>
inline const char * name<akari_msgs::action::MoveJoint_SendGoal_Request>()
{
  return "akari_msgs/action/MoveJoint_SendGoal_Request";
}

template<>
struct has_fixed_size<akari_msgs::action::MoveJoint_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<akari_msgs::action::MoveJoint_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<akari_msgs::action::MoveJoint_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<akari_msgs::action::MoveJoint_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<akari_msgs::action::MoveJoint_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace akari_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveJoint_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveJoint_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveJoint_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace akari_msgs

namespace rosidl_generator_traits
{

[[deprecated("use akari_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const akari_msgs::action::MoveJoint_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::action::MoveJoint_SendGoal_Response & msg)
{
  return akari_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::action::MoveJoint_SendGoal_Response>()
{
  return "akari_msgs::action::MoveJoint_SendGoal_Response";
}

template<>
inline const char * name<akari_msgs::action::MoveJoint_SendGoal_Response>()
{
  return "akari_msgs/action/MoveJoint_SendGoal_Response";
}

template<>
struct has_fixed_size<akari_msgs::action::MoveJoint_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<akari_msgs::action::MoveJoint_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<akari_msgs::action::MoveJoint_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<akari_msgs::action::MoveJoint_SendGoal>()
{
  return "akari_msgs::action::MoveJoint_SendGoal";
}

template<>
inline const char * name<akari_msgs::action::MoveJoint_SendGoal>()
{
  return "akari_msgs/action/MoveJoint_SendGoal";
}

template<>
struct has_fixed_size<akari_msgs::action::MoveJoint_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<akari_msgs::action::MoveJoint_SendGoal_Request>::value &&
    has_fixed_size<akari_msgs::action::MoveJoint_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<akari_msgs::action::MoveJoint_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<akari_msgs::action::MoveJoint_SendGoal_Request>::value &&
    has_bounded_size<akari_msgs::action::MoveJoint_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<akari_msgs::action::MoveJoint_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<akari_msgs::action::MoveJoint_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<akari_msgs::action::MoveJoint_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace akari_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveJoint_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveJoint_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveJoint_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace akari_msgs

namespace rosidl_generator_traits
{

[[deprecated("use akari_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const akari_msgs::action::MoveJoint_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::action::MoveJoint_GetResult_Request & msg)
{
  return akari_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::action::MoveJoint_GetResult_Request>()
{
  return "akari_msgs::action::MoveJoint_GetResult_Request";
}

template<>
inline const char * name<akari_msgs::action::MoveJoint_GetResult_Request>()
{
  return "akari_msgs/action/MoveJoint_GetResult_Request";
}

template<>
struct has_fixed_size<akari_msgs::action::MoveJoint_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<akari_msgs::action::MoveJoint_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<akari_msgs::action::MoveJoint_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "akari_msgs/action/detail/move_joint__traits.hpp"

namespace akari_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveJoint_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveJoint_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveJoint_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace akari_msgs

namespace rosidl_generator_traits
{

[[deprecated("use akari_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const akari_msgs::action::MoveJoint_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::action::MoveJoint_GetResult_Response & msg)
{
  return akari_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::action::MoveJoint_GetResult_Response>()
{
  return "akari_msgs::action::MoveJoint_GetResult_Response";
}

template<>
inline const char * name<akari_msgs::action::MoveJoint_GetResult_Response>()
{
  return "akari_msgs/action/MoveJoint_GetResult_Response";
}

template<>
struct has_fixed_size<akari_msgs::action::MoveJoint_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<akari_msgs::action::MoveJoint_Result>::value> {};

template<>
struct has_bounded_size<akari_msgs::action::MoveJoint_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<akari_msgs::action::MoveJoint_Result>::value> {};

template<>
struct is_message<akari_msgs::action::MoveJoint_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<akari_msgs::action::MoveJoint_GetResult>()
{
  return "akari_msgs::action::MoveJoint_GetResult";
}

template<>
inline const char * name<akari_msgs::action::MoveJoint_GetResult>()
{
  return "akari_msgs/action/MoveJoint_GetResult";
}

template<>
struct has_fixed_size<akari_msgs::action::MoveJoint_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<akari_msgs::action::MoveJoint_GetResult_Request>::value &&
    has_fixed_size<akari_msgs::action::MoveJoint_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<akari_msgs::action::MoveJoint_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<akari_msgs::action::MoveJoint_GetResult_Request>::value &&
    has_bounded_size<akari_msgs::action::MoveJoint_GetResult_Response>::value
  >
{
};

template<>
struct is_service<akari_msgs::action::MoveJoint_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<akari_msgs::action::MoveJoint_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<akari_msgs::action::MoveJoint_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "akari_msgs/action/detail/move_joint__traits.hpp"

namespace akari_msgs
{

namespace action
{

inline void to_flow_style_yaml(
  const MoveJoint_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MoveJoint_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MoveJoint_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace akari_msgs

namespace rosidl_generator_traits
{

[[deprecated("use akari_msgs::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const akari_msgs::action::MoveJoint_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::action::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::action::MoveJoint_FeedbackMessage & msg)
{
  return akari_msgs::action::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::action::MoveJoint_FeedbackMessage>()
{
  return "akari_msgs::action::MoveJoint_FeedbackMessage";
}

template<>
inline const char * name<akari_msgs::action::MoveJoint_FeedbackMessage>()
{
  return "akari_msgs/action/MoveJoint_FeedbackMessage";
}

template<>
struct has_fixed_size<akari_msgs::action::MoveJoint_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<akari_msgs::action::MoveJoint_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<akari_msgs::action::MoveJoint_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<akari_msgs::action::MoveJoint_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<akari_msgs::action::MoveJoint_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<akari_msgs::action::MoveJoint>
  : std::true_type
{
};

template<>
struct is_action_goal<akari_msgs::action::MoveJoint_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<akari_msgs::action::MoveJoint_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<akari_msgs::action::MoveJoint_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__TRAITS_HPP_
