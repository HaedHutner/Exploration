#include <explore/Game.h>

Game::Game() :
    window("Exploration", 800, 600),
    loop(window, [](double delta){
        glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
    })
{}

Game::~Game() {

}
