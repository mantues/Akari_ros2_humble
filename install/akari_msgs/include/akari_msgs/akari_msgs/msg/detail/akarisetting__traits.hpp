// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from akari_msgs:msg/Akarisetting.idl
// generated code does not contain a copyright notice

#ifndef AKARI_MSGS__MSG__DETAIL__AKARISETTING__TRAITS_HPP_
#define AKARI_MSGS__MSG__DETAIL__AKARISETTING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "akari_msgs/msg/detail/akarisetting__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace akari_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Akarisetting & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: jointname
  {
    if (msg.jointname.size() == 0) {
      out << "jointname: []";
    } else {
      out << "jointname: [";
      size_t pending_items = msg.jointname.size();
      for (auto item : msg.jointname) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: jointpositions
  {
    if (msg.jointpositions.size() == 0) {
      out << "jointpositions: []";
    } else {
      out << "jointpositions: [";
      size_t pending_items = msg.jointpositions.size();
      for (auto item : msg.jointpositions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: jointvelocities
  {
    if (msg.jointvelocities.size() == 0) {
      out << "jointvelocities: []";
    } else {
      out << "jointvelocities: [";
      size_t pending_items = msg.jointvelocities.size();
      for (auto item : msg.jointvelocities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: jointaccelerations
  {
    if (msg.jointaccelerations.size() == 0) {
      out << "jointaccelerations: []";
    } else {
      out << "jointaccelerations: [";
      size_t pending_items = msg.jointaccelerations.size();
      for (auto item : msg.jointaccelerations) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: servoenabled
  {
    if (msg.servoenabled.size() == 0) {
      out << "servoenabled: []";
    } else {
      out << "servoenabled: [";
      size_t pending_items = msg.servoenabled.size();
      for (auto item : msg.servoenabled) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: servomovingstate
  {
    if (msg.servomovingstate.size() == 0) {
      out << "servomovingstate: []";
    } else {
      out << "servomovingstate: [";
      size_t pending_items = msg.servomovingstate.size();
      for (auto item : msg.servomovingstate) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Akarisetting & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: jointname
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.jointname.size() == 0) {
      out << "jointname: []\n";
    } else {
      out << "jointname:\n";
      for (auto item : msg.jointname) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: jointpositions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.jointpositions.size() == 0) {
      out << "jointpositions: []\n";
    } else {
      out << "jointpositions:\n";
      for (auto item : msg.jointpositions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: jointvelocities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.jointvelocities.size() == 0) {
      out << "jointvelocities: []\n";
    } else {
      out << "jointvelocities:\n";
      for (auto item : msg.jointvelocities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: jointaccelerations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.jointaccelerations.size() == 0) {
      out << "jointaccelerations: []\n";
    } else {
      out << "jointaccelerations:\n";
      for (auto item : msg.jointaccelerations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: servoenabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servoenabled.size() == 0) {
      out << "servoenabled: []\n";
    } else {
      out << "servoenabled:\n";
      for (auto item : msg.servoenabled) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: servomovingstate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.servomovingstate.size() == 0) {
      out << "servomovingstate: []\n";
    } else {
      out << "servomovingstate:\n";
      for (auto item : msg.servomovingstate) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Akarisetting & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace akari_msgs

namespace rosidl_generator_traits
{

[[deprecated("use akari_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const akari_msgs::msg::Akarisetting & msg,
  std::ostream & out, size_t indentation = 0)
{
  akari_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use akari_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const akari_msgs::msg::Akarisetting & msg)
{
  return akari_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<akari_msgs::msg::Akarisetting>()
{
  return "akari_msgs::msg::Akarisetting";
}

template<>
inline const char * name<akari_msgs::msg::Akarisetting>()
{
  return "akari_msgs/msg/Akarisetting";
}

template<>
struct has_fixed_size<akari_msgs::msg::Akarisetting>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<akari_msgs::msg::Akarisetting>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<akari_msgs::msg::Akarisetting>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // AKARI_MSGS__MSG__DETAIL__AKARISETTING__TRAITS_HPP_
