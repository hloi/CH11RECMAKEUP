cmake_minimum_required(VERSION 3.26)
project(CH11RECMAKEUP)

set(CMAKE_CXX_STANDARD 17)

add_executable(CH11RECMAKEUP main.cpp
        Item.cpp
        Item.h
        Shopping.cpp
        Shopping.h)
