cmake_minimum_required(VERSION 3.23)
project(homework C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(1_types_io)
add_subdirectory(2_if_for_array)
add_subdirectory(3_for_a_while)
add_subdirectory(4_loops)
add_subdirectory(5_function)
add_subdirectory(6-recursion)
add_subdirectory(7-data-types)
add_subdirectory(8-pointer)
add_subdirectory(9-more-pointers)
add_subdirectory(10-struct_11-linkedlist)

add_subdirectory(jj)

add_subdirectory(sort)

add_executable(test test.c)
