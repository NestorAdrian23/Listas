cmake_minimum_required(VERSION 2.8.9)
project(Listas)

include_directories(include)

set(SOURCES src/Nodo.cpp src/Listas.cpp src/main.cpp)

add_executable(Listas ${SOURCES})
