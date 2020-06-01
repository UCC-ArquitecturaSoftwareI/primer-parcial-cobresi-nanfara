//
// Created by Abril on 1/6/2020.
//

#ifndef RAYLIBTEMPLATE_VISITOR_H
#define RAYLIBTEMPLATE_VISITOR_H

#include "LightMonkey.h"
#include "LightRama.h"
#include "NightRama.h"
#include "NightMonkey.h"
#include "Tree.h"
#include "Button.h"
#include "raylib.h"


class Visitor
{
private:
    Texture2D sprite;
    Rectangle rect;
    Vector2 position;
public:
    //virtual void Draw() = 0;
    Visitor() {
        sprite = LoadTexture("resources/Sprite.png");
        rect = {0,0, 300, 300};
    }
    virtual void Visit(NightMonkey *) =0;
    virtual void Visit(LightMonkey *)=0;
    virtual void Visit(Tree *)=0;
    virtual void Visit(Rama *)=0;
    virtual void Visit(Skin *)=0;
    virtual void Visit(StartButton *)=0;
    virtual void Visit(LightButton *)=0;
    virtual void Visit(NightButton *)=0;

    virtual void Visit(NightRama *)=0;
    virtual void Visit(LighttRama *)=0;


//    Texture2D GetSprite();

};

class VisitorGetRectangle: public Visitor
{
public:
    VisitorGetRectangle():Visitor(){}
    void Visit(LightRama *rama)
    {
        if (rama.animal)
            rect = GetRamaDayAnimalRectangle(rama.lado);
        else
            rect = GetRamaVaciaRectangle(rama.lado);
        rama.rect = rect;
    }

    void Visit(NightRama *rama) {
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

class VisitorDraw: public Visitor
{
public:
    VisitorDraw:Visitor(){}
    void Visit(NightMonkey *monkey)
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

    void Visit(LightMonkey *monkey)
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


    void Visit(Tree *tree)
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

    void Visit(Rama *rama)
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

    void Visit(NightButton *button){
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

    void Visit(LightButton *button){
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

    void Visit(StartButton *button)
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


    void Visit(Skin *skin)
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

        DrawTextureRec(sprite, rect, skin.posicion, WHITE);
    }
};


#endif //RAYLIBTEMPLATE_VISITOR_H
