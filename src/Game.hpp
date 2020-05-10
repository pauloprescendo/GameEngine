#ifndef Game_hpp
#define Game_hpp

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Window.hpp"
#include "WorkingDirectory.hpp"

class Game {
    public:
        Game();
        void Update();
        void LateUpdate();
        void Draw();
        bool IsRunning() const;
        void CalculateDeltaTime();
    private:
        Window window;
        WorkingDirectory workingDir;
        sf::Texture vikingTexture;
        sf::Sprite vikingSprite;
        sf::Clock clock;
        float deltaTime;
};

#endif
