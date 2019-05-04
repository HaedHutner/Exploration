cmake_minimum_required(VERSION 3.14)
project(Exploration)

add_definitions("-std=c++17")

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
        src/main/cpp/GameLoop.cpp
        src/main/explore/resource/ResourceCache.h
        src/main/explore/resource/Resource.h
        src/main/explore/resource/FileResource.h
        src/main/explore/resource/MemoryResource.h
        src/main/cpp/resource/ResourceCache.cpp
        src/main/cpp/resource/Resource.cpp
        src/main/cpp/resource/FileResource.cpp
        src/main/cpp/resource/MemoryResource.cpp
        src/main/explore/texture/Texture.h
        src/main/explore/3d/Mesh.h
        src/main/explore/3d/Model.h
        src/main/explore/3d/Camera.h
        src/main/explore/3d/Shader.h)

target_link_libraries(Exploration ${CONAN_LIBS})