#define BOOST_TEST_MODULE test openprotocol messages
#include <boost/test/included/unit_test.hpp>

#include "../include/openprotocol.hpp"


BOOST_AUTO_TEST_CASE(test_padding)
{
  using open_protocol::api::padding;
  BOOST_TEST(padding("   ") == "000");
  BOOST_TEST(padding("   1") == "0001");
  BOOST_TEST(padding("1   1") == "10001");
  BOOST_TEST(padding("11111") == "11111");
}


BOOST_AUTO_TEST_CASE(test_parse_message_prefix_revision)
{
  using open_protocol::api::parse_message_prefix_revision;

  auto[len, mid, revision] = parse_message_prefix_revision("00200060001");
  BOOST_TEST(20 == len);
  BOOST_TEST(60 == mid);
  BOOST_TEST(1 == revision);
}




#include "test_message_hdr.cpp"
#include "test_message.cpp"
#include "test_mids.cpp"