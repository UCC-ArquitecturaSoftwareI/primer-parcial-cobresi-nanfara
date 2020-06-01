//
// Created by Abril on 1/6/2020.
//

#ifndef RAYLIBTEMPLATE_VISITORDRAW_H
#define RAYLIBTEMPLATE_VISITORDRAW_H

#include "Visitor.h"

#include "LightMonkey.h"
#include "LightRama.h"
#include "NightRama.h"
#include "NightMonkey.h"
#include "Tree.h"
#include "Button.h"
#include "Rama.h"
#include "Monkey.h"

#include "raylib.h"
//#include <iostream>

class VisitorDraw: public Visitor
{
public:
    VisitorDraw():Visitor(){

    }
    void Visit(NightMonkey &monkey)
    {
        position.y = 450;
        if (monkey.lado == 1)
        {
            position.x = 600;
            rect.y = 1500;
            if (monkey.mov)
            {
                if (rect.x == 900)
                    rect.x = 0;
                else
                    rect.x = rect.x+300;
            }
        }
        if (monkey.lado == -1)
        {
            position.x = 300;
            rect.y = 1800;
            if (monkey.mov)
            {
                if (rect.x == 900)
                    rect.x = 0;
                else
                    rect.x = rect.x+300;
            }
        }
        DrawTextureRec(sprite, rect, position, WHITE);
        monkey.monkey_position = position;
    }

    void Visit(LightMonkey &monkey)
    {
        position.y = 450;
        if (monkey.lado == 1)
        {
            position.x = 600;
            rect.y = 300;
            if (monkey.mov)
            {
                if (rect.x == 900)
                    rect.x = 0;
                else
                    rect.x = rect.x+300;
            }
        }
        if (monkey.lado == -1)
        {
            position.x = 300;
            rect.y = 600;
            if (monkey.mov)
            {
                if (rect.x == 900)
                    rect.x = 0;
                else
                    rect.x = rect.x+300;
            }
        }
        DrawTextureRec(sprite, rect, position, WHITE);
        monkey.monkey_position = position;
    }


    void Visit(Tree &tree)
    {
        if(tree.lado == -1)
        {
            rect.y = 1200;
            rect.x = 900;
        }
        if(tree.lado == 1)
        {
            rect.y = 1200;
            rect.x = 600;
        }
        DrawTextureRec(sprite, rect, tree.position, WHITE);
    }

    void Visit(Rama &rama)
    {
        if (rama.lado == -1)
        {
            switch (rama.rama_sector) {
                case 1:
                    rama.rama_position.x = 190;
                    rama.rama_position.y = -150;
                    break;
                case 2:
                    rama.rama_position.x = 190;
                    rama.rama_position.y = 150;
                    break;
                case 3:
                    rama.rama_position.x = 190;
                    rama.rama_position.y = 450;
                    break;
                case 4:
                    rama.rama_position.x = 190;
                    rama.rama_position.y = 750;
                    break;
            }
        }
        else
        {
            switch (rama.rama_sector) {
                case 1:
                    rama.rama_position.x = 710;
                    rama.rama_position.y = -150;
                    break;
                case 2:
                    rama.rama_position.x = 710;
                    rama.rama_position.y = 150;
                    break;
                case 3:
                    rama.rama_position.x = 710;
                    rama.rama_position.y = 450;
                    break;
                case 4:
                    rama.rama_position.x = 710;
                    rama.rama_position.y = 750;
                    break;
            }
        }
        DrawTextureRec(sprite, rama.rect, rama.rama_position, WHITE);
    }

    void Visit(NightButton &button){
        if (!button.estado)
        {
            rect.x = 1200;
            rect.y = 600;
        } else
        {
            rect.x = 1200;
            rect.y = 900;
        }
        DrawTextureRec(sprite, rect, button.position, WHITE);
    }

    void Visit(LightButton &button){
        if (!button.estado)
        {
            rect.x = 1200;
            rect.y = 0;
        } else
        {
            rect.x = 1200;
            rect.y = 300;
        }
        DrawTextureRec(sprite, rect, button.position, WHITE);
    }

    void Visit(StartButton &button)
    {
        if (!button.estado)
        {
            if(button.theme)
            {
                rect.x = 0;
                rect.y = 3300;
            }
            else
            {
                rect.x = 600;
                rect.y = 3300;
            }

        } else
        {
            if(button.theme)
            {
                rect.x = 300;
                rect.y = 3300;
            }
            else
            {
                rect.x = 900;
                rect.y = 3300;
            }

        }
        DrawTextureRec(sprite, rect, button.position, WHITE);
    }


    void Visit(Skin &skin)
    {
        if(skin.tema)
        {
            rect.x = 300;
            rect.y = 0;
        }
        else
        {
            rect.x = 0;
            rect.y = 0;
        }

        DrawTextureRec(sprite, rect, skin.position, WHITE);
    }
};

#endif //RAYLIBTEMPLATE_VISITORDRAW_H
