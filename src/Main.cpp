#include <iostream>
#include "Game.hpp"

using namespace std;

int main() {

    Game game;

    while (game.IsRunning()) {
        game.Update();
        game.LateUpdate();
        game.Draw();
    }

    return 0;
}
