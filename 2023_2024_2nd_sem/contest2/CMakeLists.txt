cmake_minimum_required(VERSION 3.0)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 14)

add_executable(task1 task1/main.cpp)
add_executable(task2 task2/main.cpp)
add_executable(task3 task3/main.cpp)
add_executable(task4 task4/main.cpp)
add_executable(task5 task5/main.cpp)
add_executable(task6 task6/main.cpp)
