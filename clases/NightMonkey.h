//
// Created by Abril on 3/5/2020.
//

#ifndef RAYLIBTEMPLATE_NIGHTMONKEY_H
#define RAYLIBTEMPLATE_NIGHTMONKEY_H
#include "raylib.h"
#include "Monkey.h"
#include "Visitor.h"
#include "Visitable.h"

//class Visitor;
//class VisitorDraw;
//class VisitorGetRectangle;

class NightMonkey: public Monkey { //Override??
public:
    NightMonkey():Monkey()
    {
        rect = {0, 1500, 300, 300};
        lado = 1;
        Draw();
    }
    void Accept(Visitor & v) {
        v.Visit(*this);
    }
    void Draw();
        };


#endif //RAYLIBTEMPLATE_NIGHTMONKEY_H
