cmake_minimum_required(VERSION 3.10)
project(node_platform_folders)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(node_platform_folders
        src/binding.cc
        src/platform_folders.cpp
        src/platform_folders.h)
