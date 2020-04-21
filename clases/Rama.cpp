//
// Created by Abril on 21/4/2020.
//

#include "Rama.h"


Rama::Rama(int lado1, int color1) {
    rama_position.y = -300;
    lado = lado1;
    color = color1;
    if (lado == -1)
        rama_position.x = 189;
    else
        rama_position.x = 711;
    DrawRama(color, rama_position);
}

void Rama::Draw() {
    DrawRama(color, rama_position);
}

void Rama::Move() {

}
