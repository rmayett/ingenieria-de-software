cmake_minimum_required(VERSION 2.8.9)
SET(CMAKE_CXX_FLAGS "-std=c++0x")
project(EsFns)


set(SOURCES EsFns.cpp)
add_executable(Clase ${SOURCES})
