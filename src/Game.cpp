#include "Game.hpp"

Game::Game() : window("that game engine") {

    std::shared_ptr<SceneSplashScreen> splashScreen =
        std::make_shared<SceneSplashScreen>(workingDir,
                                            sceneStateMachine,
                                            window);

    std::shared_ptr<SceneGame> gameScene =
        std::make_shared<SceneGame>(workingDir);

    unsigned int splashScreenID = sceneStateMachine.Add(splashScreen);
    unsigned int gameSceneID = sceneStateMachine.Add(gameScene);

    splashScreen->SetSwitchToScene(gameSceneID);

    sceneStateMachine.SwitchTo(splashScreenID);

    deltaTime = clock.restart().asSeconds();
}

void Game::Update() {
    window.Update();

    const sf::Vector2f spritePos = vikingSprite.getPosition();
    const int moveSpeed = 100;

    int xMove = 0;
    if (input.IsKeyPressed(Input::Key::Left)) {
        xMove = -moveSpeed;
    }

    if (input.IsKeyPressed(Input::Key::Right)) {
        xMove = moveSpeed;
    }

    int yMove = 0;
    if (input.IsKeyPressed(Input::Key::Up)) {
        yMove = -moveSpeed;
    }

    if (input.IsKeyPressed(Input::Key::Down)) {
        yMove = moveSpeed;
    }

    float xFrameMove = xMove * deltaTime;
    float yFrameMove = yMove * deltaTime;

    vikingSprite.setPosition(spritePos.x + xFrameMove, spritePos.y + yFrameMove);
}

void Game::LateUpdate() {}

void Game::Draw() {
    window.BeginDraw();
    window.Draw(vikingSprite);
    window.EndDraw();
}

bool Game::IsRunning() const {
    return window.IsOpen();
}

void Game::CalculateDeltaTime() {
    deltaTime = clock.restart().asSeconds();
}

void Game::CaptureInput() {
    input.Update();
}