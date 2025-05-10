//
// Created by LymoneChen on 25-5-3.
//

#ifndef GESTALTOS_CORE_HPP
#define GESTALTOS_CORE_HPP

#include "updatable.hpp"

//抽象核心逻辑
class Core {
private:
    updatable* logicUpdateArray;
    updatable* graphicUpdateArray;
public:
    bool update();

};

#endif //GESTALTOS_CORE_HPP
