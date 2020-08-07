cmake_minimum_required(VERSION 3.16)
project(algorithm_code)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(./src/sort)
add_executable(algorithm_code main.cpp)