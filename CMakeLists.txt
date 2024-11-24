cmake_minimum_required(VERSION 3.28)
project(Simultion)

set(CMAKE_CXX_STANDARD 17)

add_executable(Simultion main.cpp
        Human.h
        Game_Rule.h
        Game_Rule.cpp)
