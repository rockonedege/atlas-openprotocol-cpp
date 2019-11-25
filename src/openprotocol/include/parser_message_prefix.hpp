#pragma once

#include <string>
#include <tuple>

namespace open_protocol::api
{
std::tuple<uint32_t, uint32_t, uint32_t> parse_message_prefix_revision(const std::string &s);
}
