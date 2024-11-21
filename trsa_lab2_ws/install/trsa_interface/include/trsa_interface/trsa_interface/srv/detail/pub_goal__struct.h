// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from trsa_interface:srv/PubGoal.idl
// generated code does not contain a copyright notice

#ifndef TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__STRUCT_H_
#define TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/PubGoal in the package trsa_interface.
typedef struct trsa_interface__srv__PubGoal_Request
{
  double x;
  double y;
  double yaw;
} trsa_interface__srv__PubGoal_Request;

// Struct for a sequence of trsa_interface__srv__PubGoal_Request.
typedef struct trsa_interface__srv__PubGoal_Request__Sequence
{
  trsa_interface__srv__PubGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trsa_interface__srv__PubGoal_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PubGoal in the package trsa_interface.
typedef struct trsa_interface__srv__PubGoal_Response
{
  bool result;
} trsa_interface__srv__PubGoal_Response;

// Struct for a sequence of trsa_interface__srv__PubGoal_Response.
typedef struct trsa_interface__srv__PubGoal_Response__Sequence
{
  trsa_interface__srv__PubGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} trsa_interface__srv__PubGoal_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__STRUCT_H_
