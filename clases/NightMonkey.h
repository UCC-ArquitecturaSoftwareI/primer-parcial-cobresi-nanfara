//
// Created by Abril on 3/5/2020.
//

#ifndef RAYLIBTEMPLATE_NIGHTMONKEY_H
#include "raylib.h"
#include "Monkey.h"
#define RAYLIBTEMPLATE_NIGHTMONKEY_H


class NightMonkey: public Monkey { //Override??
public:
    NightMonkey():Monkey()
    {
        lado = 1;
        monkey_position = Draw(0, lado);
    }
     Vector2 Draw(int mov, int lad){
        return DrawNightMonkey(mov, lado);
    }
};


#endif //RAYLIBTEMPLATE_NIGHTMONKEY_H
