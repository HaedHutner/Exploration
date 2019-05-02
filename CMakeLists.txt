cmake_minimum_required(VERSION 3.14)
project(Exploration)

add_definitions("-std=c++14")

include(build/conanbuildinfo.cmake)

conan_basic_setup()

include_directories(${CMAKE_SOURCE_DIR}/src/header)

add_executable(Exploration
        src/cpp/Main.cpp
        src/header/Window.h
        src/cpp/Window.cpp)

target_link_libraries(Exploration ${CONAN_LIBS})