//
// Created by ticiana cobresi serravalle on 01/06/2020.
//

#ifndef RAYLIBTEMPLATE_DECORATOR_H
#define RAYLIBTEMPLATE_DECORATOR_H

#include "SuperTree.h"

class Decorator: public SuperTree{
private:
    SuperTree* r_SuperTree;
public:
    Decorator(SuperTree *tree): r_SuperTree(tree){};

    virtual void DrawTree(){
        r_SuperTree->DrawTree();
    }
};

#endif //RAYLIBTEMPLATE_DECORATOR_H
