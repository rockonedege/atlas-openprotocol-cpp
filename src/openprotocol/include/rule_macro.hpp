
#pragma once

#define DECLARE_MESSAGE_PARSER(name)                                      \
                                                                          \
  namespace open_protocol::parser::name                                   \
  {                                                                       \
  namespace x3 = boost::spirit::x3;                                       \
  using rule_type = x3::rule<class name_class, open_protocol::ast::name>; \
  BOOST_SPIRIT_DECLARE(rule_type);                                        \
                                                                          \
  rule_type rule();                                                       \
                                                                          \
  } // namespace open_protocol::parser::name

#define DEFINE_MESSAGE_PARSER(name)                                    \
  namespace open_protocol::parser::name                                \
  {                                                                    \
  BOOST_SPIRIT_DEFINE(r);                                              \
                                                                       \
  rule_type rule()                                                     \
  {                                                                    \
    return r;                                                          \
  }                                                                    \
                                                                       \
  using iterator_type = std::string::const_iterator;                   \
  BOOST_SPIRIT_INSTANTIATE(rule_type, iterator_type, x3::unused_type); \
  } // namespace open_protocol::parser::name
