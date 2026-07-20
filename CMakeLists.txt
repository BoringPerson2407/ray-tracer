cmake_minimum_required(VERSION 3.20)

project(ray_tracer)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ray_tracer
    src/main.cpp
)