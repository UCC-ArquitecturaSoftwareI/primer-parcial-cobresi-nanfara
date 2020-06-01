//
// Created by Abril on 1/6/2020.
//

#include "LightMonkey.h"
#include "VisitorDraw.h"

void LightMonkey::Draw() {
    {
        VisitorDraw *v;
        Accept(*v);
    }
}

