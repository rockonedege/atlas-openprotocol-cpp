#pragma once

#include <iostream>
#include <boost/fusion/include/io.hpp>
#include <boost/optional/optional_io.hpp>

namespace open_protocol::ast
{

using boost::fusion::operator<<;

template <class T>
inline std::ostream &
operator<<(std::ostream &os, std::vector<T> const &v)
{
  for (auto &&t : v)
    os << t << "  ";
  return os;
}
} // namespace open_protocol::ast
