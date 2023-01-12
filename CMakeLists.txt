cmake_minimum_required(VERSION 3.23)
project(etc_lang)

set(CMAKE_CXX_STANDARD 11)

add_executable(etc_lang shell.cpp core/interpreter.h)
