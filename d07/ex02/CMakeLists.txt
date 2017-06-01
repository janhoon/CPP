cmake_minimum_required(VERSION 3.7)
project(ex2)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

set(SOURCE_FILES main.cpp Array.hpp)
add_executable(ex2 ${SOURCE_FILES})