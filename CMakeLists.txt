cmake_minimum_required(VERSION 3.14)
project(Exploration)

add_definitions("-std=c++14")

include(build/conanbuildinfo.cmake)

conan_basic_setup()

include_directories(${CMAKE_SOURCE_DIR}/src/main)
include_directories(${CMAKE_SOURCE_DIR}/src/test)

add_executable(Exploration
        src/main/cpp/Main.cpp
        src/main/explore/Window.h
        src/main/cpp/Window.cpp
        src/main/explore/GameLoop.h
        src/main/explore/Game.h
        src/main/cpp/Game.cpp
        src/main/cpp/GameLoop.cpp)

target_link_libraries(Exploration ${CONAN_LIBS})