//
// Created by Abril on 21/4/2020.
//

#ifndef RAYLIBTEMPLATE_RAMA_H

#include "raylib.h"
#include "Cartoonist.h"

#define RAYLIBTEMPLATE_RAMA_H

class Rama: public Cartoonist {
private:
    int rama_sector;
    int lado;
    Vector2 rama_position;
    int color; //0 = clara // 1 = oscura
public:
    Rama(int lado1, int sector1):Cartoonist()
    {
        lado = lado1;
        rama_sector = sector1;
        color = 1; //Ver como cambiar color
        rama_position = DrawRama(lado, rama_sector, color); //ver de pasar rama
    }
    //Rama();    //int lado1, int color1
    void Draw();
    void Move();
    Rectangle getRectangle();



};


#endif //RAYLIBTEMPLATE_RAMA_H
