//
// Created by Abril on 13/4/2020.
//
#include <raylib.h>
#include <string>
#ifndef RAYLIBTEMPLATE_MONKEY_H
#define RAYLIBTEMPLATE_MONKEY_H


class Monkey {
        Texture2D monkey;
        //Vector2 monkey_pos; Modifiqué esto porque nuestro mono solo se mueve en x pero si no funciona volvemos al Vector2
        Vector2 monkey_pos;
    public:
        Monkey(std::string text, const Vector2 &monkeyPos);

        void draw();
        void move_right(float d);
        void move_left(float d);
    };



#endif //RAYLIBTEMPLATE_MONKEY_H
