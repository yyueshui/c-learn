cmake_minimum_required(VERSION 3.7)
project(c)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c headers/hotal.h headers/hotal.c)
add_executable(c ${SOURCE_FILES})