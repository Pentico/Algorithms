cmake_minimum_required(VERSION 3.6)
project(Algorithms)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp heroes.cpp DataStructures/Stack/Stack.cpp DataStructures/Stack/Stack.h)
add_executable(Algorithms ${SOURCE_FILES})