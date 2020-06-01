//
// Created by Abril on 3/5/2020.
//

#ifndef RAYLIBTEMPLATE_LIGHTMONKEY_H
#define RAYLIBTEMPLATE_LIGHTMONKEY_H

#include "raylib.h"
#include "Monkey.h"
#include "Visitor.h"
#include "Visitable.h"


class LightMonkey: public Monkey {
public:
    LightMonkey():Monkey()
    {
        lado = 1;
        Draw();
    }
    void Accept(Visitor & v) override {
        v.Visit(*this);
    }
  void Draw() override;
};


#endif //RAYLIBTEMPLATE_LIGHTMONKEY_H
