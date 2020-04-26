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

   // Vector2 rama_position1;
     Vector2 rama_position2;
//    Vector2 rama_position3;
//    Vector2 rama_position4;

    Rama():Cartoonist()
    {
//        rama_position1 = DrawRama1();    //es igual a la posicion de la rama en y=-150
          rama_position2 = DrawRama2();
//        rama_position3 = DrawRama3();
//        rama_position4 = DrawRama4();
    }
    //Rama();    //int lado1, int color1
    void Draw();
    void Move();



};


#endif //RAYLIBTEMPLATE_RAMA_H
