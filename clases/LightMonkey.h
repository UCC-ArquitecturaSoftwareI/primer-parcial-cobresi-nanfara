//
// Created by Abril on 3/5/2020.
//

#ifndef RAYLIBTEMPLATE_LIGHTMONKEY_H
#include "raylib.h"
#include "Monkey.h"
#define RAYLIBTEMPLATE_LIGHTMONKEY_H


class LightMonkey: public Monkey {
public:
    LightMonkey():Monkey()
    {
        lado = 1;
        monkey_position = Draw(0, lado);
    }
	virtual void Accept(Visitor& v) { 
	v.Visit(this); 
	}
 /*Vector2*/ void Draw(){
	VisitorDraw *v;
	Accept(v);
        }
};


#endif //RAYLIBTEMPLATE_LIGHTMONKEY_H
