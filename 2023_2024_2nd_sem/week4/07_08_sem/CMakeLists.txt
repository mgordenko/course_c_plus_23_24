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
add_executable(problem1_circleArea                problem1_circleArea/main.cpp)
add_executable(problem2_increment                problem2_increment/main.cpp)
add_executable(problem3_recursive                problem3_recursive/main.cpp)
add_executable(problem4_print                problem4_print/main.cpp)
add_executable(problem5_transformArray                problem5_transformArray/main.cpp)
add_executable(problem6_executeCallback                problem6_executeCallback/main.cpp)
add_executable(problem7_sum                problem7_sum/main.cpp)
add_executable(problem8_template                problem8_template/main.cpp)
add_executable(problem9_filter                problem9_filter/main.cpp)

