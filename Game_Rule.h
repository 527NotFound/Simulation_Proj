//
// Created by dimsu on 24. 11. 24.
//

#pragma once
#ifndef SIMULTION_GAME_RULE_H
#define SIMULTION_GAME_RULE_H

class Game {
public:
    Game();
    void run();
    void update();

private:
    bool isRunning;
};

#endif //SIMULTION_GAME_RULE_H