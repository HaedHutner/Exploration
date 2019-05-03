#include <explore/Window.h>

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

void Window::setResizeCallback(void (*resizeCallback)(GLFWwindow *, int, int)) {
    glfwSetWindowSizeCallback(window, resizeCallback);
}

const glm::ivec2 Window::getSize() const {
    glm::ivec2 size = {};
    glfwGetWindowSize(window, &size.x, &size.y);
    return size;
}

const glm::ivec4 Window::getWindowFrameSize() {
    glm::ivec4 frameSize = {};
    glfwGetWindowFrameSize(window, &frameSize.w, &frameSize.x, &frameSize.y, &frameSize.z);
    return frameSize;
}

void Window::setFramebufferResizeCallback(void (*callback)(GLFWwindow *, int, int)) {
    glfwSetFramebufferSizeCallback(window, callback);
}

const glm::ivec2 Window::getFramebufferSize() {
    glm::ivec2 framebuffer;
    glfwGetFramebufferSize(window, &framebuffer.x, &framebuffer.y);
    return framebuffer;
}

void Window::getContentScale() {

}

void Window::setContentRescaleCallback(void (*pFunction)(GLFWwindow *, float, float)) {

}

void Window::setSizeLimits(int i, int i1, int i2, int i3) {

}

void Window::getSizeLimits() {

}

void Window::setAspectRatio(int i, int i1) {

}

void Window::setPosition(int i, int i1) {

}

void Window::setRepositionCallback(void (*pFunction)(GLFWwindow *, int, int)) {

}

void Window::getPosition() {

}

void Window::setIcon(GLFWimage *pWimage) {

}

GLFWmonitor *Window::getMonitor() {
    return nullptr;
}

GLFWvidmode *Window::getVideoMode() {
    return nullptr;
}

void Window::setMonitor(GLFWmonitor *pWmonitor, int i, int i1, int i2, int i3, int i4) {

}

void Window::minimize() {

}

void Window::setMinimizationCallback(void (*pFunction)(GLFWwindow *, int)) {

}

void Window::maximize() {

}

void Window::setMaximizationCallback(void (*pFunction)(GLFWwindow *, int)) {

}

void Window::setMaximized(bool b) {

}

void Window::setMinimized(bool b) {

}

void Window::restore() {

}

void Window::show() {

}

void Window::hide() {

}

void Window::setVisible(bool b) {

}

void Window::focus() {

}

void Window::setFocusedCallback(void (*pFunction)(GLFWwindow *, int)) {

}

void Window::setFocused(bool b) {

}

void Window::setOpacity(float d) {

}

void Window::getOpacity() {

}

bool Window::isClosed() {
    return glfwWindowShouldClose(window);
}

void Window::setCloseCallback(void (*pFunction)(GLFWwindow *)) {

}

double Window::getTime() {
    return glfwGetTime();
}

void Window::swapBuffers() {
    glfwSwapBuffers(window);
}

void Window::pollEvents() {
    glfwPollEvents();
}

void Window::terminate() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

