#pragma once

#include <boost/spirit/home/x3/numeric/uint.hpp>
// #include <boost/spirit/home/x3/numeric.hpp>

namespace open_protocol::parser
{
namespace x3 = boost::spirit::x3;

auto const uint_1_digit = x3::uint_parser<std::uint8_t, 10, 1, 1>{};
auto const uint_2_digits = x3::uint_parser<std::uint8_t, 10, 2, 2>{};
auto const uint_3_digits = x3::uint_parser<std::uint32_t, 10, 3, 3>{};
auto const uint_4_digits = x3::uint_parser<std::uint32_t, 10, 4, 4>{};
auto const uint_5_digits = x3::uint_parser<std::uint32_t, 10, 5, 5>{};
auto const uint_6_digits = x3::uint_parser<std::uint32_t, 10, 6, 6>{};
auto const uint_10_digits = x3::uint_parser<std::uint32_t, 10, 10, 10>{};
}