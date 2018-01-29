cmake_minimum_required(VERSION 3.6)
project(py)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp p1.cpp p2.cpp p3.cpp)
add_executable(py ${SOURCE_FILES})
add_executable(p1 p1.cpp)
add_executable(p2 p2.cpp)
add_executable(p3 p3.cpp)