//
// Created by dimsu on 24. 11. 24.
//

#include "Game_Rule.h"
#include <iostream>

Game::Game() : isRunning(true) {}

void Game::run() {
    while (isRunning) {
        update();
    }
}