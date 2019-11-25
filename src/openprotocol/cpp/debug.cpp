#include "../include/message_io.hpp"
#include "../include/debug.hpp"

#include <iostream>
#include <iterator>
#include <algorithm>
namespace open_protocol::api
{
template <class Ast>
void debug_parse(const std::string &s)
{

  auto [is_success, attr] = api::message::parse(s);

  if (is_success)
  {
    std::cout << boost::fusion::tuple_open('[')
              << boost::fusion::tuple_close(']')
              << boost::fusion::tuple_delimiter(", ");

    std::cout << "-------------------------\n"
              << "Parsing succeeded\n"
              << "got: " << attr << std::endl
              << "\n-------------------------\n";
  }
  else
  {
    std::cout << "-------------------------\n"
              << "Parsing failed\n"
              << "-------------------------\n";
  }
}

void debug_parse(const std::string &s)
{
  debug_parse<open_protocol::ast::message>(s);
}

} // namespace open_protocol::api