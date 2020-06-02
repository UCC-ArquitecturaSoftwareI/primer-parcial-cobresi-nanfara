//
// Created by Abril on 2/6/2020.
//

#ifndef RAYLIBTEMPLATE_SUPERTREE_H
#define RAYLIBTEMPLATE_SUPERTREE_H

#include "Visitable.h"

class SuperTree: public Visitable
{
public:
    int lado;
    Vector2 position;
   // SuperTree(){}
    virtual void DrawTree() = 0;
    virtual void Accept(Visitor& v) =0;
    virtual void Draw() = 0;
};

#endif //RAYLIBTEMPLATE_SUPERTREE_H
