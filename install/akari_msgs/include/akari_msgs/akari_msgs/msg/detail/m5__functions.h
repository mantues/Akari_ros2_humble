// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from akari_msgs:msg/M5.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__MSG__DETAIL__M5__FUNCTIONS_H_
#define AKARI_MSGS__MSG__DETAIL__M5__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "akari_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "akari_msgs/msg/detail/m5__struct.h"

/// Initialize msg/M5 message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * akari_msgs__msg__M5
 * )) before or use
 * akari_msgs__msg__M5__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__msg__M5__init(akari_msgs__msg__M5 * msg);

/// Finalize msg/M5 message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__msg__M5__fini(akari_msgs__msg__M5 * msg);

/// Create msg/M5 message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * akari_msgs__msg__M5__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__msg__M5 *
akari_msgs__msg__M5__create();

/// Destroy msg/M5 message.
/**
 * It calls
 * akari_msgs__msg__M5__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__msg__M5__destroy(akari_msgs__msg__M5 * msg);

/// Check for msg/M5 message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__msg__M5__are_equal(const akari_msgs__msg__M5 * lhs, const akari_msgs__msg__M5 * rhs);

/// Copy a msg/M5 message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__msg__M5__copy(
  const akari_msgs__msg__M5 * input,
  akari_msgs__msg__M5 * output);

/// Initialize array of msg/M5 messages.
/**
 * It allocates the memory for the number of elements and calls
 * akari_msgs__msg__M5__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__msg__M5__Sequence__init(akari_msgs__msg__M5__Sequence * array, size_t size);

/// Finalize array of msg/M5 messages.
/**
 * It calls
 * akari_msgs__msg__M5__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__msg__M5__Sequence__fini(akari_msgs__msg__M5__Sequence * array);

/// Create array of msg/M5 messages.
/**
 * It allocates the memory for the array and calls
 * akari_msgs__msg__M5__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__msg__M5__Sequence *
akari_msgs__msg__M5__Sequence__create(size_t size);

/// Destroy array of msg/M5 messages.
/**
 * It calls
 * akari_msgs__msg__M5__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__msg__M5__Sequence__destroy(akari_msgs__msg__M5__Sequence * array);

/// Check for msg/M5 message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__msg__M5__Sequence__are_equal(const akari_msgs__msg__M5__Sequence * lhs, const akari_msgs__msg__M5__Sequence * rhs);

/// Copy an array of msg/M5 messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__msg__M5__Sequence__copy(
  const akari_msgs__msg__M5__Sequence * input,
  akari_msgs__msg__M5__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__MSG__DETAIL__M5__FUNCTIONS_H_
