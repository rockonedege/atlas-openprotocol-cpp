#include "../../../include/mid/tightening/rule_mids.hpp" //mid//mid/id/lude/mid/tightening/midxxxx.hpp"

#include "../../../include/rule_macro.hpp"
#include "../../../include/uint_parsers.hpp"

#define DEFINE_MID0060_REVPARSER(revision)                        \
                                                                  \
  namespace open_protocol::parser::tightening::revision           \
  {                                                               \
  namespace x3 = boost::spirit::x3;                               \
  namespace ascii = x3::ascii;                                    \
                                                                  \
  rule_type const r = "revision";                                 \
  /* NoAck >> don't care    */                                    \
  auto const r_def = uint_1_digit >> x3::repeat(8)[ascii::char_]; \
  }                                                               \
                                                                  \
  DEFINE_MESSAGE_PARSER(tightening::revision)

DEFINE_MID0060_REVPARSER(mid0060_rev1)
DEFINE_MID0060_REVPARSER(mid0060_rev2)
DEFINE_MID0060_REVPARSER(mid0060_rev3)
DEFINE_MID0060_REVPARSER(mid0060_rev4)
DEFINE_MID0060_REVPARSER(mid0060_rev5)
DEFINE_MID0060_REVPARSER(mid0060_rev6)
DEFINE_MID0060_REVPARSER(mid0060_rev7)
DEFINE_MID0060_REVPARSER(mid0060_rev998)
DEFINE_MID0060_REVPARSER(mid0060_rev999)

#undef DEFINE_MID0060_REVPARSER
