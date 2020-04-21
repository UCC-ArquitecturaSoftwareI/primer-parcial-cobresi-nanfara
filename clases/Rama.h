//
// Created by Abril on 21/4/2020.
//

#ifndef RAYLIBTEMPLATE_RAMA_H

#include "raylib.h"
#include "Cartoonist.h"
#define RAYLIBTEMPLATE_RAMA_H

class Rama: public Cartoonist {
private:
    Vector2 rama_position;
    int color;
public:
    int lado;
    Rama(int lado1, int color1);
    void Draw();
    void Move();
};


#endif //RAYLIBTEMPLATE_RAMA_H
