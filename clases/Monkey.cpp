//
// Created by Abril on 13/4/2020.
//
#include <string>
#include "Monkey.h"
#include "Visitor.h"
#include  "raylib.h"
/*
Monkey::Monkey() {
    char left;
    monkey_position = DrawMonkey(0,'l');
}
*/

void Monkey::move_right() {
    if (lado == 1)
    {
        Draw(1, 1);
    }
    else
        newlado();
    //Bajar arbol
}

void Monkey::move_left() {
    if (lado == -1)
    {
        Draw(1, -1);
    }
    else
        newlado();
    //Bajar arbol
}

void Monkey::newlado()
{

    if (monkey_position.x == 600)
    {
        lado = -1;
        monkey_position = Draw(0, lado);
    }
    else
    {
        lado = 1;
        monkey_position = Draw(0, lado);
    }
}

//void Monkey::Draw() {
//    DrawMonkey(0, lado);
//}

Rectangle Monkey::getRectangle() {
    Rectangle rect_monkey = {monkey_position.x, monkey_position.y, 300, 300};
    return rect_monkey;
}

void Monkey::Draw() {
    Draw(0, lado);
}
