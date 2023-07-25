// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from akari_msgs:srv/SetDisplayColor.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_COLOR__STRUCT_H_
#define AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_COLOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'color'
#include "rosidl_runtime_c/string.h"
// Member 'color_var'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetDisplayColor in the package akari_msgs.
typedef struct akari_msgs__srv__SetDisplayColor_Request
{
  rosidl_runtime_c__String color;
  rosidl_runtime_c__int32__Sequence color_var;
} akari_msgs__srv__SetDisplayColor_Request;

// Struct for a sequence of akari_msgs__srv__SetDisplayColor_Request.
typedef struct akari_msgs__srv__SetDisplayColor_Request__Sequence
{
  akari_msgs__srv__SetDisplayColor_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetDisplayColor_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetDisplayColor in the package akari_msgs.
typedef struct akari_msgs__srv__SetDisplayColor_Response
{
  bool result;
} akari_msgs__srv__SetDisplayColor_Response;

// Struct for a sequence of akari_msgs__srv__SetDisplayColor_Response.
typedef struct akari_msgs__srv__SetDisplayColor_Response__Sequence
{
  akari_msgs__srv__SetDisplayColor_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetDisplayColor_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_COLOR__STRUCT_H_
