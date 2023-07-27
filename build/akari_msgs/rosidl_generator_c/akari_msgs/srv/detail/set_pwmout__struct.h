// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from akari_msgs:srv/SetPwmout.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_PWMOUT__STRUCT_H_
#define AKARI_MSGS__SRV__DETAIL__SET_PWMOUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetPwmout in the package akari_msgs.
typedef struct akari_msgs__srv__SetPwmout_Request
{
  uint8_t pin_id;
  uint8_t val;
} akari_msgs__srv__SetPwmout_Request;

// Struct for a sequence of akari_msgs__srv__SetPwmout_Request.
typedef struct akari_msgs__srv__SetPwmout_Request__Sequence
{
  akari_msgs__srv__SetPwmout_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetPwmout_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetPwmout in the package akari_msgs.
typedef struct akari_msgs__srv__SetPwmout_Response
{
  bool result;
} akari_msgs__srv__SetPwmout_Response;

// Struct for a sequence of akari_msgs__srv__SetPwmout_Response.
typedef struct akari_msgs__srv__SetPwmout_Response__Sequence
{
  akari_msgs__srv__SetPwmout_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetPwmout_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__SRV__DETAIL__SET_PWMOUT__STRUCT_H_
