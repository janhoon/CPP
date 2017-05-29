cmake_minimum_required(VERSION 3.7)
project(d05)

set(CMAKE_CXX_STANDARD 98)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror")

set(SOURCE_FILES main.cpp Bureaucrat.cpp Bureaucrat.hpp Form.cpp Form.hpp)
add_executable(d05 ${SOURCE_FILES})