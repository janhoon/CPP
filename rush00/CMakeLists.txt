cmake_minimum_required(VERSION 3.7)
project(rush00)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp GameEvent.cpp GameEvent.hpp Ships.cpp Ships.hpp Ship.cpp Ship.hpp)
add_executable(rush00 ${SOURCE_FILES})