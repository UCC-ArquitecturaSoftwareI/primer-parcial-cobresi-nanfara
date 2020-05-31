//
// Created by Abril on 3/5/2020.
//

#ifndef RAYLIBTEMPLATE_NIGHTMONKEY_H
#define RAYLIBTEMPLATE_NIGHTMONKEY_H
#include "raylib.h"
#include "Monkey.h"
#include "Visitor.h"


class NightMonkey: public Monkey { //Override??
public:
    NightMonkey():Monkey()
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


#endif //RAYLIBTEMPLATE_NIGHTMONKEY_H
