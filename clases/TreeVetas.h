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
    TreeVetas(SuperTree *dcrator): Decorator(dcrator){}

    virtual void DrawTree(){
        Decorator::DrawTree();
        Draw();
    }
    void Accept(Visitor& v) {
        v.Visit(*this);
    }

    void Draw();
};

#endif //RAYLIBTEMPLATE_TREEVETAS_H
