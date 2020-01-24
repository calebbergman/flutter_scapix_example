cmake_minimum_required(VERSION 3.14)

set(PROJECT_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
get_filename_component(PROJECT_ROOT ${PROJECT_ROOT} ABSOLUTE)

set(SCAPIX_ROOT ${PROJECT_ROOT}/scapix CACHE STRING "scapix lib path")
get_filename_component(SCAPIX_ROOT ${SCAPIX_ROOT} ABSOLUTE)

if("$ENV{HUNTER_ROOT}" STREQUAL "")
    set(HUNTER_ROOT "${CMAKE_CURRENT_SOURCE_DIR}/cmake_build/.hunter")
endif()

include("${SCAPIX_ROOT}/project/cmake/modules/HunterGate.cmake")

HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.23.214.tar.gz"
    SHA1 "e14bc153a7f16d6a5eeec845fb0283c8fad8c358"
)

project(ScapixTut VERSION 1.0)

add_library(
  personlib
  SHARED
  ./native_libs/person/person.hpp
  ./native_libs/person/person.cpp
)

set_target_properties(
  personlib
  PROPERTIES
  CXX_STANDARD 17
  CXX_STANDARD_REQUIRED ON
  CXX_EXTENSIONS ON # not required, but speeds up compilation of SCAPIX_META_STRING with clang and gcc
)

target_include_directories(
  personlib
  PRIVATE
  ./native_libs/person
)

target_link_libraries(personlib)

include(./scapix/project/cmake/modules/scapix.cmake)
scapix_bridge_headers(
  personlib
  "com.example.person"
  "${CMAKE_CURRENT_SOURCE_DIR}/native_libs/person/person.hpp"
)
