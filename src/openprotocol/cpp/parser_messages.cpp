#include "../include/ast_adapted.hpp"
#include "../include/all_ast.hpp"
#include "../include/all_rules.hpp"

#include "../include/parser_messages.hpp"

#include <iterator>
#include <algorithm>
namespace open_protocol::api
{

std::string padding(const std::string &str)
{
  std::string s;
  std::replace_copy(str.cbegin(), str.cend(), std::back_inserter(s), ' ', '0');
  return s;
}

template <class Ast, class Rule, Rule (*)(void)>
std::tuple<bool, Ast> parse_one(const std::string &str)
{
  using boost::spirit::x3::ascii::space;

  auto s(padding(str));

  Ast attr;
  auto iter = s.cbegin();
  auto const end = s.cend();
  bool r = parse(iter, end, Rule(), attr);

  return {r && iter == end, attr};
}

#define OPEN_PROTOCOL_PARSER_DEFINE(msg_ns)                                  \
  namespace msg_ns                                                           \
  {                                                                          \
  std::tuple<bool, open_protocol::ast::msg_ns> parse(const std::string &str) \
  {                                                                          \
    return parse_one<open_protocol::ast::msg_ns,                             \
                     open_protocol::parser::msg_ns::rule_type,               \
                     &open_protocol::parser::msg_ns::rule>(str);             \
  }                                                                          \
  }

OPEN_PROTOCOL_PARSER_DEFINE(message_hdr)
OPEN_PROTOCOL_PARSER_DEFINE(message)
OPEN_PROTOCOL_PARSER_DEFINE(tightening::mid0060_rev1)
OPEN_PROTOCOL_PARSER_DEFINE(tightening::mid0060_rev2)
OPEN_PROTOCOL_PARSER_DEFINE(tightening::mid0060_rev3)
OPEN_PROTOCOL_PARSER_DEFINE(tightening::mid0060_rev4)
OPEN_PROTOCOL_PARSER_DEFINE(tightening::mid0060_rev5)
OPEN_PROTOCOL_PARSER_DEFINE(tightening::mid0060_rev6)
OPEN_PROTOCOL_PARSER_DEFINE(tightening::mid0060_rev7)
OPEN_PROTOCOL_PARSER_DEFINE(tightening::mid0060_rev998)
OPEN_PROTOCOL_PARSER_DEFINE(tightening::mid0060_rev999)

OPEN_PROTOCOL_PARSER_DEFINE(tightening::mid0061_data_rev1)

#undef OPEN_PROTOCOL_PARSER_DEFINE

} // namespace open_protocol::api