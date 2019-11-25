// from http://coliru.stacked-crooked.com/a/090d820540d20fec
// g++ -std=c++14 -O2 -Wall -pthread main.cpp && ./a.out
// result=123

#include <iostream>
#include <string>
#include <boost/spirit/home/x3.hpp>
#include <boost/fusion/include/adapt_struct.hpp>
#include <vector>

namespace x3 = boost::spirit::x3;

namespace ast
{
struct Count
{
  int value;
};
struct Start
{
  Count count;
};
} // namespace ast

BOOST_FUSION_ADAPT_STRUCT(ast::Count, value);
BOOST_FUSION_ADAPT_STRUCT(ast::Start, count);

struct count_class;
struct start_class;
using count_type = x3::rule<count_class, ast::Count>;
using start_type = x3::rule<start_class, ast::Start>;
BOOST_SPIRIT_DECLARE(count_type);
BOOST_SPIRIT_DECLARE(start_type);

const count_type count = "count";
const start_type start = "start";

auto count_def = x3::int_;

const auto start_def = x3::omit[x3::char_] >> count;

BOOST_SPIRIT_DEFINE(count, start);

typedef std::string::const_iterator iterator_type;

BOOST_SPIRIT_INSTANTIATE(start_type, std::string::const_iterator, x3::unused_type);
BOOST_SPIRIT_INSTANTIATE(count_type, std::string::const_iterator, x3::unused_type);

int main()
{
  std::string input = "c123";
  auto iter = input.cbegin();
  auto end = input.cend();
  ast::Start attr{};
  bool r = x3::parse(iter, end, start, attr);
  if (r)
  {
    std::cout << "result=" << attr.count.value << std::endl;
  }
  else
  {
    std::cout << "Failed\n";
  }
  std::vector<int> i;
  x3::parse(iter, end, x3::int_ >> x3::int_, i);

  return 0;
}