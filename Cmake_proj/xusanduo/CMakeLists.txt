cmake_minimum_required(VERSION 3.0)

project(sbtj)

#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O2 -Wall")

set(CMAKE_BUILD_TYPE Debug)
include_directories(include)

add_executable(${PROJECT_NAME}
    main.cpp
    src/soldier.cpp
    src/Gun.cpp

    )