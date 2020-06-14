//
// Created by Abril on 1/6/2020.
//

#ifndef RAYLIBTEMPLATE_VISITORGETRECTANGLE_H
#define RAYLIBTEMPLATE_VISITORGETRECTANGLE_H

#include "Visitor.h"

#include "LightMonkey.h"
#include "LightRama.h"
#include "NightRama.h"
#include "NightMonkey.h"
#include "Tree.h"
#include "MenuElements.h"
#include "Rama.h"
#include "Monkey.h"
#include "TreeVetas.h"

#include "raylib.h"

class VisitorGetRectangle: public Visitor
{
public:
    VisitorGetRectangle():Visitor(){
    }
    void Visit(NightMonkey &o) override {}

    void Visit(LightMonkey &o) override {}

    void Visit(Tree &o) override {}

    void Visit(TreeVetas &o) override {}

    void Visit(Rama &o) override {}

    void Visit(Skin &o) override {}

    void Visit(StartButton &o) override {}

    void Visit(LightButton &o) override {}

    void Visit(NightButton &o) override {}


    void Visit(LightRama &rama) override
    {
        if (rama.animal)
            rect = GetRamaDayAnimalRectangle(rama.lado);
        else
            rect = GetRamaVaciaRectangle(rama.lado);
        rama.rect = rect;
    }

    void Visit(NightRama &rama) override{
        if (rama.animal)
            rect = GetRamaNightAnimalRectangle(rama.lado);
        else
            rect = GetRamaVaciaRectangle(rama.lado);
        rama.rect = rect;
    }

    Rectangle GetRamaNightAnimalRectangle(int lado){
        int animal = GetRandomValue(0, 3);
        if (lado == -1)
        {
            switch (animal)
            {
                case 0:
                    rect.y = 2100;
                    rect.x = 300;
                    break;
                case 1:
                    rect.y = 2100;
                    rect.x = 900;
                    break;
                case 2:
                    rect.y = 2400;
                    rect.x = 300;
                    break;
                case 3:
                    rect.y = 2400;
                    rect.x = 900;
            }
        }
        else
        {
            switch (animal)
            {
                case 0:
                    rect.y = 2100;
                    rect.x = 0;
                    break;
                case 1:
                    rect.y = 2100;
                    rect.x = 600;
                    break;
                case 2:
                    rect.y = 2400;
                    rect.x = 0;
                    break;
                case 3:
                    rect.y = 2400;
                    rect.x = 600;
            }
        }
        return rect;
    }
    Rectangle GetRamaDayAnimalRectangle(int lado){
        {
            int animal = GetRandomValue(0, 3);
            if (lado == -1)
            {
                switch (animal)
                {
                    case 0:
                        rect.y = 2700;
                        rect.x = 300;
                        break;
                    case 1:
                        rect.y = 2700;
                        rect.x = 900;
                        break;
                    case 2:
                        rect.y = 3000;
                        rect.x = 300;
                        break;
                    case 3:
                        rect.y = 3000;
                        rect.x = 900;
                }
            }
            else
            {
                switch (animal)
                {
                    case 0:
                        rect.y = 2700;
                        rect.x = 0;
                        break;
                    case 1:
                        rect.y = 2700;
                        rect.x = 600;
                        break;
                    case 2:
                        rect.y = 3000;
                        rect.x = 0;
                        break;
                    case 3:
                        rect.y = 3000;
                        rect.x = 600;
                }
            }
            return rect;
        }
    }
    Rectangle GetRamaVaciaRectangle(int lado){
        int color = GetRandomValue(0, 1);
        rect.y = 900;
        if (lado == -1)
        {
            if (color == 1)
                rect.x = 900;
            else
                rect.x = 300;
        }
        else {
            if (color == 1)
                rect.x = 600;
            else
                rect.x = 0;
        }

        return rect;
    }

};

#endif //RAYLIBTEMPLATE_VISITORGETRECTANGLE_H
