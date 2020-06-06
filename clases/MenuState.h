//
// Created by Abril on 6/6/2020.
//

#ifndef RAYLIBTEMPLATE_MENUSTATE_H
#define RAYLIBTEMPLATE_MENUSTATE_H

#include "Manager.h"
#include <string>
class SingletonGame;

class MenuState: public Manager{
public:
    MenuState():Manager(std::string("Menu")){}
    virtual void Update(SingletonGame *singleton);
    virtual void Game(SingletonGame *singleton);
    virtual void End(SingletonGame *singleton);
    virtual ~MenuState(){}
};


#endif //RAYLIBTEMPLATE_MENUSTATE_H
