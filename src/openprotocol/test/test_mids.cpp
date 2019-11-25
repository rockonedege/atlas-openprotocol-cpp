// BOOST_AUTO_TEST_CASE(test_tightening_Mid0060)
// {
//   using open_protocol::api::tightening::mid0060_rev998::parse;
//   using open_protocol::ast::tightening::mid0060_rev998;

//   std::string s = "00200060998         ";
//   // std::string s = "         ";
//   auto r = parse(s.substr(11));
//   BOOST_TEST(std::get<bool>(r));

//   auto mid = std::get<mid0060>(r);
//   BOOST_TEST(0 == mid.no_ack);
//   BOOST_TEST(std::string(8, '0') == mid.dont_care);
//   BOOST_TEST(8 == mid.dont_care.length());

// }

BOOST_AUTO_TEST_CASE(test_tightening_mid0060_rev998)
{
  using open_protocol::api::tightening::mid0060_rev998::parse;
  using open_protocol::ast::tightening::mid0060_rev998;

  std::string s = "00200060998         ";
  auto [is_ok, mid] = parse(s.substr(11));

  BOOST_TEST(is_ok);
  BOOST_TEST(60 == mid.mid);
  BOOST_TEST(998 == mid.revision);
  BOOST_TEST(0 == mid.no_ack);
  BOOST_TEST(std::string(8, '0') == mid.dont_care);
  BOOST_TEST(8 == mid.dont_care.length());
}

BOOST_AUTO_TEST_CASE(test_tightening_mid0060_rev1)
{
  using open_protocol::api::tightening::mid0060_rev1::parse;
  using open_protocol::ast::tightening::mid0060_rev1;

  std::string s = "00200060001         ";
  auto [is_ok, mid] = parse(s.substr(11));

  BOOST_TEST(is_ok);
  BOOST_TEST(60 == mid.mid);
  BOOST_TEST(1 == mid.revision);
  BOOST_TEST(0 == mid.no_ack);
  BOOST_TEST(std::string(8, '0') == mid.dont_care);
  BOOST_TEST(8 == mid.dont_care.length());
}

BOOST_AUTO_TEST_CASE(test_tightening_mid0061_data_rev1)
{
  using open_protocol::api::tightening::mid0061_data_rev1::parse;
  using open_protocol::ast::tightening::mid0061_data_rev1;

  std::string s = "02310061001         010001020103airbag7                  04KPOL3456JKLO897          050006003070000080000090100111120008401300140014001200150007391600000170999918000001900000202001-06-02:09:54:09212001-05-29:12:34:33221230000345675";

  auto [is_ok, msg] = parse(s.substr(20));

  BOOST_TEST(is_ok);
  BOOST_TEST(61 == msg.mid);
  BOOST_TEST(1 == msg.revision);
  // BOOST_TEST(0 == mid.no_ack);
  // BOOST_TEST(std::string(8, '0') == mid.dont_care);
  // BOOST_TEST(8 == mid.dont_care.length());
}
