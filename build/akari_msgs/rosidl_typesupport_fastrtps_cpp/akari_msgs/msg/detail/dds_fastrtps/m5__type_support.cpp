// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from akari_msgs:msg/M5.idl
// generated code does not contain a copyright notice
#include "akari_msgs/msg/detail/m5__rosidl_typesupport_fastrtps_cpp.hpp"
#include "akari_msgs/msg/detail/m5__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace akari_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_akari_msgs
cdr_serialize(
  const akari_msgs::msg::M5 & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: button_a
  cdr << (ros_message.button_a ? true : false);
  // Member: button_b
  cdr << (ros_message.button_b ? true : false);
  // Member: button_c
  cdr << (ros_message.button_c ? true : false);
  // Member: din0
  cdr << (ros_message.din0 ? true : false);
  // Member: din1
  cdr << (ros_message.din1 ? true : false);
  // Member: ain0
  cdr << ros_message.ain0;
  // Member: dout0
  cdr << (ros_message.dout0 ? true : false);
  // Member: dout1
  cdr << (ros_message.dout1 ? true : false);
  // Member: pwmout0
  cdr << ros_message.pwmout0;
  // Member: temperature
  cdr << ros_message.temperature;
  // Member: pressure
  cdr << ros_message.pressure;
  // Member: brightness
  cdr << ros_message.brightness;
  // Member: imu_ax
  cdr << ros_message.imu_ax;
  // Member: imu_ay
  cdr << ros_message.imu_ay;
  // Member: imu_az
  cdr << ros_message.imu_az;
  // Member: imu_gx
  cdr << ros_message.imu_gx;
  // Member: imu_gy
  cdr << ros_message.imu_gy;
  // Member: imu_gz
  cdr << ros_message.imu_gz;
  // Member: imu_pitch
  cdr << ros_message.imu_pitch;
  // Member: imu_roll
  cdr << ros_message.imu_roll;
  // Member: imu_yaw
  cdr << ros_message.imu_yaw;
  // Member: general0
  cdr << ros_message.general0;
  // Member: general1
  cdr << ros_message.general1;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_akari_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  akari_msgs::msg::M5 & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: button_a
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_a = tmp ? true : false;
  }

  // Member: button_b
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_b = tmp ? true : false;
  }

  // Member: button_c
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.button_c = tmp ? true : false;
  }

  // Member: din0
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.din0 = tmp ? true : false;
  }

  // Member: din1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.din1 = tmp ? true : false;
  }

  // Member: ain0
  cdr >> ros_message.ain0;

  // Member: dout0
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dout0 = tmp ? true : false;
  }

  // Member: dout1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dout1 = tmp ? true : false;
  }

  // Member: pwmout0
  cdr >> ros_message.pwmout0;

  // Member: temperature
  cdr >> ros_message.temperature;

  // Member: pressure
  cdr >> ros_message.pressure;

  // Member: brightness
  cdr >> ros_message.brightness;

  // Member: imu_ax
  cdr >> ros_message.imu_ax;

  // Member: imu_ay
  cdr >> ros_message.imu_ay;

  // Member: imu_az
  cdr >> ros_message.imu_az;

  // Member: imu_gx
  cdr >> ros_message.imu_gx;

  // Member: imu_gy
  cdr >> ros_message.imu_gy;

  // Member: imu_gz
  cdr >> ros_message.imu_gz;

  // Member: imu_pitch
  cdr >> ros_message.imu_pitch;

  // Member: imu_roll
  cdr >> ros_message.imu_roll;

  // Member: imu_yaw
  cdr >> ros_message.imu_yaw;

  // Member: general0
  cdr >> ros_message.general0;

  // Member: general1
  cdr >> ros_message.general1;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_akari_msgs
get_serialized_size(
  const akari_msgs::msg::M5 & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: button_a
  {
    size_t item_size = sizeof(ros_message.button_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_b
  {
    size_t item_size = sizeof(ros_message.button_b);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: button_c
  {
    size_t item_size = sizeof(ros_message.button_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: din0
  {
    size_t item_size = sizeof(ros_message.din0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: din1
  {
    size_t item_size = sizeof(ros_message.din1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ain0
  {
    size_t item_size = sizeof(ros_message.ain0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dout0
  {
    size_t item_size = sizeof(ros_message.dout0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dout1
  {
    size_t item_size = sizeof(ros_message.dout1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pwmout0
  {
    size_t item_size = sizeof(ros_message.pwmout0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: temperature
  {
    size_t item_size = sizeof(ros_message.temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: pressure
  {
    size_t item_size = sizeof(ros_message.pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: brightness
  {
    size_t item_size = sizeof(ros_message.brightness);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_ax
  {
    size_t item_size = sizeof(ros_message.imu_ax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_ay
  {
    size_t item_size = sizeof(ros_message.imu_ay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_az
  {
    size_t item_size = sizeof(ros_message.imu_az);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_gx
  {
    size_t item_size = sizeof(ros_message.imu_gx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_gy
  {
    size_t item_size = sizeof(ros_message.imu_gy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_gz
  {
    size_t item_size = sizeof(ros_message.imu_gz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_pitch
  {
    size_t item_size = sizeof(ros_message.imu_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_roll
  {
    size_t item_size = sizeof(ros_message.imu_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_yaw
  {
    size_t item_size = sizeof(ros_message.imu_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: general0
  {
    size_t item_size = sizeof(ros_message.general0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: general1
  {
    size_t item_size = sizeof(ros_message.general1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_akari_msgs
max_serialized_size_M5(
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


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: button_a
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_b
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: button_c
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: din0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: din1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ain0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: dout0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dout1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pwmout0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: temperature
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: pressure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: brightness
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: imu_ax
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_ay
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_az
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_gx
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_gy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_gz
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_pitch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_roll
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: imu_yaw
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: general0
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: general1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _M5__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const akari_msgs::msg::M5 *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _M5__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<akari_msgs::msg::M5 *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _M5__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const akari_msgs::msg::M5 *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _M5__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_M5(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _M5__callbacks = {
  "akari_msgs::msg",
  "M5",
  _M5__cdr_serialize,
  _M5__cdr_deserialize,
  _M5__get_serialized_size,
  _M5__max_serialized_size
};

static rosidl_message_type_support_t _M5__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_M5__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace akari_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_akari_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<akari_msgs::msg::M5>()
{
  return &akari_msgs::msg::typesupport_fastrtps_cpp::_M5__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, akari_msgs, msg, M5)() {
  return &akari_msgs::msg::typesupport_fastrtps_cpp::_M5__handle;
}

#ifdef __cplusplus
}
#endif
