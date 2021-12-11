cmake_minimum_required(VERSION 3.20)
project(HEIGVD_PRG1_VECTEURMATRICE)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

add_executable(HEIGVD_PRG1_VECTEURMATRICE main.cpp calculMatriciel.cpp calculMatriciel.h)
