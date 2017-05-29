cmake_minimum_required(VERSION 3.6)
project(ex03)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp NinjaTrap.cpp NinjaTrap.hpp)
add_executable(ex03 ${SOURCE_FILES})