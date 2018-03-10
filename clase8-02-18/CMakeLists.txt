cmake_minimum_required(VERSION 2.8.9)
SET(CMAKE_CXX_FLAGS "-std=c++0x")
project(clase8-02-18)

include_directories(include)

set(SOURCES src/Main.cpp)
add_executable(Clase ${SOURCES})
