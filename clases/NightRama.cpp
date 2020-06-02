//
// Created by Abril on 1/6/2020.
//

#include "VisitorDraw.h"
#include "VisitorGetRectangle.h"
#include "LightRama.h"

void NightRama::Draw()
{
    VisitorDraw v;
    Accept(v);
}

void NightRama::GetRectangle()
{
    VisitorGetRectangle v;
    Accept(v);
}
