//
// Created by LymoneChen on 25-5-3.
//

#include "game.hpp"

Game &Game::getInstance() {
    static Game instance;
    return instance;
}
