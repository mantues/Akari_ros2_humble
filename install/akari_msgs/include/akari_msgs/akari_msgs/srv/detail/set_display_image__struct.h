// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from akari_msgs:srv/SetDisplayImage.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_IMAGE__STRUCT_H_
#define AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'filepath'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetDisplayImage in the package akari_msgs.
typedef struct akari_msgs__srv__SetDisplayImage_Request
{
  rosidl_runtime_c__String filepath;
  int32_t pos_x;
  int32_t pos_y;
  float scale;
} akari_msgs__srv__SetDisplayImage_Request;

// Struct for a sequence of akari_msgs__srv__SetDisplayImage_Request.
typedef struct akari_msgs__srv__SetDisplayImage_Request__Sequence
{
  akari_msgs__srv__SetDisplayImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetDisplayImage_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetDisplayImage in the package akari_msgs.
typedef struct akari_msgs__srv__SetDisplayImage_Response
{
  bool result;
} akari_msgs__srv__SetDisplayImage_Response;

// Struct for a sequence of akari_msgs__srv__SetDisplayImage_Response.
typedef struct akari_msgs__srv__SetDisplayImage_Response__Sequence
{
  akari_msgs__srv__SetDisplayImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetDisplayImage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__SRV__DETAIL__SET_DISPLAY_IMAGE__STRUCT_H_
