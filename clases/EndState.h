//
// Created by Abril on 6/6/2020.
//

#ifndef RAYLIBTEMPLATE_ENDSTATE_H
#define RAYLIBTEMPLATE_ENDSTATE_H

#include "Manager.h"
#include <string>
class SingletonGame;

class EndState: public Manager{
public:
    EndState():Manager(std::string("End")){}
    void Update(SingletonGame *singleton);
    virtual ~EndState(){}
    virtual void Menu(SingletonGame *singleton);
    virtual void Game(SingletonGame *singleton);

};


#endif //RAYLIBTEMPLATE_ENDSTATE_H
