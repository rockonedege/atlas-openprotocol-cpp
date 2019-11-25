#pragma once

#include <cstddef>

namespace open_protocol::ast
{
template <std::uint32_t MID, std::uint32_t Revision = 0>
struct mid_base
{
  static constexpr std::uint32_t mid = MID;
  static constexpr std::uint32_t revision = Revision;
};

template <std::uint32_t Index, typename T>
struct mid_data_entry
{
  static constexpr std::uint32_t index = Index;
  T value;
};

} // namespace open_protocol::ast