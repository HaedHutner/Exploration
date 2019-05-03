from conans import ConanFile, CMake

class Exploration(ConanFile):
    name = "Exploration"
    version = "1.0.0"
    source = "HaedHutner"
    channel = "stable"

    settings = "os", "compiler", "build_type", "arch"

    requires = (
        "glew/2.1.0@bincrafters/stable",
        "glm/0.9.9.4@g-truc/stable",
        "glfw/3.3@bincrafters/stable",
        "stb/20180214@conan/stable",
        "gtest/1.8.1@bincrafters/stable"
    )

    generators = "cmake"

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
        cmake.install()
