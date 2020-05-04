//
// Created by Abril on 21/4/2020.
//

#include "Rama.h"
#include <time.h>
#include <stdlib.h>


void Rama::Draw() {
    DrawRama(lado, rama_sector, rect);
}
//
//void Rama::Move() {
//    int newlado;
//    int newdiseno;
//    if (rama_sector == 4) {
//        rama_sector = 1; //podemos poner que cambie el color
//        newlado = GetRandomValue(0, 1);
//        if (newlado == 0)
//            lado = -1;
//        else
//            lado =1;
//        newdiseno = GetRandomValue(0,9);
//        if (newdiseno < 7)
//            animal = false;
//        else
//            animal = true;
//        rect = GetRamaLightRectangle(lado, animal);
//
//    }
//    else
//        rama_sector = rama_sector +1;
//        rama_position = DrawRama(lado, rama_sector, rect);
//}

Rectangle Rama::getRectangle() {
    Rectangle rec_rama = {rama_position.x, rama_position.y, 300, 300};
    return rec_rama;
}


