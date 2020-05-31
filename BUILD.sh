#!/bin/bash
output=$(g++ \
src/Main.cpp \
src/Game.cpp \
src/Window.cpp \
src/WorkingDirectory.cpp \
src/Bitmask.cpp \
src/Input.cpp \
src/SceneStateMachine.cpp \
src/SceneSplashScreen.cpp \
src/SceneGame.cpp \
src/C_KeyboardMovement.cpp \
src/C_Sprite.cpp \
src/C_Transform.cpp \
src/Object.cpp \
-lsfml-graphics -lsfml-window -lsfml-system -o build/main.out 2>&1)
if [[ $? != 0 ]]; then
    echo -e "Error:\n$output"
else
    ./build/main.out
fi
