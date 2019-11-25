

#include "../include/all_ast.hpp"
#include "../include/ast_adapted.hpp"
#include "../include/all_rules.hpp"

namespace open_protocol::parser::message_hdr
{
namespace x3 = boost::spirit::x3;
namespace ascii = x3::ascii;

// auto const uint_1_digit = x3::uint_parser<std::uint8_t, 10, 1, 1>{};
// auto const uint_2_digits = x3::uint_parser<std::uint16_t, 10, 2, 2>{};
// auto const uint_3_digits = x3::uint_parser<std::uint32_t, 10, 3, 3>{};
// auto const uint_4_digits = x3::uint_parser<std::uint32_t, 10, 4, 4>{};
using open_protocol::parser::uint_1_digit;
using open_protocol::parser::uint_2_digits;
using open_protocol::parser::uint_3_digits;
using open_protocol::parser::uint_4_digits;

rule_type const r = "message_hdr";

auto const r_def = uint_4_digits    // Length
                   >> uint_4_digits // MID
                   >> uint_3_digits // Revision
                   >> uint_1_digit  // NoAck
                   >> uint_2_digits // StationID,
                   >> uint_2_digits // SpindleID,
                   >> uint_2_digits // SequenceNumber,
                   >> uint_1_digit  // MessagePartsCount,
                   >> uint_1_digit  // MessagePartsIndex,
    ;
} // namespace open_protocol::parser::message_hdr

namespace open_protocol::parser::message_data
{
namespace x3 = boost::spirit::x3;
namespace ascii = x3::ascii;
using ascii::char_;
using x3::int_;

// auto const uint_2_digits = x3::uint_parser<std::uint16_t, 10, 2, 2>{};
using open_protocol::parser::uint_2_digits;
// using open_protocol::parser::uint_4_digits;

const auto static_data = x3::rule<class static_data, ast::static_data>{"static_data"} = uint_2_digits >> (*char_ | int_);

const rule_type r = "message_data";
const auto r_def = *char_;
} // namespace open_protocol::parser::message_data

namespace open_protocol::parser::message
{
namespace x3 = boost::spirit::x3;
namespace ascii = x3::ascii;

// using ascii::char_;
using x3::digit;
using x3::int_;
using x3::lexeme;
using x3::no_skip;
using x3::repeat;
using x3::space;

rule_type const r{"message"};

auto const r_def = open_protocol::parser::message_hdr::rule() >> -open_protocol::parser::message_data::rule() // Data
                                                                                                              // >> '\x00'
    ;
} // namespace open_protocol::parser::message

DEFINE_MESSAGE_PARSER(message_data)

DEFINE_MESSAGE_PARSER(message_hdr)

DEFINE_MESSAGE_PARSER(message)
