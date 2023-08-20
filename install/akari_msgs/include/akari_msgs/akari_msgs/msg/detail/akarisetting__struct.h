// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from akari_msgs:msg/Akarisetting.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__MSG__DETAIL__AKARISETTING__STRUCT_H_
#define AKARI_MSGS__MSG__DETAIL__AKARISETTING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'jointname'
#include "rosidl_runtime_c/string.h"
// Member 'jointpositions'
// Member 'jointvelocities'
// Member 'jointaccelerations'
// Member 'servoenabled'
// Member 'servomovingstate'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Akarisetting in the package akari_msgs.
/**
  * This is the buttons message
 */
typedef struct akari_msgs__msg__Akarisetting
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String__Sequence jointname;
  rosidl_runtime_c__float__Sequence jointpositions;
  rosidl_runtime_c__float__Sequence jointvelocities;
  rosidl_runtime_c__float__Sequence jointaccelerations;
  rosidl_runtime_c__boolean__Sequence servoenabled;
  rosidl_runtime_c__boolean__Sequence servomovingstate;
} akari_msgs__msg__Akarisetting;

// Struct for a sequence of akari_msgs__msg__Akarisetting.
typedef struct akari_msgs__msg__Akarisetting__Sequence
{
  akari_msgs__msg__Akarisetting * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__msg__Akarisetting__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__MSG__DETAIL__AKARISETTING__STRUCT_H_
