//
// Created by Abril on 6/6/2020.
//

#ifndef RAYLIBTEMPLATE_GAMESTATE_H
#define RAYLIBTEMPLATE_GAMESTATE_H

#include "Manager.h"
#include <string>
class SingletonGame;


class GameState: public Manager{
public:
    GameState():Manager(std::string("Game")){}
    void Update(SingletonGame *singleton);
    virtual ~GameState(){}
    virtual void Menu(SingletonGame *singleton);
    virtual void End(SingletonGame *singleton);

};


#endif //RAYLIBTEMPLATE_GAMESTATE_H
