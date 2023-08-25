// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from akari_msgs:msg/M5.idl
// generated code does not contain a copyright notice
#include "akari_msgs/msg/detail/m5__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
akari_msgs__msg__M5__init(akari_msgs__msg__M5 * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    akari_msgs__msg__M5__fini(msg);
    return false;
  }
  // button_a
  // button_b
  // button_c
  // din0
  // din1
  // ain0
  // dout0
  // dout1
  // pwmout0
  // temperature
  // pressure
  // brightness
  // imu_ax
  // imu_ay
  // imu_az
  // imu_gx
  // imu_gy
  // imu_gz
  // imu_pitch
  // imu_roll
  // imu_yaw
  // general0
  // general1
  return true;
}

void
akari_msgs__msg__M5__fini(akari_msgs__msg__M5 * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // button_a
  // button_b
  // button_c
  // din0
  // din1
  // ain0
  // dout0
  // dout1
  // pwmout0
  // temperature
  // pressure
  // brightness
  // imu_ax
  // imu_ay
  // imu_az
  // imu_gx
  // imu_gy
  // imu_gz
  // imu_pitch
  // imu_roll
  // imu_yaw
  // general0
  // general1
}

bool
akari_msgs__msg__M5__are_equal(const akari_msgs__msg__M5 * lhs, const akari_msgs__msg__M5 * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // button_a
  if (lhs->button_a != rhs->button_a) {
    return false;
  }
  // button_b
  if (lhs->button_b != rhs->button_b) {
    return false;
  }
  // button_c
  if (lhs->button_c != rhs->button_c) {
    return false;
  }
  // din0
  if (lhs->din0 != rhs->din0) {
    return false;
  }
  // din1
  if (lhs->din1 != rhs->din1) {
    return false;
  }
  // ain0
  if (lhs->ain0 != rhs->ain0) {
    return false;
  }
  // dout0
  if (lhs->dout0 != rhs->dout0) {
    return false;
  }
  // dout1
  if (lhs->dout1 != rhs->dout1) {
    return false;
  }
  // pwmout0
  if (lhs->pwmout0 != rhs->pwmout0) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // pressure
  if (lhs->pressure != rhs->pressure) {
    return false;
  }
  // brightness
  if (lhs->brightness != rhs->brightness) {
    return false;
  }
  // imu_ax
  if (lhs->imu_ax != rhs->imu_ax) {
    return false;
  }
  // imu_ay
  if (lhs->imu_ay != rhs->imu_ay) {
    return false;
  }
  // imu_az
  if (lhs->imu_az != rhs->imu_az) {
    return false;
  }
  // imu_gx
  if (lhs->imu_gx != rhs->imu_gx) {
    return false;
  }
  // imu_gy
  if (lhs->imu_gy != rhs->imu_gy) {
    return false;
  }
  // imu_gz
  if (lhs->imu_gz != rhs->imu_gz) {
    return false;
  }
  // imu_pitch
  if (lhs->imu_pitch != rhs->imu_pitch) {
    return false;
  }
  // imu_roll
  if (lhs->imu_roll != rhs->imu_roll) {
    return false;
  }
  // imu_yaw
  if (lhs->imu_yaw != rhs->imu_yaw) {
    return false;
  }
  // general0
  if (lhs->general0 != rhs->general0) {
    return false;
  }
  // general1
  if (lhs->general1 != rhs->general1) {
    return false;
  }
  return true;
}

bool
akari_msgs__msg__M5__copy(
  const akari_msgs__msg__M5 * input,
  akari_msgs__msg__M5 * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // button_a
  output->button_a = input->button_a;
  // button_b
  output->button_b = input->button_b;
  // button_c
  output->button_c = input->button_c;
  // din0
  output->din0 = input->din0;
  // din1
  output->din1 = input->din1;
  // ain0
  output->ain0 = input->ain0;
  // dout0
  output->dout0 = input->dout0;
  // dout1
  output->dout1 = input->dout1;
  // pwmout0
  output->pwmout0 = input->pwmout0;
  // temperature
  output->temperature = input->temperature;
  // pressure
  output->pressure = input->pressure;
  // brightness
  output->brightness = input->brightness;
  // imu_ax
  output->imu_ax = input->imu_ax;
  // imu_ay
  output->imu_ay = input->imu_ay;
  // imu_az
  output->imu_az = input->imu_az;
  // imu_gx
  output->imu_gx = input->imu_gx;
  // imu_gy
  output->imu_gy = input->imu_gy;
  // imu_gz
  output->imu_gz = input->imu_gz;
  // imu_pitch
  output->imu_pitch = input->imu_pitch;
  // imu_roll
  output->imu_roll = input->imu_roll;
  // imu_yaw
  output->imu_yaw = input->imu_yaw;
  // general0
  output->general0 = input->general0;
  // general1
  output->general1 = input->general1;
  return true;
}

akari_msgs__msg__M5 *
akari_msgs__msg__M5__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__msg__M5 * msg = (akari_msgs__msg__M5 *)allocator.allocate(sizeof(akari_msgs__msg__M5), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(akari_msgs__msg__M5));
  bool success = akari_msgs__msg__M5__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
akari_msgs__msg__M5__destroy(akari_msgs__msg__M5 * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    akari_msgs__msg__M5__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
akari_msgs__msg__M5__Sequence__init(akari_msgs__msg__M5__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__msg__M5 * data = NULL;

  if (size) {
    data = (akari_msgs__msg__M5 *)allocator.zero_allocate(size, sizeof(akari_msgs__msg__M5), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = akari_msgs__msg__M5__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        akari_msgs__msg__M5__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
akari_msgs__msg__M5__Sequence__fini(akari_msgs__msg__M5__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      akari_msgs__msg__M5__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

akari_msgs__msg__M5__Sequence *
akari_msgs__msg__M5__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__msg__M5__Sequence * array = (akari_msgs__msg__M5__Sequence *)allocator.allocate(sizeof(akari_msgs__msg__M5__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = akari_msgs__msg__M5__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
akari_msgs__msg__M5__Sequence__destroy(akari_msgs__msg__M5__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    akari_msgs__msg__M5__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
akari_msgs__msg__M5__Sequence__are_equal(const akari_msgs__msg__M5__Sequence * lhs, const akari_msgs__msg__M5__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!akari_msgs__msg__M5__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
akari_msgs__msg__M5__Sequence__copy(
  const akari_msgs__msg__M5__Sequence * input,
  akari_msgs__msg__M5__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(akari_msgs__msg__M5);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    akari_msgs__msg__M5 * data =
      (akari_msgs__msg__M5 *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!akari_msgs__msg__M5__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          akari_msgs__msg__M5__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!akari_msgs__msg__M5__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
