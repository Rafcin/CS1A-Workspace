cmake_minimum_required(VERSION 3.14)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp CalcFunctions/area.cpp CalcFunctions/area.h CalcFunctions/circumference.cpp CalcFunctions/circumference.h CalcFunctions/dist.cpp CalcFunctions/dist.h CalcFunctions/rad.cpp CalcFunctions/rad.h CalcFunctions/CalcMain/calc_main.cpp)