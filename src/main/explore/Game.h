//
// Created by haedhutner on 03.05.19.
//

#ifndef EXPLORATION_GAME_H
#define EXPLORATION_GAME_H

#include <GL/glew.h>

#include "GameLoop.h"

class Game {

    Game();

    Window window;

    GameLoop loop;

public:

    static Game& getInstance() {
        static Game instance;
        return instance;
    }

    GameLoop& getGameLoop() {
        return loop;
    }

    Window& getWindow() {
        return window;
    }

};

#endif //EXPLORATION_GAME_H
