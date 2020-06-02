//
// Created by ticiana cobresi serravalle on 01/06/2020.
//

#ifndef RAYLIBTEMPLATE_TREEVETAS_H
#define RAYLIBTEMPLATE_TREEVETAS_H

#include "Decorator.h"

class TreeVetas: public Decorator{
public:
    TreeVetas(Tree *dcrator): Decorator(dcrator){}
    virtual void assemble(){
        Decorator::assemble();
        //DrawVetas();

    }
    //DrawVetas(){};
};

#endif //RAYLIBTEMPLATE_TREEVETAS_H
