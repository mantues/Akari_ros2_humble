// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from akari_msgs:msg/M5.idl
// generated code does not contain a copyright notice
#include "akari_msgs/msg/detail/m5__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "akari_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "akari_msgs/msg/detail/m5__struct.h"
#include "akari_msgs/msg/detail/m5__functions.h"
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

#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_akari_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_akari_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_akari_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _M5__ros_msg_type = akari_msgs__msg__M5;

static bool _M5__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _M5__ros_msg_type * ros_message = static_cast<const _M5__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: button_a
  {
    cdr << (ros_message->button_a ? true : false);
  }

  // Field name: button_b
  {
    cdr << (ros_message->button_b ? true : false);
  }

  // Field name: button_c
  {
    cdr << (ros_message->button_c ? true : false);
  }

  // Field name: din0
  {
    cdr << (ros_message->din0 ? true : false);
  }

  // Field name: din1
  {
    cdr << (ros_message->din1 ? true : false);
  }

  // Field name: ain0
  {
    cdr << ros_message->ain0;
  }

  // Field name: dout0
  {
    cdr << (ros_message->dout0 ? true : false);
  }

  // Field name: dout1
  {
    cdr << (ros_message->dout1 ? true : false);
  }

  // Field name: pwmout0
  {
    cdr << ros_message->pwmout0;
  }

  // Field name: temperature
  {
    cdr << ros_message->temperature;
  }

  // Field name: pressure
  {
    cdr << ros_message->pressure;
  }

  // Field name: brightness
  {
    cdr << ros_message->brightness;
  }

  // Field name: imu_ax
  {
    cdr << ros_message->imu_ax;
  }

  // Field name: imu_ay
  {
    cdr << ros_message->imu_ay;
  }

  // Field name: imu_az
  {
    cdr << ros_message->imu_az;
  }

  // Field name: imu_gx
  {
    cdr << ros_message->imu_gx;
  }

  // Field name: imu_gy
  {
    cdr << ros_message->imu_gy;
  }

  // Field name: imu_gz
  {
    cdr << ros_message->imu_gz;
  }

  // Field name: imu_pitch
  {
    cdr << ros_message->imu_pitch;
  }

  // Field name: imu_roll
  {
    cdr << ros_message->imu_roll;
  }

  // Field name: imu_yaw
  {
    cdr << ros_message->imu_yaw;
  }

  // Field name: general0
  {
    cdr << ros_message->general0;
  }

  // Field name: general1
  {
    cdr << ros_message->general1;
  }

  return true;
}

static bool _M5__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _M5__ros_msg_type * ros_message = static_cast<_M5__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: button_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_a = tmp ? true : false;
  }

  // Field name: button_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_b = tmp ? true : false;
  }

  // Field name: button_c
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->button_c = tmp ? true : false;
  }

  // Field name: din0
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->din0 = tmp ? true : false;
  }

  // Field name: din1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->din1 = tmp ? true : false;
  }

  // Field name: ain0
  {
    cdr >> ros_message->ain0;
  }

  // Field name: dout0
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dout0 = tmp ? true : false;
  }

  // Field name: dout1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dout1 = tmp ? true : false;
  }

  // Field name: pwmout0
  {
    cdr >> ros_message->pwmout0;
  }

  // Field name: temperature
  {
    cdr >> ros_message->temperature;
  }

  // Field name: pressure
  {
    cdr >> ros_message->pressure;
  }

  // Field name: brightness
  {
    cdr >> ros_message->brightness;
  }

  // Field name: imu_ax
  {
    cdr >> ros_message->imu_ax;
  }

  // Field name: imu_ay
  {
    cdr >> ros_message->imu_ay;
  }

  // Field name: imu_az
  {
    cdr >> ros_message->imu_az;
  }

  // Field name: imu_gx
  {
    cdr >> ros_message->imu_gx;
  }

  // Field name: imu_gy
  {
    cdr >> ros_message->imu_gy;
  }

  // Field name: imu_gz
  {
    cdr >> ros_message->imu_gz;
  }

  // Field name: imu_pitch
  {
    cdr >> ros_message->imu_pitch;
  }

  // Field name: imu_roll
  {
    cdr >> ros_message->imu_roll;
  }

  // Field name: imu_yaw
  {
    cdr >> ros_message->imu_yaw;
  }

  // Field name: general0
  {
    cdr >> ros_message->general0;
  }

  // Field name: general1
  {
    cdr >> ros_message->general1;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_akari_msgs
size_t get_serialized_size_akari_msgs__msg__M5(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _M5__ros_msg_type * ros_message = static_cast<const _M5__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name button_a
  {
    size_t item_size = sizeof(ros_message->button_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_b
  {
    size_t item_size = sizeof(ros_message->button_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name button_c
  {
    size_t item_size = sizeof(ros_message->button_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name din0
  {
    size_t item_size = sizeof(ros_message->din0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name din1
  {
    size_t item_size = sizeof(ros_message->din1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ain0
  {
    size_t item_size = sizeof(ros_message->ain0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dout0
  {
    size_t item_size = sizeof(ros_message->dout0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dout1
  {
    size_t item_size = sizeof(ros_message->dout1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pwmout0
  {
    size_t item_size = sizeof(ros_message->pwmout0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature
  {
    size_t item_size = sizeof(ros_message->temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name pressure
  {
    size_t item_size = sizeof(ros_message->pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name brightness
  {
    size_t item_size = sizeof(ros_message->brightness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_ax
  {
    size_t item_size = sizeof(ros_message->imu_ax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_ay
  {
    size_t item_size = sizeof(ros_message->imu_ay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_az
  {
    size_t item_size = sizeof(ros_message->imu_az);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_gx
  {
    size_t item_size = sizeof(ros_message->imu_gx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_gy
  {
    size_t item_size = sizeof(ros_message->imu_gy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_gz
  {
    size_t item_size = sizeof(ros_message->imu_gz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_pitch
  {
    size_t item_size = sizeof(ros_message->imu_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_roll
  {
    size_t item_size = sizeof(ros_message->imu_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_yaw
  {
    size_t item_size = sizeof(ros_message->imu_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name general0
  {
    size_t item_size = sizeof(ros_message->general0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name general1
  {
    size_t item_size = sizeof(ros_message->general1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _M5__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_akari_msgs__msg__M5(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_akari_msgs
size_t max_serialized_size_akari_msgs__msg__M5(
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

  // member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: button_a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: button_c
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: din0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: din1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ain0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: dout0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dout1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: pwmout0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: brightness
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: imu_ax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_ay
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_az
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_gx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_gy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_gz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: imu_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: general0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: general1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _M5__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_akari_msgs__msg__M5(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_M5 = {
  "akari_msgs::msg",
  "M5",
  _M5__cdr_serialize,
  _M5__cdr_deserialize,
  _M5__get_serialized_size,
  _M5__max_serialized_size
};

static rosidl_message_type_support_t _M5__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_M5,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, akari_msgs, msg, M5)() {
  return &_M5__type_support;
}

#if defined(__cplusplus)
}
#endif
