#ifndef EXPLORATION_WINDOW_H
#define EXPLORATION_WINDOW_H

#include <string>

#include <GLFW/glfw3.h>
#include <GL/glew.h>

struct Window {

private:

    static bool glfwInitialized;

    GLFWwindow *window;

    void handleError();

public:

    Window(
            const std::string &title = "Default",
            int width = 800,
            int height = 600,
            GLFWmonitor *monitor = NULL,
            bool resizeable = false,
            bool decorated = true,
            bool fullscreen = false
    );

    int getAttribute(int attribute);

    void setAttribute(int attribute, int value);

    ~Window();

    void setTitle(const char *string);

    void setSize(int x, int y);
};

#endif //EXPLORATION_WINDOW_H
