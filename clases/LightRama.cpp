//
// Created by Abril on 1/6/2020.
//
#include "VisitorDraw.h"
#include "VisitorGetRectangle.h"
#include "LightRama.h"

void LightRama::Draw()
    {
        VisitorDraw *v;
        Accept(*v);
    }

void LightRama::GetRectangle()
{
        VisitorGetRectangle *v;
        Accept(*v);
}

