//
// Created by Abril on 1/6/2020.
//


#include "MenuElements.h"
#include "VisitorDraw.h"

void LightButton::Draw()
    {
        VisitorDraw v;
        Accept(v);
    }

void NightButton::Draw() {
    {
        VisitorDraw v;
        Accept(v);
    }
}

void StartButton::Draw() {
    {
        VisitorDraw v;
        Accept(v);
    }
}

void Skin::Draw() {
    {
        VisitorDraw v;
        Accept(v);
    }
}
