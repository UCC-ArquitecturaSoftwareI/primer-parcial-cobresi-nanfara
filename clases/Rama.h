//
// Created by Abril on 21/4/2020.
//

#ifndef RAYLIBTEMPLATE_RAMA_H
#define RAYLIBTEMPLATE_RAMA_H
#include "raylib.h"
#include "Visitor.h"
#include "Visitable.h"


class Rama: public Visitable {
public:
    int rama_sector; //1, 2, 3 o 4
    int lado; //-1 = izq //1 = derecha
    Vector2 rama_position;
    bool animal;
    Rectangle rect;

    Rama(int lado1, int sector1)
    {
        animal = false;
        lado = lado1;
        rama_sector = sector1;
        //color = GetRandomValue(0,1);
        //rama_position = Draw(lado, rama_sector, rect = GetRamaVaciaRectangle(lado)); ver de pasar rama
    }

    virtual void Draw();
    Rectangle getRectangle(){
    Rectangle rec_rama = {rama_position.x, rama_position.y, 300, 300};
    return rec_rama;
    }

    void Accept(Visitor & v) {
        v.Visit(*this);
    }
    virtual void Move() = 0;



};


#endif //RAYLIBTEMPLATE_RAMA_H
