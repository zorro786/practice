cmake_minimum_required(VERSION 3.8)
add_library(factorial factorial.hh factorial.cc)
target_link_libraries(factorial)
target_include_directories(factorial PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})