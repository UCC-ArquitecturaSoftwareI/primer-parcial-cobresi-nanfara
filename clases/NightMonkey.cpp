//
// Created by Abril on 1/6/2020.
//

#include "NightMonkey.h"
#include "VisitorDraw.h"

void NightMonkey::Draw() {
    {
        VisitorDraw *v;
        Accept(*v);
    }

}

