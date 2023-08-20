// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from akari_msgs:srv/SetDisplayText.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_TEXT__STRUCT_H_
#define AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_TEXT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
// Member 'text_color'
// Member 'back_color'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetDisplayText in the package akari_msgs.
typedef struct akari_msgs__srv__SetDisplayText_Request
{
  rosidl_runtime_c__String text;
  int32_t pos_x;
  int32_t pos_y;
  uint8_t size;
  rosidl_runtime_c__String text_color;
  rosidl_runtime_c__String back_color;
  bool refresh;
} akari_msgs__srv__SetDisplayText_Request;

// Struct for a sequence of akari_msgs__srv__SetDisplayText_Request.
typedef struct akari_msgs__srv__SetDisplayText_Request__Sequence
{
  akari_msgs__srv__SetDisplayText_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetDisplayText_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetDisplayText in the package akari_msgs.
typedef struct akari_msgs__srv__SetDisplayText_Response
{
  bool result;
} akari_msgs__srv__SetDisplayText_Response;

// Struct for a sequence of akari_msgs__srv__SetDisplayText_Response.
typedef struct akari_msgs__srv__SetDisplayText_Response__Sequence
{
  akari_msgs__srv__SetDisplayText_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetDisplayText_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_TEXT__STRUCT_H_
