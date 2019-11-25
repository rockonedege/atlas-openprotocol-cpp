#include "../../openprotocol/include/openprotocol.hpp"
#include <iostream>

int main()
{
  std::cout << "/////////////////////////////////////////////////////////\n\n";
  std::cout << "\t\tAn open header parser for Open Protocol ...\n\n";
  std::cout << "/////////////////////////////////////////////////////////\n\n";


  std::cout << "Type [q or Q] to quit\n\n";

  std::string s;
  while (getline(std::cin, s))
  {
    if (s.empty() || s[0] == 'q' || s[0] == 'Q')
      break;

    open_protocol::api::debug_parse(s);
  }

  std::cout << "Bye... :-) \n\n";
  return 0;
}