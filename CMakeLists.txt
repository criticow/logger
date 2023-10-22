cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 20)
project(logger_sandbox)

add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include)
