//
// Created by Abril on 21/4/2020.
//

#include "Rama.h"
#include <time.h>
#include <stdlib.h>


void Rama::Draw() {
    DrawRama(lado, rama_sector, rect);
}

void Rama::Move() {
    int newlado;
    int newdiseno;
    if (rama_sector == 4) {
        rama_sector = 1; //podemos poner que cambie el color
        newlado = GetRandomValue(0, 1);
        if (newlado == 0)
            lado = -1;
        else
            lado =1;
        newdiseno = GetRandomValue(0,9);
        if (newdiseno < 7)
            animal = false;
        else
            animal = true;
        rect = GetRamaRectangle(lado, animal);

    }
    else
        rama_sector = rama_sector +1;
        rama_position = DrawRama(lado, rama_sector, rect);
}

Rectangle Rama::getRectangle() {
    Rectangle rec_rama = {rama_position.x, rama_position.y, 300, 300};
    return rec_rama;
}

//void Rama::SetDatos(int lado1, int sector1) {
//        lado = lado1;
//        rama_sector = sector1;
//        color = 1; //Ver como cambiar color
//        rama_position = DrawRama(lado, rama_sector, color); //ver de pasar rama
//}

//Rectangle Rama::selectNightAnimal(int animal) {
//    if (lado == -1)
//        switch (animal)
//        {
//            case 0:
//                rect
//        }
//
//    return Rectangle();
//}
