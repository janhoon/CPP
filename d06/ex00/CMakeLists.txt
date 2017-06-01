cmake_minimum_required(VERSION 3.7)
project(ex00)

set(CMAKE_CXX_STANDARD 98)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

set(SOURCE_FILES main.cpp)
add_executable(ex00 ${SOURCE_FILES})