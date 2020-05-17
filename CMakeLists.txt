cmake_minimum_required(VERSION 3.15)
project(mysharedlib)

set(CMAKE_CXX_STANDARD 17)

add_library(mysharedlib SHARED library.cpp library.h Person.h Person.cpp Array.cpp Array.h)

