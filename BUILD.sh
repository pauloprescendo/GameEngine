#!/bin/bash
output=$(g++ src/Main.cpp src/Game.cpp src/Window.cpp src/WorkingDirectory.cpp src/Bitmask.cpp -lsfml-graphics -lsfml-window -lsfml-system -o build/main.out 2>&1)
if [[ $? != 0 ]]; then
    echo -e "Error:\n$output"
else
    ./build/main.out
fi
