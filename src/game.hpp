//
// Created by LymoneChen on 25-5-3.
//

#ifndef GESTALTOS_GAME_HPP
#define GESTALTOS_GAME_HPP

#include "core/core.hpp"

//单例 核心逻辑
class Game : Core {
private:
    Game(){};
public:
    Game(Game&) = delete;
    Game& operator=(const Game&) = delete;
    static Game& getInstance();
};


#endif //GESTALTOS_GAME_HPP
