// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from trsa_interface:srv/PubGoal.idl
// generated code does not contain a copyright notice

#ifndef TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__STRUCT_HPP_
#define TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__trsa_interface__srv__PubGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__trsa_interface__srv__PubGoal_Request __declspec(deprecated)
#endif

namespace trsa_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PubGoal_Request_
{
  using Type = PubGoal_Request_<ContainerAllocator>;

  explicit PubGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
    }
  }

  explicit PubGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->yaw = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _yaw_type =
    double;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trsa_interface::srv::PubGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const trsa_interface::srv::PubGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trsa_interface::srv::PubGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trsa_interface::srv::PubGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trsa_interface::srv::PubGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trsa_interface::srv::PubGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trsa_interface::srv::PubGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trsa_interface::srv::PubGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trsa_interface::srv::PubGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trsa_interface::srv::PubGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trsa_interface__srv__PubGoal_Request
    std::shared_ptr<trsa_interface::srv::PubGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trsa_interface__srv__PubGoal_Request
    std::shared_ptr<trsa_interface::srv::PubGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PubGoal_Request_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const PubGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PubGoal_Request_

// alias to use template instance with default allocator
using PubGoal_Request =
  trsa_interface::srv::PubGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace trsa_interface


#ifndef _WIN32
# define DEPRECATED__trsa_interface__srv__PubGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__trsa_interface__srv__PubGoal_Response __declspec(deprecated)
#endif

namespace trsa_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct PubGoal_Response_
{
  using Type = PubGoal_Response_<ContainerAllocator>;

  explicit PubGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  explicit PubGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trsa_interface::srv::PubGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const trsa_interface::srv::PubGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trsa_interface::srv::PubGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trsa_interface::srv::PubGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trsa_interface::srv::PubGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trsa_interface::srv::PubGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trsa_interface::srv::PubGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trsa_interface::srv::PubGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trsa_interface::srv::PubGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trsa_interface::srv::PubGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trsa_interface__srv__PubGoal_Response
    std::shared_ptr<trsa_interface::srv::PubGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trsa_interface__srv__PubGoal_Response
    std::shared_ptr<trsa_interface::srv::PubGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PubGoal_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const PubGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PubGoal_Response_

// alias to use template instance with default allocator
using PubGoal_Response =
  trsa_interface::srv::PubGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace trsa_interface

namespace trsa_interface
{

namespace srv
{

struct PubGoal
{
  using Request = trsa_interface::srv::PubGoal_Request;
  using Response = trsa_interface::srv::PubGoal_Response;
};

}  // namespace srv

}  // namespace trsa_interface

#endif  // TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__STRUCT_HPP_
