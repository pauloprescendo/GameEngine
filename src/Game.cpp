#include "Game.hpp"

Game::Game() : window("that game engine") {

}

void Game::Update() {
    window.Update();
}

void Game::LateUpdate() {}

void Game::Draw() {
    window.BeginDraw();
    // draw code here
    window.EndDraw();
}

bool Game::IsRunning() const {
    return window.IsOpen();
}
