cmake_minimum_required(VERSION 3.8)
add_library(hello hello.cc hello.hh)
target_link_libraries(hello)
target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})