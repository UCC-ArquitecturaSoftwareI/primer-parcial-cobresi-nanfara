//
// Created by Abril on 1/6/2020.
//

#ifndef RAYLIBTEMPLATE_VISITORDRAW_H
#define RAYLIBTEMPLATE_VISITORDRAW_H

#include "Visitor.h"

#include "LightMonkey.h"
#include "LightRama.h"
#include "NightRama.h"
#include "NightMonkey.h"
#include "Tree.h"
#include "MenuElements.h"
#include "Rama.h"
#include "Monkey.h"
#include "TreeVetas.h"

#include "raylib.h"
//#include <iostream>

class VisitorDraw: public Visitor
{
public:
    VisitorDraw():Visitor(){

    }
    void Visit(NightMonkey &monkey) override;

    void Visit(LightMonkey &monkey) override;


    void Visit(Tree &tree) override;

    void Visit(TreeVetas &tree) override;

    void Visit(Rama &rama) override;

    void Visit(NightButton &button) override;

    void Visit(LightButton &button) override;

    void Visit(StartButton &button) override;

    void Visit(NightRama &rama) override {
        CallRama(rama);
    }

    void Visit(LightRama &rama) override {
        CallRama(rama);
    }

    void Visit(Skin &skin) override;

    void CallRama(Rama &rama);
};



#endif //RAYLIBTEMPLATE_VISITORDRAW_H
