cmake_minimum_required(VERSION 3.0)

project(05_06_sem)


if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 20)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Wall")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
add_executable(problem1_sum                problem1_sum/main.cpp)
add_executable(problem2_copy                problem2_copy/main.cpp)
add_executable(problem3_statictics                problem3_statictics/main.cpp)
add_executable(problem4_replace                problem4_replace/main.cpp)
add_executable(problem5_reverse                problem5_reverse/main.cpp)
add_executable(problem6_line                problem6_line/main.cpp)
add_executable(problem7_blank                problem7_blank/main.cpp)
add_executable(problem8_append                problem8_append/main.cpp)
add_executable(problem9_byte                problem9_byte/main.cpp)
add_executable(problem10_change                problem10_change/main.cpp)
add_executable(problem11_cipher                problem11_cipher/main.cpp)

