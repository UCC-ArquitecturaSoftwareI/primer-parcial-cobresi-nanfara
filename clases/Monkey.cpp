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
    mov = 0
    Draw();
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
	mov = 1;
        Draw();
    }
    else
        newlado();
    //Bajar arbol
}

void Monkey::newlado()
{
	mov = 0;

    if (monkey_position.x == 600)
    {
        lado = -1;
        Draw();
    }
    else
    {
        lado = 1;
        Draw();
    }
}


Rectangle Monkey::getRectangle() {
    Rectangle rect_monkey = {monkey_position.x, monkey_position.y, 300, 300};
    return rect_monkey;
}


