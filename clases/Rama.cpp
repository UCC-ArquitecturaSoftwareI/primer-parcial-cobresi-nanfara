//
// Created by Abril on 1/6/2020.
//

#include "Rama.h"
#include "VisitorDraw.h"

void Rama::Draw()
    {
        VisitorDraw v;
        Accept(v);
    }