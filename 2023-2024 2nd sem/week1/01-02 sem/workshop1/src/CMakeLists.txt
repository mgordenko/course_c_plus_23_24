cmake_minimum_required(VERSION 3.0)

project(Workshop1 CXX)

if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Debug)
endif(NOT CMAKE_BUILD_TYPE)

set(CMAKE_CXX_STANDARD 14)

# the following options prevent compiler-optimization issues that are unwanted in an edu process
# set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -Werror=return-type")
# set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")

#### the list of targets ####
# the target ex1 is ready to build
add_executable(ex1 ex1/main.cpp)

# the following target must be properly prepared before uncomment the command:
# add_executable(ex2 ex2/main.cpp ex2/foo.cpp ex2/foo.h)
