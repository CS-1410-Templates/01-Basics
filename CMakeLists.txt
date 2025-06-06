cmake_minimum_required(VERSION 3.27)
project(01Basics)

set(CMAKE_CXX_STANDARD 17)

add_executable(01Basics main.cpp
        utilities.cpp
        utilities.h
)