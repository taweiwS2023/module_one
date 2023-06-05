cmake_minimum_required(VERSION 3.10)
project(module_one)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_library(module_one src/ModuleOne.cpp)

add_subdirectory(googletest)

enable_testing()
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(module_one_test test/ModuleOneTest.cpp)
target_link_libraries(module_one_test gtest gtest_main)
target_link_libraries(module_one_test module_one)
