#pragma once
#include "../ast_mid_base.hpp"
#include "./ast_mid0061.hpp"

namespace open_protocol::ast::tightening
{
template <mid0061::revision revision>
struct mid0060 : mid_base<60, revision>
{
  uint8_t no_ack;
  std::string dont_care;
};

using mid0060_rev1 = mid0060<mid0061::revision::_1>;
using mid0060_rev2 = mid0060<mid0061::revision::_2>;
using mid0060_rev3 = mid0060<mid0061::revision::_3>;
using mid0060_rev4 = mid0060<mid0061::revision::_4>;
using mid0060_rev5 = mid0060<mid0061::revision::_5>;
using mid0060_rev6 = mid0060<mid0061::revision::_6>;
using mid0060_rev7 = mid0060<mid0061::revision::_7>;
using mid0060_rev998 = mid0060<mid0061::revision::_998>;
using mid0060_rev999 = mid0060<mid0061::revision::_999>;

} // namespace open_protocol::ast::tightening
