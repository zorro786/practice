add_subdirectory(factorial)
add_subdirectory(hello_world)
add_executable(main main.cc)
target_link_libraries(main factorial hello)