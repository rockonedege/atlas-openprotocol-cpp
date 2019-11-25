

BOOST_AUTO_TEST_CASE(test_header)
{
  std::string s = "00570002            ";
  auto r = open_protocol::api::message_hdr::parse(s);
  BOOST_TEST(std::get<bool>(r));
}

