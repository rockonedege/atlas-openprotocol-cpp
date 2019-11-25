#include "../../../include/mid/tightening/rule_mids.hpp"
#include "../../../include/rule_macro.hpp"

namespace open_protocol::parser::tightening::mid0061_data_rev1
{
namespace x3 = boost::spirit::x3;
namespace ascii = x3::ascii;
using x3::lit;
using x3::repeat;

rule_type const r = "mid0061_data_rev1";

auto const r_def = lit("01") >> uint_4_digits               // cell_id;
                   >> lit("02") >> uint_2_digits            // channel_id;
                   >> lit("03") >> repeat(25)[ascii::char_] // torque_controller_name;
                   >> lit("04") >> repeat(25)[ascii::char_] // vin_id;
                   >> lit("05") >> uint_2_digits            // job_id;
                   >> lit("06") >> uint_3_digits            // parameter_set_id;

                   >> lit("07") >> uint_4_digits // batch_size;
                   >> lit("08") >> uint_4_digits // batch_counter;
                   >> lit("09") >> uint_1_digit  // tightening_status;
                   >> lit("10") >> uint_1_digit  // torque_status;
                   >> lit("11") >> uint_1_digit  // angle_status;

                   >> lit("12") >> uint_6_digits // torque_min_limit;
                   >> lit("13") >> uint_6_digits // torque_max_limit;
                   >> lit("14") >> uint_6_digits // torque_finalarget;
                   >> lit("15") >> uint_6_digits // torque;

                   >> lit("16") >> uint_5_digits            // angle_min_limit;
                   >> lit("17") >> uint_5_digits            // angle_max_limit;
                   >> lit("18") >> uint_5_digits            // angle_finalarget;
                   >> lit("19") >> uint_5_digits            // angle;
                   >> lit("20") >> repeat(19)[ascii::char_] //  timestamp; // 19 byte
                   >> lit("21") >> repeat(19)[ascii::char_] //  timestamp; // 19 byte
                   >> lit("22") >> uint_1_digit             //  batch_status;
                   >> lit("23") >> uint_10_digits           //  tightening_id; // 10 byte
    ;

} // namespace open_protocol::parser::tightening::mid0061_data_rev1

DEFINE_MESSAGE_PARSER(tightening::mid0061_data_rev1)
