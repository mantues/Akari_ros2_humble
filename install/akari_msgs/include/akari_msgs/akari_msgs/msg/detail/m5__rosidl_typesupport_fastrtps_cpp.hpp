// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from akari_msgs:msg/M5.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__MSG__DETAIL__M5__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AKARI_MSGS__MSG__DETAIL__M5__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "akari_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "akari_msgs/msg/detail/m5__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace akari_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_akari_msgs
cdr_serialize(
  const akari_msgs::msg::M5 & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_akari_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  akari_msgs::msg::M5 & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_akari_msgs
get_serialized_size(
  const akari_msgs::msg::M5 & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_akari_msgs
max_serialized_size_M5(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace akari_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_akari_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, akari_msgs, msg, M5)();

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__MSG__DETAIL__M5__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
