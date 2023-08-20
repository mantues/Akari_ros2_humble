// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from akari_msgs:srv/SetDout.idl
// generated code does not contain a copyright notice
#include "akari_msgs/srv/detail/set_dout__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
akari_msgs__srv__SetDout_Request__init(akari_msgs__srv__SetDout_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pin_id
  // val
  return true;
}

void
akari_msgs__srv__SetDout_Request__fini(akari_msgs__srv__SetDout_Request * msg)
{
  if (!msg) {
    return;
  }
  // pin_id
  // val
}

bool
akari_msgs__srv__SetDout_Request__are_equal(const akari_msgs__srv__SetDout_Request * lhs, const akari_msgs__srv__SetDout_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pin_id
  if (lhs->pin_id != rhs->pin_id) {
    return false;
  }
  // val
  if (lhs->val != rhs->val) {
    return false;
  }
  return true;
}

bool
akari_msgs__srv__SetDout_Request__copy(
  const akari_msgs__srv__SetDout_Request * input,
  akari_msgs__srv__SetDout_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pin_id
  output->pin_id = input->pin_id;
  // val
  output->val = input->val;
  return true;
}

akari_msgs__srv__SetDout_Request *
akari_msgs__srv__SetDout_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__srv__SetDout_Request * msg = (akari_msgs__srv__SetDout_Request *)allocator.allocate(sizeof(akari_msgs__srv__SetDout_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(akari_msgs__srv__SetDout_Request));
  bool success = akari_msgs__srv__SetDout_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
akari_msgs__srv__SetDout_Request__destroy(akari_msgs__srv__SetDout_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    akari_msgs__srv__SetDout_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
akari_msgs__srv__SetDout_Request__Sequence__init(akari_msgs__srv__SetDout_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__srv__SetDout_Request * data = NULL;

  if (size) {
    data = (akari_msgs__srv__SetDout_Request *)allocator.zero_allocate(size, sizeof(akari_msgs__srv__SetDout_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = akari_msgs__srv__SetDout_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        akari_msgs__srv__SetDout_Request__fini(&data[i - 1]);
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
akari_msgs__srv__SetDout_Request__Sequence__fini(akari_msgs__srv__SetDout_Request__Sequence * array)
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
      akari_msgs__srv__SetDout_Request__fini(&array->data[i]);
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

akari_msgs__srv__SetDout_Request__Sequence *
akari_msgs__srv__SetDout_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__srv__SetDout_Request__Sequence * array = (akari_msgs__srv__SetDout_Request__Sequence *)allocator.allocate(sizeof(akari_msgs__srv__SetDout_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = akari_msgs__srv__SetDout_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
akari_msgs__srv__SetDout_Request__Sequence__destroy(akari_msgs__srv__SetDout_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    akari_msgs__srv__SetDout_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
akari_msgs__srv__SetDout_Request__Sequence__are_equal(const akari_msgs__srv__SetDout_Request__Sequence * lhs, const akari_msgs__srv__SetDout_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!akari_msgs__srv__SetDout_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
akari_msgs__srv__SetDout_Request__Sequence__copy(
  const akari_msgs__srv__SetDout_Request__Sequence * input,
  akari_msgs__srv__SetDout_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(akari_msgs__srv__SetDout_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    akari_msgs__srv__SetDout_Request * data =
      (akari_msgs__srv__SetDout_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!akari_msgs__srv__SetDout_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          akari_msgs__srv__SetDout_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!akari_msgs__srv__SetDout_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
akari_msgs__srv__SetDout_Response__init(akari_msgs__srv__SetDout_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
akari_msgs__srv__SetDout_Response__fini(akari_msgs__srv__SetDout_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
akari_msgs__srv__SetDout_Response__are_equal(const akari_msgs__srv__SetDout_Response * lhs, const akari_msgs__srv__SetDout_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
akari_msgs__srv__SetDout_Response__copy(
  const akari_msgs__srv__SetDout_Response * input,
  akari_msgs__srv__SetDout_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

akari_msgs__srv__SetDout_Response *
akari_msgs__srv__SetDout_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__srv__SetDout_Response * msg = (akari_msgs__srv__SetDout_Response *)allocator.allocate(sizeof(akari_msgs__srv__SetDout_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(akari_msgs__srv__SetDout_Response));
  bool success = akari_msgs__srv__SetDout_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
akari_msgs__srv__SetDout_Response__destroy(akari_msgs__srv__SetDout_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    akari_msgs__srv__SetDout_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
akari_msgs__srv__SetDout_Response__Sequence__init(akari_msgs__srv__SetDout_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__srv__SetDout_Response * data = NULL;

  if (size) {
    data = (akari_msgs__srv__SetDout_Response *)allocator.zero_allocate(size, sizeof(akari_msgs__srv__SetDout_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = akari_msgs__srv__SetDout_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        akari_msgs__srv__SetDout_Response__fini(&data[i - 1]);
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
akari_msgs__srv__SetDout_Response__Sequence__fini(akari_msgs__srv__SetDout_Response__Sequence * array)
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
      akari_msgs__srv__SetDout_Response__fini(&array->data[i]);
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

akari_msgs__srv__SetDout_Response__Sequence *
akari_msgs__srv__SetDout_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__srv__SetDout_Response__Sequence * array = (akari_msgs__srv__SetDout_Response__Sequence *)allocator.allocate(sizeof(akari_msgs__srv__SetDout_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = akari_msgs__srv__SetDout_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
akari_msgs__srv__SetDout_Response__Sequence__destroy(akari_msgs__srv__SetDout_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    akari_msgs__srv__SetDout_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
akari_msgs__srv__SetDout_Response__Sequence__are_equal(const akari_msgs__srv__SetDout_Response__Sequence * lhs, const akari_msgs__srv__SetDout_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!akari_msgs__srv__SetDout_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
akari_msgs__srv__SetDout_Response__Sequence__copy(
  const akari_msgs__srv__SetDout_Response__Sequence * input,
  akari_msgs__srv__SetDout_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(akari_msgs__srv__SetDout_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    akari_msgs__srv__SetDout_Response * data =
      (akari_msgs__srv__SetDout_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!akari_msgs__srv__SetDout_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          akari_msgs__srv__SetDout_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!akari_msgs__srv__SetDout_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
