#pragma once

#include <string>
#include "all_ast.hpp"

namespace open_protocol::api
{
std::string padding(const std::string &str);

#define OPEN_PROTOCOL_PARSER_DECLARE(msg_ns)                               \
  namespace msg_ns                                                         \
  {                                                                        \
  std::tuple<bool, open_protocol::ast::msg_ns> parse(const std::string &); \
  }

OPEN_PROTOCOL_PARSER_DECLARE(message_hdr)
OPEN_PROTOCOL_PARSER_DECLARE(message)
OPEN_PROTOCOL_PARSER_DECLARE(tightening::mid0060_rev1)
OPEN_PROTOCOL_PARSER_DECLARE(tightening::mid0060_rev2)
OPEN_PROTOCOL_PARSER_DECLARE(tightening::mid0060_rev3)
OPEN_PROTOCOL_PARSER_DECLARE(tightening::mid0060_rev4)
OPEN_PROTOCOL_PARSER_DECLARE(tightening::mid0060_rev5)
OPEN_PROTOCOL_PARSER_DECLARE(tightening::mid0060_rev6)
OPEN_PROTOCOL_PARSER_DECLARE(tightening::mid0060_rev7)
OPEN_PROTOCOL_PARSER_DECLARE(tightening::mid0060_rev998)
OPEN_PROTOCOL_PARSER_DECLARE(tightening::mid0060_rev999)

OPEN_PROTOCOL_PARSER_DECLARE(tightening::mid0061_data_rev1)

#undef OPEN_PROTOCOL_PARSER_DEFINE

} // namespace open_protocol::api