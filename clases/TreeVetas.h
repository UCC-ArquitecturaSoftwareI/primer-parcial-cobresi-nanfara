//
// Created by ticiana cobresi serravalle on 01/06/2020.
//

#ifndef RAYLIBTEMPLATE_TREEVETAS_H
#define RAYLIBTEMPLATE_TREEVETAS_H

#include "Decorator.h"
#include "SuperTree.h"
#include "Visitor.h"
#include "Visitable.h"

class TreeVetas: public Decorator{
public:
    TreeVetas(SuperTree* const dcrator): Decorator (dcrator){}

    void DrawTree() override{
        position.x = 300;
        position.y = -150;
        while (position.y < 1050) {
            lado = -1;
            Draw();
            position.x += 300;
            lado = 1;
            Draw();
            position.x = 300;
            position.y += 300;
        }
    }

    void Accept(Visitor& v) override {
        v.Visit(*this);
    }

    void Draw() override;
};

#endif //RAYLIBTEMPLATE_TREEVETAS_H
