
#pragma once

#include <boost/fusion/include/adapt_struct.hpp>

#include <boost/fusion/adapted/boost_array.hpp>
#include <boost/fusion/include/boost_array.hpp>
#include "all_ast.hpp"

BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::message_hdr,
                          Length,
                          MID,
                          Revision,
                          NoAck,
                          StationID,
                          SpindleID,
                          SequenceNumber,
                          MessagePartsCount,
                          MessagePartsIndex)

BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::static_data,
                          ParameterID,
                          field)

BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::message_data,
                          fields)

BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::message,
                          header,
                          Data)

BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::tightening::mid0060_rev1,
                          no_ack,
                          dont_care)
BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::tightening::mid0060_rev2,
                          no_ack,
                          dont_care)
BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::tightening::mid0060_rev3,
                          no_ack,
                          dont_care)
BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::tightening::mid0060_rev4,
                          no_ack,
                          dont_care)
BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::tightening::mid0060_rev5,
                          no_ack,
                          dont_care)
BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::tightening::mid0060_rev6,
                          no_ack,
                          dont_care)
BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::tightening::mid0060_rev7,
                          no_ack,
                          dont_care)
BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::tightening::mid0060_rev998,
                          no_ack,
                          dont_care)
BOOST_FUSION_ADAPT_STRUCT(open_protocol::ast::tightening::mid0060_rev999,
                          no_ack,
                          dont_care)

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
