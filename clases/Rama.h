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
    int color;
    int lado;
    Rama(int lado1, int color1);
    //Rama( const Rama &R);
    void Draw();
   //void Move();

    Rama():Cartoonist()
    {
        rama_position = DrawRama(1,rama_position);

    }

    struct Ramita
    {
        Vector2 speedr ={5,5};
        bool active;
        Vector2 rama_position;
        int color;
    };

};


#endif //RAYLIBTEMPLATE_RAMA_H
