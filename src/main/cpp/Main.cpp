#include <iostream>

#include "explore/Game.h"

int main() {
    Game& game = Game::getInstance();
    game.getGameLoop().run();
}