//
// Created by Abril on 13/4/2020.
//
#include <string>
#include "Monkey.h"
#include "Cartoonist.h"
#include  "raylib.h"
/*
Monkey::Monkey() {
    char left;
    monkey_position = DrawMonkey(0,'l');
}
*/


void Monkey::move_right() {
    if (monkey_position.x == 600)
    {
        DrawMonkey(1, 1);
    }
    else
        newlado();
    //Bajar arbol
}

void Monkey::move_left() {
    if (monkey_position.x == 300)
    {
        DrawMonkey(1, -1);
    }
    else
        newlado();
    //Bajar arbol
}

void Monkey::newlado()
{

    if (monkey_position.x == 600)
    {
        DrawTree(1, monkey_position);
        monkey_position.x = 300;
        DrawMonkey(0,1);
    }
    else
    {
        DrawTree(-1, monkey_position);
        monkey_position.x = 600;
        DrawMonkey(0,-1);
    }
}
