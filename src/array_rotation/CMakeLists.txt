cmake_minimum_required(VERSION 3.8)
add_library(array_rotation array_rotation.hh array_rotation.cc)
target_link_libraries(array_rotation)
target_include_directories(array_rotation PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})