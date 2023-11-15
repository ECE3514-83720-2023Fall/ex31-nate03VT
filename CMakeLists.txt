cmake_minimum_required(VERSION 3.9...3.19)
project(Ex31 CXX)

# require a C++11 compiler for all targets
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# build tests
add_executable(unit_tests catch.hpp test_makeheap.cpp  heap.cpp)
add_executable(instructor_tests catch.hpp instructor_tests.cpp  heap.cpp)



