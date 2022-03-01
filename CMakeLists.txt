cmake_minimum_required(VERSION 3.21)
project(cipher)

set(CMAKE_CXX_STANDARD 14)

include_directories(src)

add_executable(cipher
        src/main.cpp)
