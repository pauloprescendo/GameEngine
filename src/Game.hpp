#ifndef Game_hpp
#define Game_hpp

#include <iostream>
#include <SFML/Graphics.hpp>

#include "Window.hpp"
#include "WorkingDirectory.hpp"
#include "Input.hpp"

class Game {
    public:
        Game();
        void Update();
        void LateUpdate();
        void Draw();
        bool IsRunning() const;
        void CalculateDeltaTime();
        void CaptureInput();
    private:
        Window window;
        WorkingDirectory workingDir;
        sf::Texture vikingTexture;
        sf::Sprite vikingSprite;
        sf::Clock clock;
        float deltaTime;
        Input input;
};

#endif
