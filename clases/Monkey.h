//
// Created by Abril on 13/4/2020.
//

#ifndef RAYLIBTEMPLATE_MONKEY_H
#include <raylib.h>
#include <string>
#include "Visitor.h"
#define RAYLIBTEMPLATE_MONKEY_H


class Monkey{
public:
        Vector2 monkey_position;
        int lado;
//Hacer bool
	int mov=0;

        Monkey():Cartoonist()
        {
//            lado = 1;
//            monkey_position = Draw(0, lado);
        }
        virtual void Draw() = 0;
        void move_right();
        void move_left();
        void newlado();
        Rectangle getRectangle();
    };



#endif //RAYLIBTEMPLATE_MONKEY_H
