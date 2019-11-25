# This script is tested with vcpkg.
## For Linux
### cmake ../src/ -G  "Unix Makefiles" -DCMAKE_TOOLCHAIN_FILE=/home/ttan/repo/public/vcpkg/scripts/buildsystems/vcpkg.cmake
### cmake --build . --config Release 
## For Windows
### cmake ../src/ -G  "Visual Studio 16 2019" -A Win64 -DCMAKE_TOOLCHAIN_FILE=F:/vcpkg/scripts/buildsystems/vcpkg.cmake  -DVCPKG_TARGET_TRIPLET=x64-windows  // dynamic
### cmake ../src/ -G  "Visual Studio 16 2019" -A Win64 -DCMAKE_TOOLCHAIN_FILE=F:/vcpkg/scripts/buildsystems/vcpkg.cmake  -DVCPKG_TARGET_TRIPLET=x64-windows-static  // static
### cmake --build . --config Release --target install 

cmake_minimum_required(VERSION 3.13.0)

project(nutrunners)

# Configuring
set(LOCAL_CMAKE_SCRIPTS ${CMAKE_HOME_DIRECTORY}/cmake)
include (${LOCAL_CMAKE_SCRIPTS}/my_routine.cmake)   

system_info()

include_boost()
find_package(pybind11 CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)

macro(run_demo main)
   add_executable(${main} ./reference/${main}.cpp)
   target_include_directories(${main} PRIVATE ${Boost_INCLUDE_DIRS})
   target_link_libraries(${main} PRIVATE logging ${Boost_LIBRARIES} ${Boost_LIBRARIES} fmt::fmt  -static)
endmacro()

macro(run_demos)
   # parsing
   run_demo(simple_parser)
   run_demo(struct_parser)
   run_demo(x3-demo)
   run_demo(parse_single_message)

   # networking
   run_demo(timer)
   run_demo(echoserver)
   run_demo(client)
endmacro()

enable_testing()
    
if(Boost_FOUND)

   run_demos()
   create_lib_and_unitest(logging fmt::fmt )
   create_lib_and_unitest(openprotocol logging)
   target_compile_definitions(openprotocol PRIVATE BOOST_MPL_CFG_NO_PREPROCESSED_HEADERS BOOST_MPL_LIMIT_VECTOR_SIZE=50)
   message("--   Setting BOOST_MPL_LIMIT_VECTOR_SIZE=50 for Boost.Spirit::X3")



   add_executable(ford ./app/cpp/app.cpp)
   target_include_directories(ford PRIVATE ${Boost_INCLUDE_DIRS})
   target_link_libraries(ford PRIVATE 
               logging 
               openprotocol
               ${Boost_LIBRARIES} ${Boost_LIBRARIES} 
               fmt::fmt  
               -static)    

endif()
