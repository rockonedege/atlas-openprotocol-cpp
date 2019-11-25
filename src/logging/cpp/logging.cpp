#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/attributes.hpp>
#include <boost/log/expressions.hpp>

#include <boost/log/utility/setup/console.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>

#include <boost/log/sinks/text_file_backend.hpp>

#include <boost/log/sources/severity_logger.hpp>
#include <boost/log/sources/record_ostream.hpp>

#include <boost/log/attributes/current_thread_id.hpp>

#include <boost/log/support/date_time.hpp>
#include <boost/date_time/posix_time/posix_time_types.hpp>


// #include <boost/log/common.hpp>
// #include <boost/log/core.hpp>
// #include <boost/log/trivial.hpp>
// #include <boost/log/expressions.hpp>
// #include <boost/log/sinks/sync_frontend.hpp>
// #include <boost/log/sinks/text_ostream_backend.hpp>
// #include <boost/log/utility/setup/formatter_parser.hpp>
// #include <boost/log/sources/severity_feature.hpp>
// #include <boost/log/sources/record_ostream.hpp>


#include "../include/logging.hpp"

namespace tom
{
  void init_log()
  {
    namespace logging = boost::log;
    namespace expr = boost::log::expressions;
    namespace keywords = boost::log::keywords;
    // namespace sinks = boost::log::sinks;
    // namespace src = boost::log::sources;
    namespace attrs = boost::log::attributes;

    boost::log::register_simple_formatter_factory<logging::trivial::severity_level, char>("Severity");

    logging::add_common_attributes();
    logging::add_file_log(
        keywords::file_name = "out.log",
        keywords::format = "%Message%");
    logging::add_console_log(std::cout, keywords::format = "[%TimeStamp%][%Severity%][%ThreadID%]: %Message%");

    /* a more verbose alternative with lambda
    https://stackoverflow.com/questions/15853981/boost-log-2-0-empty-severity-level-in-logs/24221423#24221423

    keywords::format = (expr::stream
                        << '['
                        << expr::format_date_time<boost::posix_time::ptime>("TimeStamp", "%Y-%m-%d %H:%M:%S")
                        << "]["
                        //  << logging::trivial::severity
                        << expr::attr<logging::trivial::severity_level>("Severity")
                        << "]["
                        << expr::attr<attrs::current_thread_id::value_type>("ThreadID")
                        << "]: " << expr::smessage)
    */
  }

}