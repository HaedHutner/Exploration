#ifndef EXPLORATION_WINDOW_H
#define EXPLORATION_WINDOW_H

#include <string>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

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

    void setTitle(const char *string);

    void setSize(int x, int y);

    void setResizeCallback(void (*resizeCallback)(GLFWwindow *, int, int));

    const glm::ivec2 getSize() const;

    const glm::ivec4 getWindowFrameSize();

    void setFramebufferResizeCallback(void (*callback)(GLFWwindow *, int, int));

    const glm::ivec2 getFramebufferSize();

    void getContentScale();

    void setContentRescaleCallback(void (*pFunction)(GLFWwindow *, float, float));

    void setSizeLimits(int i, int i1, int i2, int i3);

    void getSizeLimits();

    void setAspectRatio(int i, int i1);

    void setPosition(int i, int i1);

    void setRepositionCallback(void (*pFunction)(GLFWwindow *, int, int));

    void getPosition();

    void setIcon(GLFWimage *pWimage);

    GLFWmonitor *getMonitor();

    GLFWvidmode *getVideoMode();

    void setMonitor(GLFWmonitor *pWmonitor, int i, int i1, int i2, int i3, int i4);

    void minimize();

    void setMinimizationCallback(void (*pFunction)(GLFWwindow *, int));

    void maximize();

    void setMaximizationCallback(void (*pFunction)(GLFWwindow *, int));

    void setMaximized(bool b);

    void setMinimized(bool b);

    void restore();

    void show();

    void hide();

    void setVisible(bool b);

    void focus();

    void setFocusedCallback(void (*pFunction)(GLFWwindow *, int));

    void setFocused(bool b);

    void setOpacity(float d);

    void getOpacity();

    bool isClosed();

    void setCloseCallback(void (*pFunction)(GLFWwindow *));

    double getTime();

    void swapBuffers();

    void pollEvents();

    void terminate();

    ~Window();
};

#endif //EXPLORATION_WINDOW_H
