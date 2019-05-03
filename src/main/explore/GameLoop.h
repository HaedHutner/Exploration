#include <utility>

#ifndef EXPLORATION_GAMELOOP_H
#define EXPLORATION_GAMELOOP_H

#include <functional>
#include "Window.h"

class GameLoop {

    bool running;

    double delta;

    std::function<void(double)> loop;

    Window& window;

public:

    GameLoop(Window &window, std::function<void(double)> loop) : loop(std::move(loop)), window(window) {}

    bool isRunning();

    void run();

    ~GameLoop() = default;
};

#endif //EXPLORATION_GAMELOOP_H
