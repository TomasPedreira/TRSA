// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from trsa_interface:srv/PubGoal.idl
// generated code does not contain a copyright notice

#ifndef TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__BUILDER_HPP_
#define TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "trsa_interface/srv/detail/pub_goal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace trsa_interface
{

namespace srv
{

namespace builder
{

class Init_PubGoal_Request_yaw
{
public:
  explicit Init_PubGoal_Request_yaw(::trsa_interface::srv::PubGoal_Request & msg)
  : msg_(msg)
  {}
  ::trsa_interface::srv::PubGoal_Request yaw(::trsa_interface::srv::PubGoal_Request::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trsa_interface::srv::PubGoal_Request msg_;
};

class Init_PubGoal_Request_y
{
public:
  explicit Init_PubGoal_Request_y(::trsa_interface::srv::PubGoal_Request & msg)
  : msg_(msg)
  {}
  Init_PubGoal_Request_yaw y(::trsa_interface::srv::PubGoal_Request::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_PubGoal_Request_yaw(msg_);
  }

private:
  ::trsa_interface::srv::PubGoal_Request msg_;
};

class Init_PubGoal_Request_x
{
public:
  Init_PubGoal_Request_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PubGoal_Request_y x(::trsa_interface::srv::PubGoal_Request::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_PubGoal_Request_y(msg_);
  }

private:
  ::trsa_interface::srv::PubGoal_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::trsa_interface::srv::PubGoal_Request>()
{
  return trsa_interface::srv::builder::Init_PubGoal_Request_x();
}

}  // namespace trsa_interface


namespace trsa_interface
{

namespace srv
{

namespace builder
{

class Init_PubGoal_Response_result
{
public:
  Init_PubGoal_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::trsa_interface::srv::PubGoal_Response result(::trsa_interface::srv::PubGoal_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trsa_interface::srv::PubGoal_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::trsa_interface::srv::PubGoal_Response>()
{
  return trsa_interface::srv::builder::Init_PubGoal_Response_result();
}

}  // namespace trsa_interface

#endif  // TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__BUILDER_HPP_
