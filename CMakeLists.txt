#CMake Entry Point
cmake_minimum_required(VERSION 2.6)
project(notepad)
set(EXE notepad-binary)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
subdirs(MainProject)
