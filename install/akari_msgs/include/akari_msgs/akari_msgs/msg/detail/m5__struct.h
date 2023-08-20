// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from akari_msgs:msg/M5.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__MSG__DETAIL__M5__STRUCT_H_
#define AKARI_MSGS__MSG__DETAIL__M5__STRUCT_H_

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

/// Struct defined in msg/M5 in the package akari_msgs.
/**
  * This is the buttons message
 */
typedef struct akari_msgs__msg__M5
{
  std_msgs__msg__Header header;
  bool button_a;
  bool button_b;
  bool button_c;
  bool din0;
  bool din1;
  uint16_t ain0;
  bool dout0;
  bool dout1;
  uint8_t pwmout0;
  float temperature;
  float pressure;
  uint16_t brightness;
  float imu_ax;
  float imu_ay;
  float imu_az;
  float imu_gx;
  float imu_gy;
  float imu_gz;
  float imu_pitch;
  float imu_roll;
  float imu_yaw;
  float general0;
  float general1;
} akari_msgs__msg__M5;

// Struct for a sequence of akari_msgs__msg__M5.
typedef struct akari_msgs__msg__M5__Sequence
{
  akari_msgs__msg__M5 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} akari_msgs__msg__M5__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__MSG__DETAIL__M5__STRUCT_H_
