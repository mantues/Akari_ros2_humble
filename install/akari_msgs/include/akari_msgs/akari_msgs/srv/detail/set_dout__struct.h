// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from akari_msgs:srv/SetDout.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_DOUT__STRUCT_H_
#define AKARI_MSGS__SRV__DETAIL__SET_DOUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetDout in the package akari_msgs.
typedef struct akari_msgs__srv__SetDout_Request
{
  uint8_t pin_id;
  bool val;
} akari_msgs__srv__SetDout_Request;

// Struct for a sequence of akari_msgs__srv__SetDout_Request.
typedef struct akari_msgs__srv__SetDout_Request__Sequence
{
  akari_msgs__srv__SetDout_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetDout_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetDout in the package akari_msgs.
typedef struct akari_msgs__srv__SetDout_Response
{
  bool result;
} akari_msgs__srv__SetDout_Response;

// Struct for a sequence of akari_msgs__srv__SetDout_Response.
typedef struct akari_msgs__srv__SetDout_Response__Sequence
{
  akari_msgs__srv__SetDout_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetDout_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__SRV__DETAIL__SET_DOUT__STRUCT_H_
