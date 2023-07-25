// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from akari_msgs:srv/SetDisplayText.idl
// generated code does not contain a copyright notice
#include "akari_msgs/srv/detail/set_display_text__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "akari_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "akari_msgs/srv/detail/set_display_text__struct.h"
#include "akari_msgs/srv/detail/set_display_text__functions.h"
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

#include "rosidl_runtime_c/string.h"  // back_color, text, text_color
#include "rosidl_runtime_c/string_functions.h"  // back_color, text, text_color

// forward declare type support functions


using _SetDisplayText_Request__ros_msg_type = akari_msgs__srv__SetDisplayText_Request;

static bool _SetDisplayText_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetDisplayText_Request__ros_msg_type * ros_message = static_cast<const _SetDisplayText_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: text
  {
    const rosidl_runtime_c__String * str = &ros_message->text;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pos_x
  {
    cdr << ros_message->pos_x;
  }

  // Field name: pos_y
  {
    cdr << ros_message->pos_y;
  }

  // Field name: size
  {
    cdr << ros_message->size;
  }

  // Field name: text_color
  {
    const rosidl_runtime_c__String * str = &ros_message->text_color;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: back_color
  {
    const rosidl_runtime_c__String * str = &ros_message->back_color;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: refresh
  {
    cdr << (ros_message->refresh ? true : false);
  }

  return true;
}

static bool _SetDisplayText_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetDisplayText_Request__ros_msg_type * ros_message = static_cast<_SetDisplayText_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->text.data) {
      rosidl_runtime_c__String__init(&ros_message->text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'text'\n");
      return false;
    }
  }

  // Field name: pos_x
  {
    cdr >> ros_message->pos_x;
  }

  // Field name: pos_y
  {
    cdr >> ros_message->pos_y;
  }

  // Field name: size
  {
    cdr >> ros_message->size;
  }

  // Field name: text_color
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->text_color.data) {
      rosidl_runtime_c__String__init(&ros_message->text_color);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->text_color,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'text_color'\n");
      return false;
    }
  }

  // Field name: back_color
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->back_color.data) {
      rosidl_runtime_c__String__init(&ros_message->back_color);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->back_color,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'back_color'\n");
      return false;
    }
  }

  // Field name: refresh
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->refresh = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_akari_msgs
size_t get_serialized_size_akari_msgs__srv__SetDisplayText_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetDisplayText_Request__ros_msg_type * ros_message = static_cast<const _SetDisplayText_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text.size + 1);
  // field.name pos_x
  {
    size_t item_size = sizeof(ros_message->pos_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pos_y
  {
    size_t item_size = sizeof(ros_message->pos_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name size
  {
    size_t item_size = sizeof(ros_message->size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name text_color
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->text_color.size + 1);
  // field.name back_color
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->back_color.size + 1);
  // field.name refresh
  {
    size_t item_size = sizeof(ros_message->refresh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SetDisplayText_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_akari_msgs__srv__SetDisplayText_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_akari_msgs
size_t max_serialized_size_akari_msgs__srv__SetDisplayText_Request(
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

  // member: text
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: pos_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pos_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: text_color
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: back_color
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: refresh
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SetDisplayText_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_akari_msgs__srv__SetDisplayText_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetDisplayText_Request = {
  "akari_msgs::srv",
  "SetDisplayText_Request",
  _SetDisplayText_Request__cdr_serialize,
  _SetDisplayText_Request__cdr_deserialize,
  _SetDisplayText_Request__get_serialized_size,
  _SetDisplayText_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetDisplayText_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetDisplayText_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, srv, SetDisplayText_Request)() {
  return &_SetDisplayText_Request__type_support;
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
// #include "akari_msgs/srv/detail/set_display_text__struct.h"
// already included above
// #include "akari_msgs/srv/detail/set_display_text__functions.h"
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


using _SetDisplayText_Response__ros_msg_type = akari_msgs__srv__SetDisplayText_Response;

static bool _SetDisplayText_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SetDisplayText_Response__ros_msg_type * ros_message = static_cast<const _SetDisplayText_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    cdr << (ros_message->result ? true : false);
  }

  return true;
}

static bool _SetDisplayText_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SetDisplayText_Response__ros_msg_type * ros_message = static_cast<_SetDisplayText_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: result
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->result = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_akari_msgs
size_t get_serialized_size_akari_msgs__srv__SetDisplayText_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SetDisplayText_Response__ros_msg_type * ros_message = static_cast<const _SetDisplayText_Response__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _SetDisplayText_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_akari_msgs__srv__SetDisplayText_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_akari_msgs
size_t max_serialized_size_akari_msgs__srv__SetDisplayText_Response(
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

static size_t _SetDisplayText_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_akari_msgs__srv__SetDisplayText_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SetDisplayText_Response = {
  "akari_msgs::srv",
  "SetDisplayText_Response",
  _SetDisplayText_Response__cdr_serialize,
  _SetDisplayText_Response__cdr_deserialize,
  _SetDisplayText_Response__get_serialized_size,
  _SetDisplayText_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetDisplayText_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SetDisplayText_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, srv, SetDisplayText_Response)() {
  return &_SetDisplayText_Response__type_support;
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
#include "akari_msgs/srv/set_display_text.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t SetDisplayText__callbacks = {
  "akari_msgs::srv",
  "SetDisplayText",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, srv, SetDisplayText_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, srv, SetDisplayText_Response)(),
};

static rosidl_service_type_support_t SetDisplayText__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &SetDisplayText__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, srv, SetDisplayText)() {
  return &SetDisplayText__handle;
}

#if defined(__cplusplus)
}
#endif
