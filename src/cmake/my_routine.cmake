
macro(system_info)
message("-- Environment Info")

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
  message("--   Target = 64 bits build")
else()
  message("--   Target = 32 bits build")
endif()
message("--   CMake binary dir = ${CMAKE_BINARY_DIR}")
message("--   System Name  - CMAKE_SYSTEM_NAME     = ${CMAKE_SYSTEM_NAME}")
message("--   Build type   - CMAKE_BUILD_TYPE      = ${CMAKE_BUILD_TYPE}")
message("--   Compiler ID  - CMAKE_CXX_COMPILER_ID = ${CMAKE_CXX_COMPILER_ID}")
message("--   Install path - CMAKE_INSTALL_PREFIX  = ${CMAKE_INSTALL_PREFIX} ")
message("--   Home path    - CMAKE_HOME_DIRECTORY  = ${CMAKE_HOME_DIRECTORY} ")


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)  

message("--   Using C++ standard ${CMAKE_CXX_STANDARD}")

endmacro(system_info)


macro(create_lib_and_unitest unit)
  # libfile: unit.cpp
  # testfile: test.cpp
  add_library(${unit} STATIC  ./${unit}/cpp/${unit}.cpp)
  target_include_directories(${unit} PRIVATE ${Boost_INCLUDE_DIRS})
  target_link_libraries(${unit} PRIVATE ${ARGN} ${Boost_LIBRARIES})
  
  #  test
  set(unit_test ${unit}_test)
  add_executable(${unit_test} ./${unit}/test/test.cpp)
  target_include_directories(${unit_test} PRIVATE ${Boost_INCLUDE_DIRS})
  target_link_libraries(${unit_test} PRIVATE ${unit} ${Boost_LIBRARIES}  ${CMAKE_THREAD_LIBS_INIT})
  add_test(NAME ${unit_test} COMMAND ${unit_test})
  add_custom_command(TARGET ${unit_test}
                      POST_BUILD
                      COMMAND ${unit_test} --log_level=message
                      WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
                      COMMENT "Running ${unit_test}" VERBATIM)    
endmacro()

macro(include_boost)


# boost, refer to FindBoost.cmake if in doubt
set(Boost_USE_STATIC_LIBS        ON)  # only find static libs
set(Boost_USE_DEBUG_LIBS         OFF) # ignore debug libs and
set(Boost_USE_RELEASE_LIBS       ON)  # only find release libs
set(Boost_USE_MULTITHREADED      ON)
set(Boost_USE_STATIC_RUNTIME     OFF)
find_package(Boost REQUIRED COMPONENTS 
                            date_time 
                            log_setup # must come before log, link order matters
                            log # must come before thread, link order matters
                            thread 
                            system 
                            filesystem 
                            timer # must come before chrono, link order matters
                            chrono 
                            program_options 
                            iostreams
                            ) 
if( WIN32 ) # true if windows (32 and 64 bit)
        add_compile_definitions( WIN32_LEAN_AND_MEAN) # requireed by Boost.ASIO &Boost.Test
        add_compile_definitions( _WIN32_WINNT=0x0A00) # windows 10, requireed by Boost.ASIO &Boost.Test
        message("--   Using Windows 10 SDKs for Boost.Asio")
endif()


endmacro(include_boost)
