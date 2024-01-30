cmake_minimum_required(VERSION 3.0)

project(03_lec)


if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 20)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Wall")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
add_executable(problem1               problem1/main.cpp)
add_executable(problem2               problem2/main.cpp)
add_executable(problem3               problem3/main.cpp)
add_executable(problem4               problem4/main.cpp)
add_executable(problem5               problem5/main.cpp)
add_executable(problem6               problem6/main.cpp)
add_executable(problem7               problem7/main.cpp)
add_executable(problem8               problem8/main.cpp)
add_executable(problem9               problem9/main.cpp)
add_executable(problem10               problem10/main.cpp)
add_executable(problem11               problem11/main.cpp)
add_executable(problem12               problem12/main.cpp)