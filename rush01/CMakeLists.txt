cmake_minimum_required(VERSION 3.7)
project(rush01)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -Wextra -lncurses")

set(SOURCE_FILES main.cpp iMonitorModule.cpp iMonitorModule.hpp iMonitorDisplay.cpp iMonitorDisplay.hpp Time.cpp Time.hpp)
add_executable(rush01 ${SOURCE_FILES})