#include <iostream>

#include "Window.h"

int main() {
    Window window("Exploration", 800, 600);

    window.setTitle("Exploration");

    window.setSize(800, 600);
    window.setResizeCallback([](GLFWwindow* window, int width, int height){

    });
    window.getSize();

    window.getWindowFrameSize();

    window.setFramebufferResizeCallback([](GLFWwindow* window, int width, int height){

    });
    window.getFramebufferSize();

    window.getContentScale();
    window.setContentRescaleCallback([](GLFWwindow* window, float xscale, float yscale){

    });

    window.setSizeLimits(200, 200, 400, 400);
    window.getSizeLimits();

    window.setAspectRatio(16, 9);

    window.setPosition(100, 100);
    window.setRepositionCallback([](GLFWwindow* window, int xpos, int ypos){

    });
    window.getPosition();

    GLFWimage* glfwImage = load_icon("test.png");
    window.setIcon(glfwImage);
    GLFWmonitor* monitor = window.getMonitor();
    GLFWvidmode* mode = window.getVideoMode();
    window.setMonitor(monitor, 0, 0, mode->width, mode->height, mode->refreshRate);

    window.minimize();
    window.setMinimizationCallback([](GLFWwindow* window, int minimized){

    });
    window.maximize();
    window.setMaximizationCallback([](GLFWwindow* window, int maximized){

    });
    window.setMaximized(true);
    window.setMinimized(false);
    window.restore();

    window.show();
    window.hide();
    window.setVisible(true);

    wiodow.focus();
    window.setFocusedCallback([](GLFWwindow* window, int focused){

    });
    window.setFocused(true);

    window.setOpacity(0.5f);
    window.getOpacity();

    window.setAttribute(GLFW_FOCUSED, GLFW_TRUE);
    window.getAttribute(GLFW_FOCUSED);

    window.setLoop([](){

    });

    window.isClosed();
    window.setCloseCallback([](GLFWwindow* glfwWindow){

    });

}