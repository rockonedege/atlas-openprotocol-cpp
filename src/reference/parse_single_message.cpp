#define BOOST_MPL_CFG_NO_PREPROCESSED_HEADERS
#define BOOST_MPL_LIMIT_VECTOR_SIZE 50
#include <boost/config/warning_disable.hpp>
#include <boost/spirit/home/x3.hpp>

#include <boost/fusion/include/adapt_struct.hpp>

namespace open_protocol::ast::tightening
{

struct mid0061_data_rev1
{
  std::uint32_t cell_id;
  std::uint8_t channel_id;
  std::string torque_controller_name; // 25 bytes
  std::string vin_id;                 // 25 bytes
  std::uint8_t job_id;
  std::uint16_t parameter_set_id;

  std::uint32_t batch_size;
  std::uint32_t batch_counter;
  std::uint8_t tightening_status;
  std::uint8_t torque_status;
  std::uint8_t angle_status;

  // 6 bytes each
  std::uint32_t torque_min_limit;
  std::uint32_t torque_max_limit;
  std::uint32_t torque_final_target;
  std::uint32_t torque;

  // 5 bytes each
  std::uint32_t angle_min_limit;
  std::uint32_t angle_max_limit;
  std::uint32_t angle_final_target;
  std::uint32_t angle;

  std::string timestamp_tightening;                    // 19 bytes
  std::string timestamp_last_parameter_setting_change; // 19 bytes

  std::uint8_t batch_status;
  std::uint32_t tightening_id; // 10 bytes
};
} // namespace open_protocol::ast::tightening

BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::tightening::mid0061_data_rev1,
                          cell_id,
                          channel_id,
                          torque_controller_name,
                          vin_id,
                          job_id,
                          parameter_set_id,

                          batch_size,
                          batch_counter,
                          tightening_status,
                          torque_status,
                          angle_status,

                          torque_min_limit,
                          torque_max_limit,
                          torque_final_target,
                          torque,

                          angle_min_limit,
                          angle_max_limit,
                          angle_final_target,
                          angle,

                          timestamp_tightening,
                          timestamp_last_parameter_setting_change,

                          batch_status,
                          tightening_id)

namespace open_protocol::parser::tightening::mid0061_data_rev1
{
namespace x3 = boost::spirit::x3;
namespace ascii = x3::ascii;

using x3::lit;
using x3::repeat;

auto const uint_1_digit = x3::uint_parser<std::uint8_t, 10, 1, 1>{};
auto const uint_2_digits = x3::uint_parser<std::uint8_t, 10, 2, 2>{};
auto const uint_3_digits = x3::uint_parser<std::uint32_t, 10, 3, 3>{};
auto const uint_4_digits = x3::uint_parser<std::uint32_t, 10, 4, 4>{};
auto const uint_5_digits = x3::uint_parser<std::uint32_t, 10, 5, 5>{};
auto const uint_6_digits = x3::uint_parser<std::uint32_t, 10, 6, 6>{};
auto const uint_10_digits = x3::uint_parser<std::uint32_t, 10, 10, 10>{};

using rule_type = x3::rule<class mid0061_data_rev1_class, open_protocol::ast::tightening::mid0061_data_rev1>;

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

                   >> lit("16") >> uint_5_digits // angle_min_limit;
                   >> lit("17") >> uint_5_digits // angle_max_limit;
                   >> lit("18") >> uint_5_digits // angle_finalarget;
                   >> lit("19") >> uint_5_digits // angle;

                   >> lit("20") >> repeat(19)[ascii::char_] //  timestamp; // 19 bytes
                   >> lit("21") >> repeat(19)[ascii::char_] //  timestamp; // 19 bytes
                   >> lit("22") >> uint_1_digit             //  batch_status;
                   >> lit("23") >> uint_10_digits           //  tightening_id; // 10 bytes
    ;

} // namespace open_protocol::parser::tightening::mid0061_data_rev1

namespace open_protocol::parser::tightening::mid0061_data_rev1
{
BOOST_SPIRIT_DEFINE(r);

rule_type rule()
{
  return r;
}

using iterator_type = std::string::const_iterator;
BOOST_SPIRIT_INSTANTIATE(rule_type, iterator_type, x3::unused_type);
} // namespace open_protocol::parser::tightening::mid0061_data_rev1

int main()
{
}