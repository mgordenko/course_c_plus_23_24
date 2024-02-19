cmake_minimum_required(VERSION 3.0)

project(tetsi CXX)


if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 20)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Wall")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
add_executable(problem1_invert_bit      problem1_invert_bit/main.cpp)
add_executable(problem2_count_bits      problem2_count_bits/main.cpp)
add_executable(problem3_invert_bits     problem3_invert_bits/main.cpp)
add_executable(problem4_bit_mask        problem4_bit_mask/main.cpp)
add_executable(problem5_bit_mask2       problem5_bit_mask2/main.cpp)
add_executable(problem6_sum             problem6_sum/main.cpp)
add_executable(problem7_swap            problem7_swap/main.cpp)
add_executable(problem8_max_array       problem8_max_array/main.cpp)
add_executable(problem9_pointer_array   problem9_pointer_array/main.cpp)
add_executable(problem10_copy           problem10_copy/main.cpp)