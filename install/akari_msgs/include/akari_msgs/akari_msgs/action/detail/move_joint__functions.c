// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from akari_msgs:action/MoveJoint.idl
// generated code does not contain a copyright notice
#include "akari_msgs/action/detail/move_joint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
akari_msgs__action__MoveJoint_Goal__init(akari_msgs__action__MoveJoint_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // acc_pan
  // acc_tilt
  // vel_pan
  // vel_tilt
  // goal_pan
  // goal_tilt
  return true;
}

void
akari_msgs__action__MoveJoint_Goal__fini(akari_msgs__action__MoveJoint_Goal * msg)
{
  if (!msg) {
    return;
  }
  // acc_pan
  // acc_tilt
  // vel_pan
  // vel_tilt
  // goal_pan
  // goal_tilt
}

bool
akari_msgs__action__MoveJoint_Goal__are_equal(const akari_msgs__action__MoveJoint_Goal * lhs, const akari_msgs__action__MoveJoint_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // acc_pan
  if (lhs->acc_pan != rhs->acc_pan) {
    return false;
  }
  // acc_tilt
  if (lhs->acc_tilt != rhs->acc_tilt) {
    return false;
  }
  // vel_pan
  if (lhs->vel_pan != rhs->vel_pan) {
    return false;
  }
  // vel_tilt
  if (lhs->vel_tilt != rhs->vel_tilt) {
    return false;
  }
  // goal_pan
  if (lhs->goal_pan != rhs->goal_pan) {
    return false;
  }
  // goal_tilt
  if (lhs->goal_tilt != rhs->goal_tilt) {
    return false;
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_Goal__copy(
  const akari_msgs__action__MoveJoint_Goal * input,
  akari_msgs__action__MoveJoint_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // acc_pan
  output->acc_pan = input->acc_pan;
  // acc_tilt
  output->acc_tilt = input->acc_tilt;
  // vel_pan
  output->vel_pan = input->vel_pan;
  // vel_tilt
  output->vel_tilt = input->vel_tilt;
  // goal_pan
  output->goal_pan = input->goal_pan;
  // goal_tilt
  output->goal_tilt = input->goal_tilt;
  return true;
}

akari_msgs__action__MoveJoint_Goal *
akari_msgs__action__MoveJoint_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_Goal * msg = (akari_msgs__action__MoveJoint_Goal *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(akari_msgs__action__MoveJoint_Goal));
  bool success = akari_msgs__action__MoveJoint_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
akari_msgs__action__MoveJoint_Goal__destroy(akari_msgs__action__MoveJoint_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    akari_msgs__action__MoveJoint_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
akari_msgs__action__MoveJoint_Goal__Sequence__init(akari_msgs__action__MoveJoint_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_Goal * data = NULL;

  if (size) {
    data = (akari_msgs__action__MoveJoint_Goal *)allocator.zero_allocate(size, sizeof(akari_msgs__action__MoveJoint_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = akari_msgs__action__MoveJoint_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        akari_msgs__action__MoveJoint_Goal__fini(&data[i - 1]);
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
akari_msgs__action__MoveJoint_Goal__Sequence__fini(akari_msgs__action__MoveJoint_Goal__Sequence * array)
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
      akari_msgs__action__MoveJoint_Goal__fini(&array->data[i]);
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

akari_msgs__action__MoveJoint_Goal__Sequence *
akari_msgs__action__MoveJoint_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_Goal__Sequence * array = (akari_msgs__action__MoveJoint_Goal__Sequence *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = akari_msgs__action__MoveJoint_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
akari_msgs__action__MoveJoint_Goal__Sequence__destroy(akari_msgs__action__MoveJoint_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    akari_msgs__action__MoveJoint_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
akari_msgs__action__MoveJoint_Goal__Sequence__are_equal(const akari_msgs__action__MoveJoint_Goal__Sequence * lhs, const akari_msgs__action__MoveJoint_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!akari_msgs__action__MoveJoint_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_Goal__Sequence__copy(
  const akari_msgs__action__MoveJoint_Goal__Sequence * input,
  akari_msgs__action__MoveJoint_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(akari_msgs__action__MoveJoint_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    akari_msgs__action__MoveJoint_Goal * data =
      (akari_msgs__action__MoveJoint_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!akari_msgs__action__MoveJoint_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          akari_msgs__action__MoveJoint_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!akari_msgs__action__MoveJoint_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
akari_msgs__action__MoveJoint_Result__init(akari_msgs__action__MoveJoint_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
akari_msgs__action__MoveJoint_Result__fini(akari_msgs__action__MoveJoint_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
akari_msgs__action__MoveJoint_Result__are_equal(const akari_msgs__action__MoveJoint_Result * lhs, const akari_msgs__action__MoveJoint_Result * rhs)
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
akari_msgs__action__MoveJoint_Result__copy(
  const akari_msgs__action__MoveJoint_Result * input,
  akari_msgs__action__MoveJoint_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

akari_msgs__action__MoveJoint_Result *
akari_msgs__action__MoveJoint_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_Result * msg = (akari_msgs__action__MoveJoint_Result *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(akari_msgs__action__MoveJoint_Result));
  bool success = akari_msgs__action__MoveJoint_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
akari_msgs__action__MoveJoint_Result__destroy(akari_msgs__action__MoveJoint_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    akari_msgs__action__MoveJoint_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
akari_msgs__action__MoveJoint_Result__Sequence__init(akari_msgs__action__MoveJoint_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_Result * data = NULL;

  if (size) {
    data = (akari_msgs__action__MoveJoint_Result *)allocator.zero_allocate(size, sizeof(akari_msgs__action__MoveJoint_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = akari_msgs__action__MoveJoint_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        akari_msgs__action__MoveJoint_Result__fini(&data[i - 1]);
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
akari_msgs__action__MoveJoint_Result__Sequence__fini(akari_msgs__action__MoveJoint_Result__Sequence * array)
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
      akari_msgs__action__MoveJoint_Result__fini(&array->data[i]);
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

akari_msgs__action__MoveJoint_Result__Sequence *
akari_msgs__action__MoveJoint_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_Result__Sequence * array = (akari_msgs__action__MoveJoint_Result__Sequence *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = akari_msgs__action__MoveJoint_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
akari_msgs__action__MoveJoint_Result__Sequence__destroy(akari_msgs__action__MoveJoint_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    akari_msgs__action__MoveJoint_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
akari_msgs__action__MoveJoint_Result__Sequence__are_equal(const akari_msgs__action__MoveJoint_Result__Sequence * lhs, const akari_msgs__action__MoveJoint_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!akari_msgs__action__MoveJoint_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_Result__Sequence__copy(
  const akari_msgs__action__MoveJoint_Result__Sequence * input,
  akari_msgs__action__MoveJoint_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(akari_msgs__action__MoveJoint_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    akari_msgs__action__MoveJoint_Result * data =
      (akari_msgs__action__MoveJoint_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!akari_msgs__action__MoveJoint_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          akari_msgs__action__MoveJoint_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!akari_msgs__action__MoveJoint_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
akari_msgs__action__MoveJoint_Feedback__init(akari_msgs__action__MoveJoint_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // pos_pan
  // pos_tilt
  return true;
}

void
akari_msgs__action__MoveJoint_Feedback__fini(akari_msgs__action__MoveJoint_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // pos_pan
  // pos_tilt
}

bool
akari_msgs__action__MoveJoint_Feedback__are_equal(const akari_msgs__action__MoveJoint_Feedback * lhs, const akari_msgs__action__MoveJoint_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pos_pan
  if (lhs->pos_pan != rhs->pos_pan) {
    return false;
  }
  // pos_tilt
  if (lhs->pos_tilt != rhs->pos_tilt) {
    return false;
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_Feedback__copy(
  const akari_msgs__action__MoveJoint_Feedback * input,
  akari_msgs__action__MoveJoint_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // pos_pan
  output->pos_pan = input->pos_pan;
  // pos_tilt
  output->pos_tilt = input->pos_tilt;
  return true;
}

akari_msgs__action__MoveJoint_Feedback *
akari_msgs__action__MoveJoint_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_Feedback * msg = (akari_msgs__action__MoveJoint_Feedback *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(akari_msgs__action__MoveJoint_Feedback));
  bool success = akari_msgs__action__MoveJoint_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
akari_msgs__action__MoveJoint_Feedback__destroy(akari_msgs__action__MoveJoint_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    akari_msgs__action__MoveJoint_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
akari_msgs__action__MoveJoint_Feedback__Sequence__init(akari_msgs__action__MoveJoint_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_Feedback * data = NULL;

  if (size) {
    data = (akari_msgs__action__MoveJoint_Feedback *)allocator.zero_allocate(size, sizeof(akari_msgs__action__MoveJoint_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = akari_msgs__action__MoveJoint_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        akari_msgs__action__MoveJoint_Feedback__fini(&data[i - 1]);
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
akari_msgs__action__MoveJoint_Feedback__Sequence__fini(akari_msgs__action__MoveJoint_Feedback__Sequence * array)
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
      akari_msgs__action__MoveJoint_Feedback__fini(&array->data[i]);
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

akari_msgs__action__MoveJoint_Feedback__Sequence *
akari_msgs__action__MoveJoint_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_Feedback__Sequence * array = (akari_msgs__action__MoveJoint_Feedback__Sequence *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = akari_msgs__action__MoveJoint_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
akari_msgs__action__MoveJoint_Feedback__Sequence__destroy(akari_msgs__action__MoveJoint_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    akari_msgs__action__MoveJoint_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
akari_msgs__action__MoveJoint_Feedback__Sequence__are_equal(const akari_msgs__action__MoveJoint_Feedback__Sequence * lhs, const akari_msgs__action__MoveJoint_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!akari_msgs__action__MoveJoint_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_Feedback__Sequence__copy(
  const akari_msgs__action__MoveJoint_Feedback__Sequence * input,
  akari_msgs__action__MoveJoint_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(akari_msgs__action__MoveJoint_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    akari_msgs__action__MoveJoint_Feedback * data =
      (akari_msgs__action__MoveJoint_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!akari_msgs__action__MoveJoint_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          akari_msgs__action__MoveJoint_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!akari_msgs__action__MoveJoint_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "akari_msgs/action/detail/move_joint__functions.h"

bool
akari_msgs__action__MoveJoint_SendGoal_Request__init(akari_msgs__action__MoveJoint_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    akari_msgs__action__MoveJoint_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!akari_msgs__action__MoveJoint_Goal__init(&msg->goal)) {
    akari_msgs__action__MoveJoint_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
akari_msgs__action__MoveJoint_SendGoal_Request__fini(akari_msgs__action__MoveJoint_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  akari_msgs__action__MoveJoint_Goal__fini(&msg->goal);
}

bool
akari_msgs__action__MoveJoint_SendGoal_Request__are_equal(const akari_msgs__action__MoveJoint_SendGoal_Request * lhs, const akari_msgs__action__MoveJoint_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!akari_msgs__action__MoveJoint_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_SendGoal_Request__copy(
  const akari_msgs__action__MoveJoint_SendGoal_Request * input,
  akari_msgs__action__MoveJoint_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!akari_msgs__action__MoveJoint_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

akari_msgs__action__MoveJoint_SendGoal_Request *
akari_msgs__action__MoveJoint_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_SendGoal_Request * msg = (akari_msgs__action__MoveJoint_SendGoal_Request *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(akari_msgs__action__MoveJoint_SendGoal_Request));
  bool success = akari_msgs__action__MoveJoint_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
akari_msgs__action__MoveJoint_SendGoal_Request__destroy(akari_msgs__action__MoveJoint_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    akari_msgs__action__MoveJoint_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__init(akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_SendGoal_Request * data = NULL;

  if (size) {
    data = (akari_msgs__action__MoveJoint_SendGoal_Request *)allocator.zero_allocate(size, sizeof(akari_msgs__action__MoveJoint_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = akari_msgs__action__MoveJoint_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        akari_msgs__action__MoveJoint_SendGoal_Request__fini(&data[i - 1]);
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
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__fini(akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * array)
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
      akari_msgs__action__MoveJoint_SendGoal_Request__fini(&array->data[i]);
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

akari_msgs__action__MoveJoint_SendGoal_Request__Sequence *
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * array = (akari_msgs__action__MoveJoint_SendGoal_Request__Sequence *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__destroy(akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__are_equal(const akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * lhs, const akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!akari_msgs__action__MoveJoint_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__copy(
  const akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * input,
  akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(akari_msgs__action__MoveJoint_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    akari_msgs__action__MoveJoint_SendGoal_Request * data =
      (akari_msgs__action__MoveJoint_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!akari_msgs__action__MoveJoint_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          akari_msgs__action__MoveJoint_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!akari_msgs__action__MoveJoint_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
akari_msgs__action__MoveJoint_SendGoal_Response__init(akari_msgs__action__MoveJoint_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    akari_msgs__action__MoveJoint_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
akari_msgs__action__MoveJoint_SendGoal_Response__fini(akari_msgs__action__MoveJoint_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
akari_msgs__action__MoveJoint_SendGoal_Response__are_equal(const akari_msgs__action__MoveJoint_SendGoal_Response * lhs, const akari_msgs__action__MoveJoint_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_SendGoal_Response__copy(
  const akari_msgs__action__MoveJoint_SendGoal_Response * input,
  akari_msgs__action__MoveJoint_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

akari_msgs__action__MoveJoint_SendGoal_Response *
akari_msgs__action__MoveJoint_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_SendGoal_Response * msg = (akari_msgs__action__MoveJoint_SendGoal_Response *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(akari_msgs__action__MoveJoint_SendGoal_Response));
  bool success = akari_msgs__action__MoveJoint_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
akari_msgs__action__MoveJoint_SendGoal_Response__destroy(akari_msgs__action__MoveJoint_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    akari_msgs__action__MoveJoint_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__init(akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_SendGoal_Response * data = NULL;

  if (size) {
    data = (akari_msgs__action__MoveJoint_SendGoal_Response *)allocator.zero_allocate(size, sizeof(akari_msgs__action__MoveJoint_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = akari_msgs__action__MoveJoint_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        akari_msgs__action__MoveJoint_SendGoal_Response__fini(&data[i - 1]);
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
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__fini(akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * array)
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
      akari_msgs__action__MoveJoint_SendGoal_Response__fini(&array->data[i]);
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

akari_msgs__action__MoveJoint_SendGoal_Response__Sequence *
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * array = (akari_msgs__action__MoveJoint_SendGoal_Response__Sequence *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__destroy(akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__are_equal(const akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * lhs, const akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!akari_msgs__action__MoveJoint_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__copy(
  const akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * input,
  akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(akari_msgs__action__MoveJoint_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    akari_msgs__action__MoveJoint_SendGoal_Response * data =
      (akari_msgs__action__MoveJoint_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!akari_msgs__action__MoveJoint_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          akari_msgs__action__MoveJoint_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!akari_msgs__action__MoveJoint_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
akari_msgs__action__MoveJoint_GetResult_Request__init(akari_msgs__action__MoveJoint_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    akari_msgs__action__MoveJoint_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
akari_msgs__action__MoveJoint_GetResult_Request__fini(akari_msgs__action__MoveJoint_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
akari_msgs__action__MoveJoint_GetResult_Request__are_equal(const akari_msgs__action__MoveJoint_GetResult_Request * lhs, const akari_msgs__action__MoveJoint_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_GetResult_Request__copy(
  const akari_msgs__action__MoveJoint_GetResult_Request * input,
  akari_msgs__action__MoveJoint_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

akari_msgs__action__MoveJoint_GetResult_Request *
akari_msgs__action__MoveJoint_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_GetResult_Request * msg = (akari_msgs__action__MoveJoint_GetResult_Request *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(akari_msgs__action__MoveJoint_GetResult_Request));
  bool success = akari_msgs__action__MoveJoint_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
akari_msgs__action__MoveJoint_GetResult_Request__destroy(akari_msgs__action__MoveJoint_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    akari_msgs__action__MoveJoint_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
akari_msgs__action__MoveJoint_GetResult_Request__Sequence__init(akari_msgs__action__MoveJoint_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_GetResult_Request * data = NULL;

  if (size) {
    data = (akari_msgs__action__MoveJoint_GetResult_Request *)allocator.zero_allocate(size, sizeof(akari_msgs__action__MoveJoint_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = akari_msgs__action__MoveJoint_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        akari_msgs__action__MoveJoint_GetResult_Request__fini(&data[i - 1]);
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
akari_msgs__action__MoveJoint_GetResult_Request__Sequence__fini(akari_msgs__action__MoveJoint_GetResult_Request__Sequence * array)
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
      akari_msgs__action__MoveJoint_GetResult_Request__fini(&array->data[i]);
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

akari_msgs__action__MoveJoint_GetResult_Request__Sequence *
akari_msgs__action__MoveJoint_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_GetResult_Request__Sequence * array = (akari_msgs__action__MoveJoint_GetResult_Request__Sequence *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = akari_msgs__action__MoveJoint_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
akari_msgs__action__MoveJoint_GetResult_Request__Sequence__destroy(akari_msgs__action__MoveJoint_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    akari_msgs__action__MoveJoint_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
akari_msgs__action__MoveJoint_GetResult_Request__Sequence__are_equal(const akari_msgs__action__MoveJoint_GetResult_Request__Sequence * lhs, const akari_msgs__action__MoveJoint_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!akari_msgs__action__MoveJoint_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_GetResult_Request__Sequence__copy(
  const akari_msgs__action__MoveJoint_GetResult_Request__Sequence * input,
  akari_msgs__action__MoveJoint_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(akari_msgs__action__MoveJoint_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    akari_msgs__action__MoveJoint_GetResult_Request * data =
      (akari_msgs__action__MoveJoint_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!akari_msgs__action__MoveJoint_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          akari_msgs__action__MoveJoint_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!akari_msgs__action__MoveJoint_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "akari_msgs/action/detail/move_joint__functions.h"

bool
akari_msgs__action__MoveJoint_GetResult_Response__init(akari_msgs__action__MoveJoint_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!akari_msgs__action__MoveJoint_Result__init(&msg->result)) {
    akari_msgs__action__MoveJoint_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
akari_msgs__action__MoveJoint_GetResult_Response__fini(akari_msgs__action__MoveJoint_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  akari_msgs__action__MoveJoint_Result__fini(&msg->result);
}

bool
akari_msgs__action__MoveJoint_GetResult_Response__are_equal(const akari_msgs__action__MoveJoint_GetResult_Response * lhs, const akari_msgs__action__MoveJoint_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!akari_msgs__action__MoveJoint_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_GetResult_Response__copy(
  const akari_msgs__action__MoveJoint_GetResult_Response * input,
  akari_msgs__action__MoveJoint_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!akari_msgs__action__MoveJoint_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

akari_msgs__action__MoveJoint_GetResult_Response *
akari_msgs__action__MoveJoint_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_GetResult_Response * msg = (akari_msgs__action__MoveJoint_GetResult_Response *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(akari_msgs__action__MoveJoint_GetResult_Response));
  bool success = akari_msgs__action__MoveJoint_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
akari_msgs__action__MoveJoint_GetResult_Response__destroy(akari_msgs__action__MoveJoint_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    akari_msgs__action__MoveJoint_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
akari_msgs__action__MoveJoint_GetResult_Response__Sequence__init(akari_msgs__action__MoveJoint_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_GetResult_Response * data = NULL;

  if (size) {
    data = (akari_msgs__action__MoveJoint_GetResult_Response *)allocator.zero_allocate(size, sizeof(akari_msgs__action__MoveJoint_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = akari_msgs__action__MoveJoint_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        akari_msgs__action__MoveJoint_GetResult_Response__fini(&data[i - 1]);
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
akari_msgs__action__MoveJoint_GetResult_Response__Sequence__fini(akari_msgs__action__MoveJoint_GetResult_Response__Sequence * array)
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
      akari_msgs__action__MoveJoint_GetResult_Response__fini(&array->data[i]);
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

akari_msgs__action__MoveJoint_GetResult_Response__Sequence *
akari_msgs__action__MoveJoint_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_GetResult_Response__Sequence * array = (akari_msgs__action__MoveJoint_GetResult_Response__Sequence *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = akari_msgs__action__MoveJoint_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
akari_msgs__action__MoveJoint_GetResult_Response__Sequence__destroy(akari_msgs__action__MoveJoint_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    akari_msgs__action__MoveJoint_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
akari_msgs__action__MoveJoint_GetResult_Response__Sequence__are_equal(const akari_msgs__action__MoveJoint_GetResult_Response__Sequence * lhs, const akari_msgs__action__MoveJoint_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!akari_msgs__action__MoveJoint_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_GetResult_Response__Sequence__copy(
  const akari_msgs__action__MoveJoint_GetResult_Response__Sequence * input,
  akari_msgs__action__MoveJoint_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(akari_msgs__action__MoveJoint_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    akari_msgs__action__MoveJoint_GetResult_Response * data =
      (akari_msgs__action__MoveJoint_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!akari_msgs__action__MoveJoint_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          akari_msgs__action__MoveJoint_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!akari_msgs__action__MoveJoint_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "akari_msgs/action/detail/move_joint__functions.h"

bool
akari_msgs__action__MoveJoint_FeedbackMessage__init(akari_msgs__action__MoveJoint_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    akari_msgs__action__MoveJoint_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!akari_msgs__action__MoveJoint_Feedback__init(&msg->feedback)) {
    akari_msgs__action__MoveJoint_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
akari_msgs__action__MoveJoint_FeedbackMessage__fini(akari_msgs__action__MoveJoint_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  akari_msgs__action__MoveJoint_Feedback__fini(&msg->feedback);
}

bool
akari_msgs__action__MoveJoint_FeedbackMessage__are_equal(const akari_msgs__action__MoveJoint_FeedbackMessage * lhs, const akari_msgs__action__MoveJoint_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!akari_msgs__action__MoveJoint_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_FeedbackMessage__copy(
  const akari_msgs__action__MoveJoint_FeedbackMessage * input,
  akari_msgs__action__MoveJoint_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!akari_msgs__action__MoveJoint_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

akari_msgs__action__MoveJoint_FeedbackMessage *
akari_msgs__action__MoveJoint_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_FeedbackMessage * msg = (akari_msgs__action__MoveJoint_FeedbackMessage *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(akari_msgs__action__MoveJoint_FeedbackMessage));
  bool success = akari_msgs__action__MoveJoint_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
akari_msgs__action__MoveJoint_FeedbackMessage__destroy(akari_msgs__action__MoveJoint_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    akari_msgs__action__MoveJoint_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__init(akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_FeedbackMessage * data = NULL;

  if (size) {
    data = (akari_msgs__action__MoveJoint_FeedbackMessage *)allocator.zero_allocate(size, sizeof(akari_msgs__action__MoveJoint_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = akari_msgs__action__MoveJoint_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        akari_msgs__action__MoveJoint_FeedbackMessage__fini(&data[i - 1]);
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
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__fini(akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * array)
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
      akari_msgs__action__MoveJoint_FeedbackMessage__fini(&array->data[i]);
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

akari_msgs__action__MoveJoint_FeedbackMessage__Sequence *
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * array = (akari_msgs__action__MoveJoint_FeedbackMessage__Sequence *)allocator.allocate(sizeof(akari_msgs__action__MoveJoint_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__destroy(akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__are_equal(const akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * lhs, const akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!akari_msgs__action__MoveJoint_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__copy(
  const akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * input,
  akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(akari_msgs__action__MoveJoint_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    akari_msgs__action__MoveJoint_FeedbackMessage * data =
      (akari_msgs__action__MoveJoint_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!akari_msgs__action__MoveJoint_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          akari_msgs__action__MoveJoint_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!akari_msgs__action__MoveJoint_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
