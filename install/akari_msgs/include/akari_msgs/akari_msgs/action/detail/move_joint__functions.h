// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from akari_msgs:action/MoveJoint.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__FUNCTIONS_H_
#define AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "akari_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "akari_msgs/action/detail/move_joint__struct.h"

/// Initialize action/MoveJoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * akari_msgs__action__MoveJoint_Goal
 * )) before or use
 * akari_msgs__action__MoveJoint_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_Goal__init(akari_msgs__action__MoveJoint_Goal * msg);

/// Finalize action/MoveJoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_Goal__fini(akari_msgs__action__MoveJoint_Goal * msg);

/// Create action/MoveJoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * akari_msgs__action__MoveJoint_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_Goal *
akari_msgs__action__MoveJoint_Goal__create();

/// Destroy action/MoveJoint message.
/**
 * It calls
 * akari_msgs__action__MoveJoint_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_Goal__destroy(akari_msgs__action__MoveJoint_Goal * msg);

/// Check for action/MoveJoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_Goal__are_equal(const akari_msgs__action__MoveJoint_Goal * lhs, const akari_msgs__action__MoveJoint_Goal * rhs);

/// Copy a action/MoveJoint message.
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
akari_msgs__action__MoveJoint_Goal__copy(
  const akari_msgs__action__MoveJoint_Goal * input,
  akari_msgs__action__MoveJoint_Goal * output);

/// Initialize array of action/MoveJoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * akari_msgs__action__MoveJoint_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_Goal__Sequence__init(akari_msgs__action__MoveJoint_Goal__Sequence * array, size_t size);

/// Finalize array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_Goal__Sequence__fini(akari_msgs__action__MoveJoint_Goal__Sequence * array);

/// Create array of action/MoveJoint messages.
/**
 * It allocates the memory for the array and calls
 * akari_msgs__action__MoveJoint_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_Goal__Sequence *
akari_msgs__action__MoveJoint_Goal__Sequence__create(size_t size);

/// Destroy array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_Goal__Sequence__destroy(akari_msgs__action__MoveJoint_Goal__Sequence * array);

/// Check for action/MoveJoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_Goal__Sequence__are_equal(const akari_msgs__action__MoveJoint_Goal__Sequence * lhs, const akari_msgs__action__MoveJoint_Goal__Sequence * rhs);

/// Copy an array of action/MoveJoint messages.
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
akari_msgs__action__MoveJoint_Goal__Sequence__copy(
  const akari_msgs__action__MoveJoint_Goal__Sequence * input,
  akari_msgs__action__MoveJoint_Goal__Sequence * output);

/// Initialize action/MoveJoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * akari_msgs__action__MoveJoint_Result
 * )) before or use
 * akari_msgs__action__MoveJoint_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_Result__init(akari_msgs__action__MoveJoint_Result * msg);

/// Finalize action/MoveJoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_Result__fini(akari_msgs__action__MoveJoint_Result * msg);

/// Create action/MoveJoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * akari_msgs__action__MoveJoint_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_Result *
akari_msgs__action__MoveJoint_Result__create();

/// Destroy action/MoveJoint message.
/**
 * It calls
 * akari_msgs__action__MoveJoint_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_Result__destroy(akari_msgs__action__MoveJoint_Result * msg);

/// Check for action/MoveJoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_Result__are_equal(const akari_msgs__action__MoveJoint_Result * lhs, const akari_msgs__action__MoveJoint_Result * rhs);

/// Copy a action/MoveJoint message.
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
akari_msgs__action__MoveJoint_Result__copy(
  const akari_msgs__action__MoveJoint_Result * input,
  akari_msgs__action__MoveJoint_Result * output);

/// Initialize array of action/MoveJoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * akari_msgs__action__MoveJoint_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_Result__Sequence__init(akari_msgs__action__MoveJoint_Result__Sequence * array, size_t size);

/// Finalize array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_Result__Sequence__fini(akari_msgs__action__MoveJoint_Result__Sequence * array);

/// Create array of action/MoveJoint messages.
/**
 * It allocates the memory for the array and calls
 * akari_msgs__action__MoveJoint_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_Result__Sequence *
akari_msgs__action__MoveJoint_Result__Sequence__create(size_t size);

/// Destroy array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_Result__Sequence__destroy(akari_msgs__action__MoveJoint_Result__Sequence * array);

/// Check for action/MoveJoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_Result__Sequence__are_equal(const akari_msgs__action__MoveJoint_Result__Sequence * lhs, const akari_msgs__action__MoveJoint_Result__Sequence * rhs);

/// Copy an array of action/MoveJoint messages.
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
akari_msgs__action__MoveJoint_Result__Sequence__copy(
  const akari_msgs__action__MoveJoint_Result__Sequence * input,
  akari_msgs__action__MoveJoint_Result__Sequence * output);

/// Initialize action/MoveJoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * akari_msgs__action__MoveJoint_Feedback
 * )) before or use
 * akari_msgs__action__MoveJoint_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_Feedback__init(akari_msgs__action__MoveJoint_Feedback * msg);

/// Finalize action/MoveJoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_Feedback__fini(akari_msgs__action__MoveJoint_Feedback * msg);

/// Create action/MoveJoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * akari_msgs__action__MoveJoint_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_Feedback *
akari_msgs__action__MoveJoint_Feedback__create();

/// Destroy action/MoveJoint message.
/**
 * It calls
 * akari_msgs__action__MoveJoint_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_Feedback__destroy(akari_msgs__action__MoveJoint_Feedback * msg);

/// Check for action/MoveJoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_Feedback__are_equal(const akari_msgs__action__MoveJoint_Feedback * lhs, const akari_msgs__action__MoveJoint_Feedback * rhs);

/// Copy a action/MoveJoint message.
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
akari_msgs__action__MoveJoint_Feedback__copy(
  const akari_msgs__action__MoveJoint_Feedback * input,
  akari_msgs__action__MoveJoint_Feedback * output);

/// Initialize array of action/MoveJoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * akari_msgs__action__MoveJoint_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_Feedback__Sequence__init(akari_msgs__action__MoveJoint_Feedback__Sequence * array, size_t size);

/// Finalize array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_Feedback__Sequence__fini(akari_msgs__action__MoveJoint_Feedback__Sequence * array);

/// Create array of action/MoveJoint messages.
/**
 * It allocates the memory for the array and calls
 * akari_msgs__action__MoveJoint_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_Feedback__Sequence *
akari_msgs__action__MoveJoint_Feedback__Sequence__create(size_t size);

/// Destroy array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_Feedback__Sequence__destroy(akari_msgs__action__MoveJoint_Feedback__Sequence * array);

/// Check for action/MoveJoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_Feedback__Sequence__are_equal(const akari_msgs__action__MoveJoint_Feedback__Sequence * lhs, const akari_msgs__action__MoveJoint_Feedback__Sequence * rhs);

/// Copy an array of action/MoveJoint messages.
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
akari_msgs__action__MoveJoint_Feedback__Sequence__copy(
  const akari_msgs__action__MoveJoint_Feedback__Sequence * input,
  akari_msgs__action__MoveJoint_Feedback__Sequence * output);

/// Initialize action/MoveJoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * akari_msgs__action__MoveJoint_SendGoal_Request
 * )) before or use
 * akari_msgs__action__MoveJoint_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_SendGoal_Request__init(akari_msgs__action__MoveJoint_SendGoal_Request * msg);

/// Finalize action/MoveJoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_SendGoal_Request__fini(akari_msgs__action__MoveJoint_SendGoal_Request * msg);

/// Create action/MoveJoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * akari_msgs__action__MoveJoint_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_SendGoal_Request *
akari_msgs__action__MoveJoint_SendGoal_Request__create();

/// Destroy action/MoveJoint message.
/**
 * It calls
 * akari_msgs__action__MoveJoint_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_SendGoal_Request__destroy(akari_msgs__action__MoveJoint_SendGoal_Request * msg);

/// Check for action/MoveJoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_SendGoal_Request__are_equal(const akari_msgs__action__MoveJoint_SendGoal_Request * lhs, const akari_msgs__action__MoveJoint_SendGoal_Request * rhs);

/// Copy a action/MoveJoint message.
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
akari_msgs__action__MoveJoint_SendGoal_Request__copy(
  const akari_msgs__action__MoveJoint_SendGoal_Request * input,
  akari_msgs__action__MoveJoint_SendGoal_Request * output);

/// Initialize array of action/MoveJoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * akari_msgs__action__MoveJoint_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__init(akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__fini(akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * array);

/// Create array of action/MoveJoint messages.
/**
 * It allocates the memory for the array and calls
 * akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence *
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__destroy(akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * array);

/// Check for action/MoveJoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__are_equal(const akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * lhs, const akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/MoveJoint messages.
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
akari_msgs__action__MoveJoint_SendGoal_Request__Sequence__copy(
  const akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * input,
  akari_msgs__action__MoveJoint_SendGoal_Request__Sequence * output);

/// Initialize action/MoveJoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * akari_msgs__action__MoveJoint_SendGoal_Response
 * )) before or use
 * akari_msgs__action__MoveJoint_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_SendGoal_Response__init(akari_msgs__action__MoveJoint_SendGoal_Response * msg);

/// Finalize action/MoveJoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_SendGoal_Response__fini(akari_msgs__action__MoveJoint_SendGoal_Response * msg);

/// Create action/MoveJoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * akari_msgs__action__MoveJoint_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_SendGoal_Response *
akari_msgs__action__MoveJoint_SendGoal_Response__create();

/// Destroy action/MoveJoint message.
/**
 * It calls
 * akari_msgs__action__MoveJoint_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_SendGoal_Response__destroy(akari_msgs__action__MoveJoint_SendGoal_Response * msg);

/// Check for action/MoveJoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_SendGoal_Response__are_equal(const akari_msgs__action__MoveJoint_SendGoal_Response * lhs, const akari_msgs__action__MoveJoint_SendGoal_Response * rhs);

/// Copy a action/MoveJoint message.
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
akari_msgs__action__MoveJoint_SendGoal_Response__copy(
  const akari_msgs__action__MoveJoint_SendGoal_Response * input,
  akari_msgs__action__MoveJoint_SendGoal_Response * output);

/// Initialize array of action/MoveJoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * akari_msgs__action__MoveJoint_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__init(akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__fini(akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * array);

/// Create array of action/MoveJoint messages.
/**
 * It allocates the memory for the array and calls
 * akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence *
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__destroy(akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * array);

/// Check for action/MoveJoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__are_equal(const akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * lhs, const akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/MoveJoint messages.
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
akari_msgs__action__MoveJoint_SendGoal_Response__Sequence__copy(
  const akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * input,
  akari_msgs__action__MoveJoint_SendGoal_Response__Sequence * output);

/// Initialize action/MoveJoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * akari_msgs__action__MoveJoint_GetResult_Request
 * )) before or use
 * akari_msgs__action__MoveJoint_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_GetResult_Request__init(akari_msgs__action__MoveJoint_GetResult_Request * msg);

/// Finalize action/MoveJoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_GetResult_Request__fini(akari_msgs__action__MoveJoint_GetResult_Request * msg);

/// Create action/MoveJoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * akari_msgs__action__MoveJoint_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_GetResult_Request *
akari_msgs__action__MoveJoint_GetResult_Request__create();

/// Destroy action/MoveJoint message.
/**
 * It calls
 * akari_msgs__action__MoveJoint_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_GetResult_Request__destroy(akari_msgs__action__MoveJoint_GetResult_Request * msg);

/// Check for action/MoveJoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_GetResult_Request__are_equal(const akari_msgs__action__MoveJoint_GetResult_Request * lhs, const akari_msgs__action__MoveJoint_GetResult_Request * rhs);

/// Copy a action/MoveJoint message.
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
akari_msgs__action__MoveJoint_GetResult_Request__copy(
  const akari_msgs__action__MoveJoint_GetResult_Request * input,
  akari_msgs__action__MoveJoint_GetResult_Request * output);

/// Initialize array of action/MoveJoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * akari_msgs__action__MoveJoint_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_GetResult_Request__Sequence__init(akari_msgs__action__MoveJoint_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_GetResult_Request__Sequence__fini(akari_msgs__action__MoveJoint_GetResult_Request__Sequence * array);

/// Create array of action/MoveJoint messages.
/**
 * It allocates the memory for the array and calls
 * akari_msgs__action__MoveJoint_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_GetResult_Request__Sequence *
akari_msgs__action__MoveJoint_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_GetResult_Request__Sequence__destroy(akari_msgs__action__MoveJoint_GetResult_Request__Sequence * array);

/// Check for action/MoveJoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_GetResult_Request__Sequence__are_equal(const akari_msgs__action__MoveJoint_GetResult_Request__Sequence * lhs, const akari_msgs__action__MoveJoint_GetResult_Request__Sequence * rhs);

/// Copy an array of action/MoveJoint messages.
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
akari_msgs__action__MoveJoint_GetResult_Request__Sequence__copy(
  const akari_msgs__action__MoveJoint_GetResult_Request__Sequence * input,
  akari_msgs__action__MoveJoint_GetResult_Request__Sequence * output);

/// Initialize action/MoveJoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * akari_msgs__action__MoveJoint_GetResult_Response
 * )) before or use
 * akari_msgs__action__MoveJoint_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_GetResult_Response__init(akari_msgs__action__MoveJoint_GetResult_Response * msg);

/// Finalize action/MoveJoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_GetResult_Response__fini(akari_msgs__action__MoveJoint_GetResult_Response * msg);

/// Create action/MoveJoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * akari_msgs__action__MoveJoint_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_GetResult_Response *
akari_msgs__action__MoveJoint_GetResult_Response__create();

/// Destroy action/MoveJoint message.
/**
 * It calls
 * akari_msgs__action__MoveJoint_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_GetResult_Response__destroy(akari_msgs__action__MoveJoint_GetResult_Response * msg);

/// Check for action/MoveJoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_GetResult_Response__are_equal(const akari_msgs__action__MoveJoint_GetResult_Response * lhs, const akari_msgs__action__MoveJoint_GetResult_Response * rhs);

/// Copy a action/MoveJoint message.
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
akari_msgs__action__MoveJoint_GetResult_Response__copy(
  const akari_msgs__action__MoveJoint_GetResult_Response * input,
  akari_msgs__action__MoveJoint_GetResult_Response * output);

/// Initialize array of action/MoveJoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * akari_msgs__action__MoveJoint_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_GetResult_Response__Sequence__init(akari_msgs__action__MoveJoint_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_GetResult_Response__Sequence__fini(akari_msgs__action__MoveJoint_GetResult_Response__Sequence * array);

/// Create array of action/MoveJoint messages.
/**
 * It allocates the memory for the array and calls
 * akari_msgs__action__MoveJoint_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_GetResult_Response__Sequence *
akari_msgs__action__MoveJoint_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_GetResult_Response__Sequence__destroy(akari_msgs__action__MoveJoint_GetResult_Response__Sequence * array);

/// Check for action/MoveJoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_GetResult_Response__Sequence__are_equal(const akari_msgs__action__MoveJoint_GetResult_Response__Sequence * lhs, const akari_msgs__action__MoveJoint_GetResult_Response__Sequence * rhs);

/// Copy an array of action/MoveJoint messages.
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
akari_msgs__action__MoveJoint_GetResult_Response__Sequence__copy(
  const akari_msgs__action__MoveJoint_GetResult_Response__Sequence * input,
  akari_msgs__action__MoveJoint_GetResult_Response__Sequence * output);

/// Initialize action/MoveJoint message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * akari_msgs__action__MoveJoint_FeedbackMessage
 * )) before or use
 * akari_msgs__action__MoveJoint_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_FeedbackMessage__init(akari_msgs__action__MoveJoint_FeedbackMessage * msg);

/// Finalize action/MoveJoint message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_FeedbackMessage__fini(akari_msgs__action__MoveJoint_FeedbackMessage * msg);

/// Create action/MoveJoint message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * akari_msgs__action__MoveJoint_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_FeedbackMessage *
akari_msgs__action__MoveJoint_FeedbackMessage__create();

/// Destroy action/MoveJoint message.
/**
 * It calls
 * akari_msgs__action__MoveJoint_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_FeedbackMessage__destroy(akari_msgs__action__MoveJoint_FeedbackMessage * msg);

/// Check for action/MoveJoint message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_FeedbackMessage__are_equal(const akari_msgs__action__MoveJoint_FeedbackMessage * lhs, const akari_msgs__action__MoveJoint_FeedbackMessage * rhs);

/// Copy a action/MoveJoint message.
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
akari_msgs__action__MoveJoint_FeedbackMessage__copy(
  const akari_msgs__action__MoveJoint_FeedbackMessage * input,
  akari_msgs__action__MoveJoint_FeedbackMessage * output);

/// Initialize array of action/MoveJoint messages.
/**
 * It allocates the memory for the number of elements and calls
 * akari_msgs__action__MoveJoint_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__init(akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__fini(akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * array);

/// Create array of action/MoveJoint messages.
/**
 * It allocates the memory for the array and calls
 * akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence *
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/MoveJoint messages.
/**
 * It calls
 * akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
void
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__destroy(akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * array);

/// Check for action/MoveJoint message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_akari_msgs
bool
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__are_equal(const akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * lhs, const akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/MoveJoint messages.
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
akari_msgs__action__MoveJoint_FeedbackMessage__Sequence__copy(
  const akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * input,
  akari_msgs__action__MoveJoint_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // AKARI_MSGS__ACTION__DETAIL__MOVE_JOINT__FUNCTIONS_H_
