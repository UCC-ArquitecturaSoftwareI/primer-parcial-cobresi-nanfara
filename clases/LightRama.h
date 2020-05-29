//
// Created by Abril on 4/5/2020.
//

#ifndef RAYLIBTEMPLATE_LIGHTRAMA_H
#include "Rama.h"
#define RAYLIBTEMPLATE_LIGHTRAMA_H


class LightRama: public Rama {
public:
    LightRama(int lado1, int sector1):Rama(lado1, sector1)
    {
	GetRectangle();
	rama_position = DrawRama(lado, rama_sector, rect);
    }
    void Move()
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
        rama_position = DrawRama();
    }
	virtual void Accept(Visitor& v) { 
	v.Visit(this); 
	}
 	void DrawRama(){
	VisitorDraw *v;
	Accept(v);
	}

	void GetRectangle(){
	VisitorGetRectangle *v;
	Accept(v);
	}
	
};


#endif //RAYLIBTEMPLATE_LIGHTRAMA_H
