//
// Created by Abril on 13/4/2020.
//

#ifndef RAYLIBTEMPLATE_MONKEY_H
#define RAYLIBTEMPLATE_MONKEY_H

#include "raylib.h"
#include <string> //se usa?
#include "Visitor.h"


class Monkey{
public:
        Vector2 monkey_position;
        int lado;
//Hacer bool
	int mov=0;

        Monkey()
        {
//            lado = 1;
//            monkey_position = Draw(0, lado);
        }
        virtual void Draw() = 0;
	virtual void Accept(Visitor& v) = 0;
        void move_right();
        void move_left();
        void newlado();
        Rectangle getRectangle();
    };



#endif //RAYLIBTEMPLATE_MONKEY_H
