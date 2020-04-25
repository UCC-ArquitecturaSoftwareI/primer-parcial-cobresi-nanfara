//
// Created by Abril on 21/4/2020.
//

#ifndef RAYLIBTEMPLATE_RAMA_H

#include "raylib.h"
#include "Cartoonist.h"

#define RAYLIBTEMPLATE_RAMA_H

class Rama: public Cartoonist {
private:
public:

    Vector2 rama_position;
    int key;
    int color;

    Rama():Cartoonist()
    {
        rama_position = DrawRama(1);
        key = 1;

    }
    //Rama();    //int lado1, int color1
    void Draw();
    void Move();
    Rectangle getRectangle();



};


#endif //RAYLIBTEMPLATE_RAMA_H
