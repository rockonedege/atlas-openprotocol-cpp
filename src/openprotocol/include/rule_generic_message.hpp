#pragma once

#include <boost/config/warning_disable.hpp>
#include <boost/spirit/home/x3.hpp>
#include "ast_generic_message.hpp"

#include "rule_macro.hpp"


DECLARE_MESSAGE_PARSER(message_data)

DECLARE_MESSAGE_PARSER(message_hdr)

DECLARE_MESSAGE_PARSER(message)
