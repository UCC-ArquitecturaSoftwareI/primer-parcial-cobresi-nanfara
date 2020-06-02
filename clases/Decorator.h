//
// Created by ticiana cobresi serravalle on 01/06/2020.
//

#ifndef RAYLIBTEMPLATE_DECORATOR_H
#define RAYLIBTEMPLATE_DECORATOR_H

#include "Tree.h"

class Decorator: public  Tree{
private:
    Decorator* r_decorator;
public:
    Decorator(Tree *decorator): r_decorator(decorator){};

    virtual void assemble(){
        r_decorator->assemble();
    }
};

#endif //RAYLIBTEMPLATE_DECORATOR_H
