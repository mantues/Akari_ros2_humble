// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from akari_msgs:srv/SetJointFloat.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__SRV__DETAIL__SET_JOINT_FLOAT__STRUCT_H_
#define AKARI_MSGS__SRV__DETAIL__SET_JOINT_FLOAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint_name'
#include "rosidl_runtime_c/string.h"
// Member 'val'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SetJointFloat in the package akari_msgs.
typedef struct akari_msgs__srv__SetJointFloat_Request
{
  rosidl_runtime_c__String__Sequence joint_name;
  rosidl_runtime_c__float__Sequence val;
} akari_msgs__srv__SetJointFloat_Request;

// Struct for a sequence of akari_msgs__srv__SetJointFloat_Request.
typedef struct akari_msgs__srv__SetJointFloat_Request__Sequence
{
  akari_msgs__srv__SetJointFloat_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetJointFloat_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetJointFloat in the package akari_msgs.
typedef struct akari_msgs__srv__SetJointFloat_Response
{
  bool result;
} akari_msgs__srv__SetJointFloat_Response;

// Struct for a sequence of akari_msgs__srv__SetJointFloat_Response.
typedef struct akari_msgs__srv__SetJointFloat_Response__Sequence
{
  akari_msgs__srv__SetJointFloat_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__srv__SetJointFloat_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__SRV__DETAIL__SET_JOINT_FLOAT__STRUCT_H_
