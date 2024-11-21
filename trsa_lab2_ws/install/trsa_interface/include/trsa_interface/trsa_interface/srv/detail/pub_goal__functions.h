// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from trsa_interface:srv/PubGoal.idl
// generated code does not contain a copyright notice

#ifndef TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__FUNCTIONS_H_
#define TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "trsa_interface/msg/rosidl_generator_c__visibility_control.h"

#include "trsa_interface/srv/detail/pub_goal__struct.h"

/// Initialize srv/PubGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * trsa_interface__srv__PubGoal_Request
 * )) before or use
 * trsa_interface__srv__PubGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
bool
trsa_interface__srv__PubGoal_Request__init(trsa_interface__srv__PubGoal_Request * msg);

/// Finalize srv/PubGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
void
trsa_interface__srv__PubGoal_Request__fini(trsa_interface__srv__PubGoal_Request * msg);

/// Create srv/PubGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * trsa_interface__srv__PubGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
trsa_interface__srv__PubGoal_Request *
trsa_interface__srv__PubGoal_Request__create();

/// Destroy srv/PubGoal message.
/**
 * It calls
 * trsa_interface__srv__PubGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
void
trsa_interface__srv__PubGoal_Request__destroy(trsa_interface__srv__PubGoal_Request * msg);

/// Check for srv/PubGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
bool
trsa_interface__srv__PubGoal_Request__are_equal(const trsa_interface__srv__PubGoal_Request * lhs, const trsa_interface__srv__PubGoal_Request * rhs);

/// Copy a srv/PubGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
bool
trsa_interface__srv__PubGoal_Request__copy(
  const trsa_interface__srv__PubGoal_Request * input,
  trsa_interface__srv__PubGoal_Request * output);

/// Initialize array of srv/PubGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * trsa_interface__srv__PubGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
bool
trsa_interface__srv__PubGoal_Request__Sequence__init(trsa_interface__srv__PubGoal_Request__Sequence * array, size_t size);

/// Finalize array of srv/PubGoal messages.
/**
 * It calls
 * trsa_interface__srv__PubGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
void
trsa_interface__srv__PubGoal_Request__Sequence__fini(trsa_interface__srv__PubGoal_Request__Sequence * array);

/// Create array of srv/PubGoal messages.
/**
 * It allocates the memory for the array and calls
 * trsa_interface__srv__PubGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
trsa_interface__srv__PubGoal_Request__Sequence *
trsa_interface__srv__PubGoal_Request__Sequence__create(size_t size);

/// Destroy array of srv/PubGoal messages.
/**
 * It calls
 * trsa_interface__srv__PubGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
void
trsa_interface__srv__PubGoal_Request__Sequence__destroy(trsa_interface__srv__PubGoal_Request__Sequence * array);

/// Check for srv/PubGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
bool
trsa_interface__srv__PubGoal_Request__Sequence__are_equal(const trsa_interface__srv__PubGoal_Request__Sequence * lhs, const trsa_interface__srv__PubGoal_Request__Sequence * rhs);

/// Copy an array of srv/PubGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
bool
trsa_interface__srv__PubGoal_Request__Sequence__copy(
  const trsa_interface__srv__PubGoal_Request__Sequence * input,
  trsa_interface__srv__PubGoal_Request__Sequence * output);

/// Initialize srv/PubGoal message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * trsa_interface__srv__PubGoal_Response
 * )) before or use
 * trsa_interface__srv__PubGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
bool
trsa_interface__srv__PubGoal_Response__init(trsa_interface__srv__PubGoal_Response * msg);

/// Finalize srv/PubGoal message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
void
trsa_interface__srv__PubGoal_Response__fini(trsa_interface__srv__PubGoal_Response * msg);

/// Create srv/PubGoal message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * trsa_interface__srv__PubGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
trsa_interface__srv__PubGoal_Response *
trsa_interface__srv__PubGoal_Response__create();

/// Destroy srv/PubGoal message.
/**
 * It calls
 * trsa_interface__srv__PubGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
void
trsa_interface__srv__PubGoal_Response__destroy(trsa_interface__srv__PubGoal_Response * msg);

/// Check for srv/PubGoal message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
bool
trsa_interface__srv__PubGoal_Response__are_equal(const trsa_interface__srv__PubGoal_Response * lhs, const trsa_interface__srv__PubGoal_Response * rhs);

/// Copy a srv/PubGoal message.
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
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
bool
trsa_interface__srv__PubGoal_Response__copy(
  const trsa_interface__srv__PubGoal_Response * input,
  trsa_interface__srv__PubGoal_Response * output);

/// Initialize array of srv/PubGoal messages.
/**
 * It allocates the memory for the number of elements and calls
 * trsa_interface__srv__PubGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
bool
trsa_interface__srv__PubGoal_Response__Sequence__init(trsa_interface__srv__PubGoal_Response__Sequence * array, size_t size);

/// Finalize array of srv/PubGoal messages.
/**
 * It calls
 * trsa_interface__srv__PubGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
void
trsa_interface__srv__PubGoal_Response__Sequence__fini(trsa_interface__srv__PubGoal_Response__Sequence * array);

/// Create array of srv/PubGoal messages.
/**
 * It allocates the memory for the array and calls
 * trsa_interface__srv__PubGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
trsa_interface__srv__PubGoal_Response__Sequence *
trsa_interface__srv__PubGoal_Response__Sequence__create(size_t size);

/// Destroy array of srv/PubGoal messages.
/**
 * It calls
 * trsa_interface__srv__PubGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
void
trsa_interface__srv__PubGoal_Response__Sequence__destroy(trsa_interface__srv__PubGoal_Response__Sequence * array);

/// Check for srv/PubGoal message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
bool
trsa_interface__srv__PubGoal_Response__Sequence__are_equal(const trsa_interface__srv__PubGoal_Response__Sequence * lhs, const trsa_interface__srv__PubGoal_Response__Sequence * rhs);

/// Copy an array of srv/PubGoal messages.
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
ROSIDL_GENERATOR_C_PUBLIC_trsa_interface
bool
trsa_interface__srv__PubGoal_Response__Sequence__copy(
  const trsa_interface__srv__PubGoal_Response__Sequence * input,
  trsa_interface__srv__PubGoal_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__FUNCTIONS_H_
