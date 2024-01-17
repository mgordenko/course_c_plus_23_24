cmake_minimum_required(VERSION 3.0)

project(Workshops3_4 CXX)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 14)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Wall")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
add_executable(problem1_hello                problem1_hello/main.cpp)
add_executable(problem2_len_of_cstr          problem2_len_of_cstr/main.cpp)
add_executable(problem3_getline              problem3_getline/main.cpp)
add_executable(problem4_str_funcs            problem4_str_funcs/main.cpp)
add_executable(problem5_print_ascii          problem5_print_ascii/main.cpp)
add_executable(problem6_str_indices          problem6_str_indices/main.cpp)
add_executable(problem7_mult_table_2         problem7_mult_table_2/main.cpp)
add_executable(problem8_enh_mult_table_2     problem8_enh_mult_table_2/main.cpp)
