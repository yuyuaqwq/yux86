cmake_minimum_required(VERSION 3.10) 

project(yux86 VERSION 0.0.1) 

set(SRC_LIST src/cpu/cpu.c src/memory/meomry.c src/test.cpp)

include_directories(include)

add_executable(${PROJECT_NAME} ${SRC_LIST}) 