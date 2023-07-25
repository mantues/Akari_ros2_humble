// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from akari_msgs:srv/SetPwmout.idl
// generated code does not contain a copyright notice
#include "akari_msgs/srv/detail/set_pwmout__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "akari_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "akari_msgs/srv/detail/set_pwmout__struct.h"
#include "akari_msgs/srv/detail/set_pwmout__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetPwmout_Request__ros_msg_type = akari_msgs__srv__SetPwmout_Request;

static bool _SetPwmout_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPwmout_Request__ros_msg_type * ros_message = static_cast<const _SetPwmout_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pin_id
  {
    cdr << ros_message->pin_id;
  }

  // Field name: val
  {
    cdr << ros_message->val;
  }

  return true;
}

static bool _SetPwmout_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPwmout_Request__ros_msg_type * ros_message = static_cast<_SetPwmout_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: pin_id
  {
    cdr >> ros_message->pin_id;
  }

  // Field name: val
  {
    cdr >> ros_message->val;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_akari_msgs
size_t get_serialized_size_akari_msgs__srv__SetPwmout_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPwmout_Request__ros_msg_type * ros_message = static_cast<const _SetPwmout_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name pin_id
  {
    size_t item_size = sizeof(ros_message->pin_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name val
  {
    size_t item_size = sizeof(ros_message->val);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPwmout_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_akari_msgs__srv__SetPwmout_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_akari_msgs
size_t max_serialized_size_akari_msgs__srv__SetPwmout_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: pin_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: val
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetPwmout_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_akari_msgs__srv__SetPwmout_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetPwmout_Request = {
  "akari_msgs::srv",
  "SetPwmout_Request",
  _SetPwmout_Request__cdr_serialize,
  _SetPwmout_Request__cdr_deserialize,
  _SetPwmout_Request__get_serialized_size,
  _SetPwmout_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetPwmout_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPwmout_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, srv, SetPwmout_Request)() {
  return &_SetPwmout_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "akari_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "akari_msgs/srv/detail/set_pwmout__struct.h"
// already included above
// #include "akari_msgs/srv/detail/set_pwmout__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SetPwmout_Response__ros_msg_type = akari_msgs__srv__SetPwmout_Response;

static bool _SetPwmout_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetPwmout_Response__ros_msg_type * ros_message = static_cast<const _SetPwmout_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _SetPwmout_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetPwmout_Response__ros_msg_type * ros_message = static_cast<_SetPwmout_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_akari_msgs
size_t get_serialized_size_akari_msgs__srv__SetPwmout_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetPwmout_Response__ros_msg_type * ros_message = static_cast<const _SetPwmout_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name result
  {
    size_t item_size = sizeof(ros_message->result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetPwmout_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_akari_msgs__srv__SetPwmout_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_akari_msgs
size_t max_serialized_size_akari_msgs__srv__SetPwmout_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: result
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetPwmout_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_akari_msgs__srv__SetPwmout_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetPwmout_Response = {
  "akari_msgs::srv",
  "SetPwmout_Response",
  _SetPwmout_Response__cdr_serialize,
  _SetPwmout_Response__cdr_deserialize,
  _SetPwmout_Response__get_serialized_size,
  _SetPwmout_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetPwmout_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetPwmout_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, srv, SetPwmout_Response)() {
  return &_SetPwmout_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "akari_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "akari_msgs/srv/set_pwmout.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetPwmout__callbacks = {
  "akari_msgs::srv",
  "SetPwmout",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, srv, SetPwmout_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, srv, SetPwmout_Response)(),
};

static rosidl_service_type_support_t SetPwmout__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetPwmout__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, srv, SetPwmout)() {
  return &SetPwmout__handle;
}

#if defined(__cplusplus)
}
#endif
