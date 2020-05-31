//
// Created by Abril on 21/4/2020.
//

#ifndef RAYLIBTEMPLATE_RAMA_H
#define RAYLIBTEMPLATE_RAMA_H
#include "raylib.h"
#include "Visitor.h"
#include <time.h>
#include <stdlib.h>

class Rama{
protected:
    int rama_sector; //1, 2, 3 o 4
    int lado; //-1 = izq //1 = derecha
    Vector2 rama_position;
    bool animal;
    Rectangle rect;
public:
    Rama(int lado1, int sector1):Cartoonist()
    {
        animal = false;
        lado = lado1;
        rama_sector = sector1;
        //color = GetRandomValue(0,1);
        //rama_position = DrawRama(lado, rama_sector, rect = GetRamaVaciaRectangle(lado)); ver de pasar rama
    }

    void Draw(){
    VisitorDraw *v;
	Accept(v);
	}
    virtual void Accept(Visitor& v) = 0;
    virtual void Move() = 0;
    Rectangle getRectangle(){
    Rectangle rec_rama = {rama_position.x, rama_position.y, 300, 300};
    return rec_rama;
}



};


#endif //RAYLIBTEMPLATE_RAMA_H
