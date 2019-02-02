cmake_minimum_required(VERSION 3.10)
project(node_platform_folders)

set(CMAKE_CXX_STANDARD 14)

include_directories(. /usr/include/node/)

add_executable(node_platform_folders
        binding.cc
        platform_folders.cpp
        platform_folders.h)
