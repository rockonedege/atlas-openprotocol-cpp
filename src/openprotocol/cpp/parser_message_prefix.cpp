
#include <boost/fusion/adapted/std_tuple.hpp>
#include <boost/config/warning_disable.hpp>
#include <boost/spirit/home/x3.hpp>

#include "../include/parser_message_prefix.hpp"

namespace open_protocol::api
{

std::tuple<uint32_t, uint32_t, uint32_t> parse_message_prefix_revision(const std::string &s)
{

  namespace x3 = boost::spirit::x3;

  auto const uint_3_digits = x3::uint_parser<std::uint32_t, 10, 3, 3>{};
  auto const uint_4_digits = x3::uint_parser<std::uint32_t, 10, 4, 4>{};

  auto iter = s.cbegin();
  auto end_iter = s.cend();

  std::tuple<uint32_t, uint32_t, uint32_t> len_id_rev;

  x3::parse(iter, end_iter,
            uint_4_digits >> uint_4_digits >> uint_3_digits,
            len_id_rev);

  return len_id_rev;
}

} // namespace open_protocol::api