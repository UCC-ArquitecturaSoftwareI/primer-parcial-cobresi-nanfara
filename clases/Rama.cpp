//
// Created by Abril on 21/4/2020.
//

#include "Rama.h"
#include <time.h>
#include <stdlib.h>


void Rama::Draw() {
    DrawRama(lado, rama_sector, color);
}

void Rama::Move() {
    srand(time(NULL));
    int newlado;
    int newcolor;
    if (rama_sector == 4) {
        rama_sector = 1; //podemos poner que cambie el color
        newlado = rand()%10;
        if (newlado < 5)
            lado = -1;
        else
            lado =1;
        newcolor = rand()%10;
        if (newcolor < 5)
            color = 0;
        else
            color =1;
    }
    else
        rama_sector = rama_sector +1;
    rama_position = DrawRama(lado, rama_sector, color);
}

Rectangle Rama::getRectangle() {
    Rectangle rec_rama = {rama_position.x, rama_position.y, 300, 300};
    return rec_rama;
}

void Rama::SetDatos(int lado1, int sector1) {
        lado = lado1;
        rama_sector = sector1;
        color = 1; //Ver como cambiar color
        rama_position = DrawRama(lado, rama_sector, color); //ver de pasar rama
}

