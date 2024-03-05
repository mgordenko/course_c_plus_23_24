cmake_minimum_required(VERSION 3.0)

project(sem_20 CXX)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 14)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Werror=return-type")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
add_executable(problem1_classes   
    problem1_classes/main.cpp
    problem1_classes/polarcoordinate.cpp
    problem1_classes/polarcoordinate.h)
#add_executable(problem2_static  problem2_static/main.cpp)
