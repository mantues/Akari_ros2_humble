// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from akari_msgs:msg/Akarisetting.idl
// generated code does not contain a copyright notice
#include "akari_msgs/msg/detail/akarisetting__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `jointname`
#include "rosidl_runtime_c/string_functions.h"
// Member `jointpositions`
// Member `jointvelocities`
// Member `jointaccelerations`
// Member `servoenabled`
// Member `servomovingstate`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
akari_msgs__msg__Akarisetting__init(akari_msgs__msg__Akarisetting * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    akari_msgs__msg__Akarisetting__fini(msg);
    return false;
  }
  // jointname
  if (!rosidl_runtime_c__String__Sequence__init(&msg->jointname, 0)) {
    akari_msgs__msg__Akarisetting__fini(msg);
    return false;
  }
  // jointpositions
  if (!rosidl_runtime_c__float__Sequence__init(&msg->jointpositions, 0)) {
    akari_msgs__msg__Akarisetting__fini(msg);
    return false;
  }
  // jointvelocities
  if (!rosidl_runtime_c__float__Sequence__init(&msg->jointvelocities, 0)) {
    akari_msgs__msg__Akarisetting__fini(msg);
    return false;
  }
  // jointaccelerations
  if (!rosidl_runtime_c__float__Sequence__init(&msg->jointaccelerations, 0)) {
    akari_msgs__msg__Akarisetting__fini(msg);
    return false;
  }
  // servoenabled
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->servoenabled, 0)) {
    akari_msgs__msg__Akarisetting__fini(msg);
    return false;
  }
  // servomovingstate
  if (!rosidl_runtime_c__boolean__Sequence__init(&msg->servomovingstate, 0)) {
    akari_msgs__msg__Akarisetting__fini(msg);
    return false;
  }
  return true;
}

void
akari_msgs__msg__Akarisetting__fini(akari_msgs__msg__Akarisetting * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // jointname
  rosidl_runtime_c__String__Sequence__fini(&msg->jointname);
  // jointpositions
  rosidl_runtime_c__float__Sequence__fini(&msg->jointpositions);
  // jointvelocities
  rosidl_runtime_c__float__Sequence__fini(&msg->jointvelocities);
  // jointaccelerations
  rosidl_runtime_c__float__Sequence__fini(&msg->jointaccelerations);
  // servoenabled
  rosidl_runtime_c__boolean__Sequence__fini(&msg->servoenabled);
  // servomovingstate
  rosidl_runtime_c__boolean__Sequence__fini(&msg->servomovingstate);
}

bool
akari_msgs__msg__Akarisetting__are_equal(const akari_msgs__msg__Akarisetting * lhs, const akari_msgs__msg__Akarisetting * rhs)
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
  // jointname
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->jointname), &(rhs->jointname)))
  {
    return false;
  }
  // jointpositions
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->jointpositions), &(rhs->jointpositions)))
  {
    return false;
  }
  // jointvelocities
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->jointvelocities), &(rhs->jointvelocities)))
  {
    return false;
  }
  // jointaccelerations
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->jointaccelerations), &(rhs->jointaccelerations)))
  {
    return false;
  }
  // servoenabled
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->servoenabled), &(rhs->servoenabled)))
  {
    return false;
  }
  // servomovingstate
  if (!rosidl_runtime_c__boolean__Sequence__are_equal(
      &(lhs->servomovingstate), &(rhs->servomovingstate)))
  {
    return false;
  }
  return true;
}

bool
akari_msgs__msg__Akarisetting__copy(
  const akari_msgs__msg__Akarisetting * input,
  akari_msgs__msg__Akarisetting * output)
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
  // jointname
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->jointname), &(output->jointname)))
  {
    return false;
  }
  // jointpositions
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->jointpositions), &(output->jointpositions)))
  {
    return false;
  }
  // jointvelocities
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->jointvelocities), &(output->jointvelocities)))
  {
    return false;
  }
  // jointaccelerations
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->jointaccelerations), &(output->jointaccelerations)))
  {
    return false;
  }
  // servoenabled
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->servoenabled), &(output->servoenabled)))
  {
    return false;
  }
  // servomovingstate
  if (!rosidl_runtime_c__boolean__Sequence__copy(
      &(input->servomovingstate), &(output->servomovingstate)))
  {
    return false;
  }
  return true;
}

akari_msgs__msg__Akarisetting *
akari_msgs__msg__Akarisetting__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__msg__Akarisetting * msg = (akari_msgs__msg__Akarisetting *)allocator.allocate(sizeof(akari_msgs__msg__Akarisetting), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(akari_msgs__msg__Akarisetting));
  bool success = akari_msgs__msg__Akarisetting__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
akari_msgs__msg__Akarisetting__destroy(akari_msgs__msg__Akarisetting * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    akari_msgs__msg__Akarisetting__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
akari_msgs__msg__Akarisetting__Sequence__init(akari_msgs__msg__Akarisetting__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__msg__Akarisetting * data = NULL;

  if (size) {
    data = (akari_msgs__msg__Akarisetting *)allocator.zero_allocate(size, sizeof(akari_msgs__msg__Akarisetting), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = akari_msgs__msg__Akarisetting__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        akari_msgs__msg__Akarisetting__fini(&data[i - 1]);
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
akari_msgs__msg__Akarisetting__Sequence__fini(akari_msgs__msg__Akarisetting__Sequence * array)
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
      akari_msgs__msg__Akarisetting__fini(&array->data[i]);
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

akari_msgs__msg__Akarisetting__Sequence *
akari_msgs__msg__Akarisetting__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__msg__Akarisetting__Sequence * array = (akari_msgs__msg__Akarisetting__Sequence *)allocator.allocate(sizeof(akari_msgs__msg__Akarisetting__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = akari_msgs__msg__Akarisetting__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
akari_msgs__msg__Akarisetting__Sequence__destroy(akari_msgs__msg__Akarisetting__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    akari_msgs__msg__Akarisetting__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
akari_msgs__msg__Akarisetting__Sequence__are_equal(const akari_msgs__msg__Akarisetting__Sequence * lhs, const akari_msgs__msg__Akarisetting__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!akari_msgs__msg__Akarisetting__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
akari_msgs__msg__Akarisetting__Sequence__copy(
  const akari_msgs__msg__Akarisetting__Sequence * input,
  akari_msgs__msg__Akarisetting__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(akari_msgs__msg__Akarisetting);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    akari_msgs__msg__Akarisetting * data =
      (akari_msgs__msg__Akarisetting *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!akari_msgs__msg__Akarisetting__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          akari_msgs__msg__Akarisetting__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!akari_msgs__msg__Akarisetting__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
