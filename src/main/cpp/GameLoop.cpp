#include <explore/GameLoop.h>

void GameLoop::run() {
    delta = 0.0;

    double timeBefore = 0.0;
    double timeAfter = 0.0;

    running = true;

    glClearColor(0.4f, 0.6f, 0.8f, 1.0f);

    while(!window.isClosed()) {
        delta = timeAfter - timeBefore;

        timeBefore = window.getTime();

        loop(delta);

        timeAfter = window.getTime();

        window.swapBuffers();
        window.pollEvents();
    }

    window.terminate();

    running = false;
}

bool GameLoop::isRunning() {
    return running;
}
