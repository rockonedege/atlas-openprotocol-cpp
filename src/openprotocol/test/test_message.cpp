BOOST_AUTO_TEST_CASE(test_Alarm_Mid0070AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "002000700021        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Alarm_Mid0071Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "005300710010        01E851021031042017-12-01:20:12:45";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Alarm_Mid0071Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "010600710020        01E1021021031042017-12-01:20:12:4505Alarm Text                                        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Alarm_Mid0072AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200072002         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Alarm_Mid0073AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200073002         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Alarm_Mid0074AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00240074001         E851";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Alarm_Mid0075AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200075001         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Alarm_Mid0076AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00560076            01102E851031041052017-01-25:10:20:20";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Alarm_Mid0077AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200077            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Alarm_Mid0078AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200078            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationController_Mid0270Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200270001         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationSelector_Mid0250Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200250   1        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationSelector_Mid0251Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00400251   1        01500210030101101110";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationSelector_Mid0252Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200252            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationSelector_Mid0253Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200253            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationSelector_Mid0254Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00340254            01110201221022";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationSelector_Mid0255Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00340255            01510221112022";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationToolLocationSystem_Mid0260Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200260            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationToolLocationSystem_Mid0261Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200261   1        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationToolLocationSystem_Mid0262Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "003002620011        013200078D";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationToolLocationSystem_Mid0263Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200263            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationToolLocationSystem_Mid0264Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200264            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ApplicationToolLocationSystem_Mid0265Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "003402650011        013200078D0202";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_AutomaticManualMode_Mid0400Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200400   1        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_AutomaticManualMode_Mid0401Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00210401   1        1";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_AutomaticManualMode_Mid0402Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200402            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_AutomaticManualMode_Mid0403Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200403            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_AutomaticManualMode_Mid0410Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200410            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_AutomaticManualMode_Mid0411Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00240411            0105";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Communication_Mid0001AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200001003         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Communication_Mid0002Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00570002001         010001020103Airbag1                  ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Communication_Mid0002Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00620002002         010001020103Airbag1                  04ACT";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Communication_Mid0002Revision3)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01250002003         010001020103Airbag1                  04ACT05OpenProtocolVersion06Version 19.0.0.0   07Version 01.0.0.0   ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Communication_Mid0002Revision4)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01630002004         010001020103Airbag1                  04ACT05OpenProtocolVersion06Version 19.0.0.0   07Version 01.0.0.0   08RBUType                 09Serial    ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Communication_Mid0002Revision5)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01730002005         010001020103Airbag1                  04ACT05OpenProtocolVersion06Version 19.0.0.0   07Version 01.0.0.0   08RBUType                 09Serial    1000211002";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Communication_Mid0002Revision6)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01790002006         010001020103Airbag1                  04ACT05OpenProtocolVersion06Version 19.0.0.0   07Version 01.0.0.0   08RBUType                 09Serial    1000211002120131";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Communication_Mid0003Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200003001         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Communication_Mid0004Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00260004            001802";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Communication_Mid0005Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00240005            0018";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Communication_Mid0006Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00430006            001800214lengthequals14";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Communication_Mid0008Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00430008            002200214lengthequals14";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0200Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00300200            1231231230";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0210Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200210   1        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0211Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00280211   1        10101011";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0212Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200212            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0213Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200213            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0214AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00220214002         10";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0215Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00920215001         010302001000210031004010012000300140010300110020003100410051006100700080";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0215Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00920215002         010302070300100021003100400051006000710407050011002000310041005100610070";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0216Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00230216   1        026";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0217Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00280217   1        01026021";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0218Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200218            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0219Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00230219            102";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0220Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00230220            120";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0221Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00280221            01120021";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0222Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200222            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0223Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00230223            066";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0224Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00230224            065";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_IOInterface_Mid0225Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00230225            055";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0030AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200030002         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0031Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00300031001         0401020304";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0031Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00640031002         00100001000200030004000500100015001100120019";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0032Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00220032001         04";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0032Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00240032002         0002";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0032Revision3)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00240032003         0003";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0033Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01150033001         010402My Job 4                 031045000057000406107108109110211112021315:011:1:02;11:015:1:02;";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0034AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200034001         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0035Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00630035001         0101020030040008050003062001-12-01:20:12:45";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0035Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00650035002         010001020030040008050003062001-12-01:20:12:45";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0036AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200036001         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0037AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200037001         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0038Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00220038001         01";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0039Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00220039001         01";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0039Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00240039002         0003";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0120Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200120   1        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0121Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200121   0        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0122Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200122   1        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0123Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200123   1        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0124Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200124   1        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0125Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200125            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0126Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200126            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0127Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200127001         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0128Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200128            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0129Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200129            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0129Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00290129002         010302123";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0130Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00210130            1";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0131Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200131            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0132Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200132            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Job_Mid0133Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200133            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_KeepAlive_Mid9999Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00209999            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MotorTuning_Mid0500Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200500            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MotorTuning_Mid0501Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00230501            011";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MotorTuning_Mid0502Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200502            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MotorTuning_Mid0503Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200503            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MotorTuning_Mid0504Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200504            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MultipleIdentifiers_Mid0150Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00470150001         My identifier less than 100";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MultipleIdentifiers_Mid0152Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01480152001         0110101Result part 1            0220003Result part 2            0330104Result part 3            0440105Result part 4            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MultipleIdentifiers_Mid0153Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200153            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MultipleIdentifiers_Mid0154Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200154            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MultipleIdentifiers_Mid0155Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200155            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MultipleIdentifiers_Mid0156Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200156            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MultipleIdentifiers_Mid0157Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200157            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MultiSpindle_Mid0090AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200090   1        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MultiSpindle_Mid0091AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00670091   1        01020265535032017-01-25:10:20:20041050101102031";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MultiSpindle_Mid0092AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200092            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_MultiSpindle_Mid0093AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200093            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_OpenProtocolCommandsDisabled_Mid0420Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200420   1        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_OpenProtocolCommandsDisabled_Mid0421Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00210421   1        1";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_OpenProtocolCommandsDisabled_Mid0422Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200422            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_OpenProtocolCommandsDisabled_Mid0423Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200423            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0010AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200010002         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0011Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00290011            002001002";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0012Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00230012            002";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0012Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00230012002         002";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0012Revision3)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00310012003         00212345678";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0012Revision4)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00310012004         00212345678";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0013Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01040013            0100102Airbag1                  0310403050012000600150007001400080036009007201000480";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0013Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01200013002         0100102Airbag1                  03104030500120006001500070014000800360090072010004801102021112017854";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0014Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200014            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0015Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00420015001         0022017-06-02:09:54:09";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0015Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01410015002         0100202Airbag parameter         032017-06-02:09:54:0904205040600510107010009080050050900001109999911003601200123413001006";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0016Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200016            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0017Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200017            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0018Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00230018001         022";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0019Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00250019            77750";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0020Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00230020            054";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0021Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200021   0        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0022Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00210022   1        1";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0023Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200023            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid0024Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200024            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_ParameterSet_Mid2504Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00232504001         010";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PLCUserData_Mid0240Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00470240            My identifier less than 100";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PLCUserData_Mid0241Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200241   1        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PLCUserData_Mid0242Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00430242   1        My identifier less than";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PLCUserData_Mid0243Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200243            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PLCUserData_Mid0244Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200244            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PLCUserData_Mid0245Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00460245            022My identifier less than";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PowerMACS_Mid0105Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "002001050011        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PowerMACS_Mid0105Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "003001050021        4294967295";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PowerMACS_Mid0105Revision3)
{
  using open_protocol::api::message::parse;
  
  std::string s = "003101050031        42949672951";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PowerMACS_Mid0105Revision4)
{
  using open_protocol::api::message::parse;
  
  std::string s = "003101050041        32949672951";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PowerMACS_Mid0106Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "05050106            010502010300000381270401050231                062017-05-25:09:51:38071108Ap.320Nm Diant.P11  091101119BM384069HB066171                       1204130114115116117329.9091835.854019360.00020310.000219999.002200.0000130214115116117328.7361836.102219360.00020310.000219999.002200.0000130314115116117356.04518763.97619370.00020304.000219999.002200.0000130414115116117355.40718380.87219370.00020304.000219999.002200.00002302Data No Station     I 100000027897Free No 1           I 100000000002";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PowerMACS_Mid0107Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "03510107001         010202020300000381270401052017-05-25:09:51:3806000107My first bolt       08Ap.320Nm Diant.P11  09310                                                  11E3211202Variable 1          I 1234567Variable 2          F 9999.9913002141Step Variable name 1I 765432101Step Variable name 2F 11.1234021501Special Value 1     S 13Got 13 digits01";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PowerMACS_Mid0108AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00210108002         1";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_PowerMACS_Mid0109AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200109002         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Statistic_Mid0300Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00290300            010020202";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Statistic_Mid0301Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01070301            010020205031234560465432105999999061111072222083333094444105555116666127777138888149999";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0060AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200060998         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0061Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "02310061001         010001020103airbag7                  04KPOL3456JKLO897          050006003070000080000090100111120008401300140014001200150007391600000170999918000001900000202001-06-02:09:54:09212001-05-29:12:34:33221230000345675";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0061Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "03850061002         010001020103airbag7                  04KPOL3456JKLO897          05000606003071208\0xaa\0x03\0x00\0x00\0x0009000010000011012013114015216117018219120\0xaa\0x03\0x0a\0xd1\0x00\0x00\0x00\0x00\0x00\0x002100084022001400230012002400073925000002609999270000028000002900000300999931050003200033050340453500001036000125370005483800001039999900405555004142949672954265500436053544ABCDEFG-123456452001-06-02:09:54:09462001-05-29:12:34:33";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0061Revision3)
{
  using open_protocol::api::message::parse;
  
  std::string s = "04190061003         010001020103airbag7                  04KPOL3456JKLO897          05000606003071208\0xaa\0x03\0x00\0x00\0x0009000010000011012013114015216117018219120\0xaa\0x03\0x0a\0xd1\0x00\0x00\0x00\0x00\0x00\0x002100084022001400230012002400073925000002609999270000028000002900000300999931050003200033050340453500001036000125370005483800001039999900405555004142949672954265500436053544ABCDEFG-123456452001-06-02:09:54:09462001-05-29:12:34:3347Test Parameter Set       4824905";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0061Revision4)
{
  using open_protocol::api::message::parse;
  
  std::string s = "05000061004         010001020103airbag7                  04KPOL3456JKLO897          05000606003071208\0xaa\0x03\0x00\0x00\0x0009000010000011012013114015216117018219120\0xaa\0x03\0x0a\0xd1\0x00\0x00\0x00\0x00\0x00\0x002100084022001400230012002400073925000002609999270000028000002900000300999931050003200033050340453500001036000125370005483800001039999900405555004142949672954265500436053544ABCDEFG-123456452001-06-02:09:54:09462001-05-29:12:34:3347Test Parameter Set       482490550Identifier result part 2 51Identifier result part 3 52Identifier result part 4 ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0061Revision5)
{
  using open_protocol::api::message::parse;
  
  std::string s = "05060061005         010001020103airbag7                  04KPOL3456JKLO897          05000606003071208\0xaa\0x03\0x00\0x00\0x0009000010000011012013114015216117018219120\0xaa\0x03\0x0a\0xd1\0x00\0x00\0x00\0x00\0x00\0x002100084022001400230012002400073925000002609999270000028000002900000300999931050003200033050340453500001036000125370005483800001039999900405555004142949672954265500436053544ABCDEFG-123456452001-06-02:09:54:09462001-05-29:12:34:3347Test Parameter Set       482490550Identifier result part 2 51Identifier result part 3 52Identifier result part 4 53E124";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0061Revision6)
{
  using open_protocol::api::message::parse;
  
  std::string s = "05260061006         010001020103airbag7                  04KPOL3456JKLO897          05000606003071208\0xaa\0x03\0x00\0x00\0x0009000010000011012013114015216117018219120\0xaa\0x03\0x0a\0xd1\0x00\0x00\0x00\0x00\0x00\0x002100084022001400230012002400073925000002609999270000028000002900000300999931050003200033050340453500001036000125370005483800001039999900405555004142949672954265500436053544ABCDEFG-123456452001-06-02:09:54:09462001-05-29:12:34:3347Test Parameter Set       482490550Identifier result part 2 51Identifier result part 3 52Identifier result part 4 53E1245400150055*\0x00\0x00\0x00\0x00\0x00\0x00\0x00\0x00\0x00";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0061Revision7)
{
  using open_protocol::api::message::parse;
  
  std::string s = "05440061007         010001020103airbag7                  04KPOL3456JKLO897          05000606003071208\0xaa\0x03\0x00\0x00\0x0009000010000011012013114015216117018219120\0xaa\0x03\0x0a\0xd1\0x00\0x00\0x00\0x00\0x00\0x002100084022001400230012002400073925000002609999270000028000002900000300999931050003200033050340453500001036000125370005483800001039999900405555004142949672954265500436053544ABCDEFG-123456452001-06-02:09:54:09462001-05-29:12:34:3347Test Parameter Set       482490550Identifier result part 2 51Identifier result part 3 52Identifier result part 4 53E1245400150055*\0x00\0x00\0x00\0x00\0x00\0x00\0x00\0x00\0x00560010000570999900";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0061Revision998)
{
  using open_protocol::api::message::parse;
  
  std::string s = "05580061998         010001020103airbag7                  04KPOL3456JKLO897          05000606003071208\0xaa\0x03\0x00\0x00\0x0009000010000011012013114015216117018219120\0xaa\0x03\0x0a\0xd1\0x00\0x00\0x00\0x00\0x00\0x002100084022001400230012002400073925000002609999270000028000002900000300999931050003200033050340453500001036000125370005483800001039999900405555004142949672954265500436053544ABCDEFG-123456452001-06-02:09:54:09462001-05-29:12:34:3347Test Parameter Set       482490550Identifier result part 2 51Identifier result part 3 52Identifier result part 4 53E1245400150055*\0x00\0x00\0x00\0x00\0x00\0x00\0x00\0x00\0x0056025702580200000010001200000080";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0061Revision999)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01210061999         KPOL3456JKLO897          02001002000192111000500003602001-06-02:09:54:092000-06-02:09:54:094294967295";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0062AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200062005         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0063AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200063002         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0064Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00300064001         0123456789";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0065Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01180065001         01012345678902AIRBAG                   03001040002050060070080014670900046102001-04-22:14:54:34112";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0065Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "02260065002         01012345678902AIRBAG                   03000104002051006\0xaa\0x03\0x00\0x00\0x0007000008000009010011112013214115016217118\0xaa\0x03\0x0a\0xd1\0x00\0x00\0x00\0x00\0x00\0x0019001000200036021002502200223000215240010252500012266553527ABCDEFG-123   282019-01-05:09:00:05";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0065Revision3)
{
  using open_protocol::api::message::parse;
  
  std::string s = "02330065003         01012345678902AIRBAG                   03000104002051006\0xaa\0x03\0x00\0x00\0x0007000008000009010011112013214115016217118\0xaa\0x03\0x0a\0xd1\0x00\0x00\0x00\0x00\0x00\0x0019001000200036021002502200223000215240010252500012266553527ABCDEFG-123   282019-01-05:09:00:052973008";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0065Revision4)
{
  using open_protocol::api::message::parse;
  
  std::string s = "03140065004         01012345678902AIRBAG                   03000104002051006\0xaa\0x03\0x00\0x00\0x0007000008000009010011112013214115016217118\0xaa\0x03\0x0a\0xd1\0x00\0x00\0x00\0x00\0x00\0x0019001000200036021002502200223000215240010252500012266553527ABCDEFG-123   282019-01-05:09:00:05297300831Identifier result part 2 32Identifier result part 3 33Identifier result part 4 ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0065Revision5)
{
  using open_protocol::api::message::parse;
  
  std::string s = "03200065005         01012345678902AIRBAG                   03000104002051006\0xaa\0x03\0x00\0x00\0x0007000008000009010011112013214115016217118\0xaa\0x03\0x0a\0xd1\0x00\0x00\0x00\0x00\0x00\0x0019001000200036021002502200223000215240010252500012266553527ABCDEFG-123   282019-01-05:09:00:05297300831Identifier result part 2 32Identifier result part 3 33Identifier result part 4 34E124";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tightening_Mid0065Revision6)
{
  using open_protocol::api::message::parse;
  
  std::string s = "03400065006         01012345678902AIRBAG                   03000104002051006\0xaa\0x03\0x00\0x00\0x0007000008000009010011112013214115016217118\0xaa\0x03\0x0a\0xd1\0x00\0x00\0x00\0x00\0x00\0x0019001000200036021002502200223000215240010252500012266553527ABCDEFG-123   282019-01-05:09:00:05297300831Identifier result part 2 32Identifier result part 3 33Identifier result part 4 34E1243500510036*\0x00\0x00\0x00\0x00\0x00\0x00\0x00\0x00\0x00";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Time_Mid0080AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200080            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Time_Mid0081Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00390081            2017-12-01:20:12:45";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Time_Mid0082Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00390082            2017-12-01:20:12:45";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0040AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200040004         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0041Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00810041001         01ABCDEFG-123456024294967295032017-12-01:20:12:4504GFEDCBA-10";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0041Revision2)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01560041002         01ABCDEFG-123456024294967295032017-12-01:20:12:4504GFEDCBA-1005002000062018-06-04:10:12:45074284967295081009551011111Version 1.0.0      ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0041Revision3)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01800041003         01ABCDEFG-123456024294967295032017-12-01:20:12:4504GFEDCBA-1005002000062018-06-04:10:12:45074284967295081009551011111Version 1.0.0      120006001300123014004000";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0041Revision4)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01840041004         01ABCDEFG-123456024294967295032017-12-01:20:12:4504GFEDCBA-1005002000062018-06-04:10:12:45074284967295081009551011111Version 1.0.0      1200060013001230140040001503";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0041Revision5)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01980041005         01ABCDEFG-123456024294967295032017-12-01:20:12:4504GFEDCBA-1005002000062018-06-04:10:12:45074284967295081009551011111Version 1.0.0      120006001300123014004000150316Tool Model  ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0042AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200042            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0043AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200043            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0044AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200044            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0045AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00310045            01402003000";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0046Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00240046001         0102";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0047Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00240047001         0103";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Tool_Mid0048Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00450048001         0107022017-12-01:20:12:45";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_UserInterface_Mid0110Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00240110001         TEST";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_UserInterface_Mid0111Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01370111001         01200502103Header Text              04Line 2 Text              05Line 3 Text              06Line 4 Text              ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_UserInterface_Mid0113Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200113            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Vin_Mid0050Revision1)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00350050001         VehicleIdNumber";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Vin_Mid0051AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "002000510010        ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Vin_Mid0052Revision1VehicleIdLengthHigher)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00470052001         VehicleIdNumberHigherThan25";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Vin_Mid0052Revision1VehicleIdLengthLower)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00450052001         VehicleIdNumber          ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Vin_Mid0052Revision2VehicleIdLengthHigher)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01300052002         01VehicleIdNumberHigherThan2502IdentifierPart2          03IdentifierPart3          04IdentifierPart4          ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Vin_Mid0052Revision2VehicleIdLengthLower)
{
  using open_protocol::api::message::parse;
  
  std::string s = "01280052002         01VehicleIdNumber          02IdentifierPart2          03IdentifierPart3          04IdentifierPart4          ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Vin_Mid0053AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200053001         ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

BOOST_AUTO_TEST_CASE(test_Vin_Mid0054AllRevisions)
{
  using open_protocol::api::message::parse;
  
  std::string s = "00200054            ";
  auto[is_ok, mid] = parse(s);
  BOOST_TEST(is_ok);
}

