#pragma once
#include <cstdint>
#include <boost/optional.hpp>
#include <boost/variant.hpp>

namespace open_protocol::ast
{
struct message_hdr
{
  uint32_t Length;
  uint32_t MID;
  uint32_t Revision;
  uint8_t NoAck;
  uint16_t StationID;
  uint16_t SpindleID;
  uint16_t SequenceNumber;
  uint8_t MessagePartsCount;
  uint8_t MessagePartsIndex;
};

struct static_data
{
  uint16_t ParameterID;
  boost::variant<std::string, unsigned int> field;
};

struct message_data
{
  // std::vector<static_data> fields;
  std::string fields;
};

struct message
{
  message_hdr header;
  boost::optional<message_data> Data;
};

} // namespace open_protocol::ast