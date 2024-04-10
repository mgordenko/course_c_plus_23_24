cmake_minimum_required(VERSION 3.0)

project(sem_23)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 20)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Wall")
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
add_executable(ex1
    ex1/main.cpp
)
add_executable(ex2
        ex2/main.cpp
        )
add_executable(ex3
        ex3/main.cpp
        )
add_executable(ex4
        ex4/main.cpp
        )
add_executable(ex5
        ex5/main.cpp
        )
