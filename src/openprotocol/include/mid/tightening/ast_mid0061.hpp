#pragma once
#include "../ast_mid_base.hpp"

namespace open_protocol::ast::tightening
{

struct mid0061
{
  enum revision
  {
    _1 = 1,
    _2 = 2,
    _3 = 3,
    _4 = 4,
    _5 = 5,
    _6 = 6,
    _7 = 7,
    _998 = 998,
    _999 = 999
  };
};

struct mid0061_data_rev1 : mid_base<61, mid0061::revision::_1>
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

struct mid0061_data_rev2 : mid_base<61, mid0061::revision::_2>, mid0061_data_rev1
{
};
struct mid0061_data_rev3 : mid_base<61, mid0061::revision::_3>, mid0061_data_rev2
{
};
struct mid0061_data_rev4 : mid_base<61, mid0061::revision::_4>, mid0061_data_rev3
{
};
struct mid0061_data_rev5 : mid_base<61, mid0061::revision::_5>, mid0061_data_rev4
{
};
struct mid0061_data_rev6 : mid_base<61, mid0061::revision::_6>, mid0061_data_rev5
{
};
struct mid0061_data_rev7 : mid_base<61, mid0061::revision::_7>, mid0061_data_rev6
{
};

struct mid0061_data_rev998 : mid_base<61, mid0061::revision::_998>, mid0061_data_rev6
{
};
struct mid0061_data_rev999 : mid_base<61, mid0061::revision::_999>
{
};

} // namespace open_protocol::ast::tightening
