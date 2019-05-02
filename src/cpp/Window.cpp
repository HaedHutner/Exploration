#include <Window.h>

bool Window::glfwInitialized = false;

Window::Window(
        const std::string &title,
        int width,
        int height,
        GLFWmonitor *monitor,
        bool resizeable,
        bool decorated,
        bool fullscreen
) {

    if (!glfwInitialized) {
        if (!glfwInit()) {
            handleError();
            fprintf(stderr, "GLFW has failed to initialize! Aborting...");
            exit(EXIT_FAILURE);
        } else {
            glfwInitialized = true;
        }
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    glfwWindowHint(GLFW_RESIZABLE, resizeable);
    glfwWindowHint(GLFW_DECORATED, decorated);
    glfwWindowHint(GLFW_MAXIMIZED, fullscreen);

    window = glfwCreateWindow(width, height, title.c_str(), monitor, NULL);

    if (!window) {
        glfwTerminate();

        handleError();
        fprintf(stderr, "GLFW window could not be created! Aborting...");
        exit(EXIT_FAILURE);
    }

    glewExperimental = true;
    glewInit();

    glfwMakeContextCurrent(window);
}

int Window::getAttribute(int attribute) {
    return glfwGetWindowAttrib(window, attribute);
}

void Window::setAttribute(int attribute, int value) {
    glfwSetWindowAttrib(window, attribute, value);
}

void Window::handleError() {
    const char* error;
    int code = glfwGetError(&error);

    if (code != GLFW_NO_ERROR) {
        fprintf(stderr, "GLFW Error: %s", error);
    }
}

Window::~Window() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

void Window::setTitle(const char *string) {
    glfwSetWindowTitle(window, string);
}

void Window::setSize(int x, int y) {
    glfwSetWindowSize(window, x, y);
}

