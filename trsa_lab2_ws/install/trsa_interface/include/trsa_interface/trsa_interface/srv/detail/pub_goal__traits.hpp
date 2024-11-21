// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from trsa_interface:srv/PubGoal.idl
// generated code does not contain a copyright notice

#ifndef TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__TRAITS_HPP_
#define TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "trsa_interface/srv/detail/pub_goal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace trsa_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const PubGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PubGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PubGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace trsa_interface

namespace rosidl_generator_traits
{

[[deprecated("use trsa_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const trsa_interface::srv::PubGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  trsa_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use trsa_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const trsa_interface::srv::PubGoal_Request & msg)
{
  return trsa_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<trsa_interface::srv::PubGoal_Request>()
{
  return "trsa_interface::srv::PubGoal_Request";
}

template<>
inline const char * name<trsa_interface::srv::PubGoal_Request>()
{
  return "trsa_interface/srv/PubGoal_Request";
}

template<>
struct has_fixed_size<trsa_interface::srv::PubGoal_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<trsa_interface::srv::PubGoal_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<trsa_interface::srv::PubGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace trsa_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const PubGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PubGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PubGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace trsa_interface

namespace rosidl_generator_traits
{

[[deprecated("use trsa_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const trsa_interface::srv::PubGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  trsa_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use trsa_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const trsa_interface::srv::PubGoal_Response & msg)
{
  return trsa_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<trsa_interface::srv::PubGoal_Response>()
{
  return "trsa_interface::srv::PubGoal_Response";
}

template<>
inline const char * name<trsa_interface::srv::PubGoal_Response>()
{
  return "trsa_interface/srv/PubGoal_Response";
}

template<>
struct has_fixed_size<trsa_interface::srv::PubGoal_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<trsa_interface::srv::PubGoal_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<trsa_interface::srv::PubGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<trsa_interface::srv::PubGoal>()
{
  return "trsa_interface::srv::PubGoal";
}

template<>
inline const char * name<trsa_interface::srv::PubGoal>()
{
  return "trsa_interface/srv/PubGoal";
}

template<>
struct has_fixed_size<trsa_interface::srv::PubGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<trsa_interface::srv::PubGoal_Request>::value &&
    has_fixed_size<trsa_interface::srv::PubGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<trsa_interface::srv::PubGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<trsa_interface::srv::PubGoal_Request>::value &&
    has_bounded_size<trsa_interface::srv::PubGoal_Response>::value
  >
{
};

template<>
struct is_service<trsa_interface::srv::PubGoal>
  : std::true_type
{
};

template<>
struct is_service_request<trsa_interface::srv::PubGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<trsa_interface::srv::PubGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TRSA_INTERFACE__SRV__DETAIL__PUB_GOAL__TRAITS_HPP_
