//
// Created by Abril on 4/5/2020.
//

#ifndef RAYLIBTEMPLATE_LIGHTRAMA_H
#define RAYLIBTEMPLATE_LIGHTRAMA_H
#include "Rama.h"
#include "Visitor.h"
#include "Visitable.h"


class LightRama: public Rama {
public:
    LightRama(int lado1, int sector1):Rama(lado1, sector1)
    {
	GetRectangle();
        Draw();
    }
    void Move() override
    {
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
        GetRectangle();

    }
    else
        rama_sector = rama_sector +1;
        Draw();
    }
    void Accept(Visitor & v) {
        v.Visit(*this);
    }
 	void Draw();

	void GetRectangle();
};


#endif //RAYLIBTEMPLATE_LIGHTRAMA_H
