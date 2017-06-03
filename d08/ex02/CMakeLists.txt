cmake_minimum_required(VERSION 3.7)
project(ex02)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

set(SOURCE_FILES main.cpp span.cpp span.hpp)
add_executable(ex02 ${SOURCE_FILES})