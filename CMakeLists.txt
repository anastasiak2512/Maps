cmake_minimum_required(VERSION 3.4)
project(Maps)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Distance.cpp Distance.h House.cpp House.h)
add_executable(Maps ${SOURCE_FILES})