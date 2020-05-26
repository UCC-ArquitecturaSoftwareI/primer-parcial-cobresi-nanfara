//
// Created by Abril on 20/4/2020.
//
#include <raylib.h>
#include "Visitor.h"
#include "Monkey.h"
#include "Rama.h"

Vector2 Cartoonist::DrawMonkey(int movimiento, int lado) {
    position.y = 450;
    if (lado == 1)
    {
        position.x = 600;
        rect.y = 300;
        if (movimiento)
        {
            if (rect.x == 900)
                rect.x = 0;
            else
                rect.x = rect.x+300;
        }
    }
    if (lado == -1)
    {
        position.x = 300;
        rect.y = 600;
        if (movimiento)
        {
            if (rect.x == 900)
                rect.x = 0;
            else
                rect.x = rect.x+300;
        }
    }
    DrawTextureRec(sprite, rect, position, WHITE);
    return position;
}


void Cartoonist::DrawTree(int lado, Vector2 pos) {
        if(lado == -1)
        {
            rect.y = 1200;
            rect.x = 900;
        }
        if(lado == 1)
        {
            rect.y = 1200;
            rect.x = 600;
        }
    DrawTextureRec(sprite, rect, pos, WHITE);
}

Vector2 Cartoonist::DrawNightMonkey(int movimiento, int lado) {
    position.y = 450;
    if (lado == 1)
    {
        position.x = 600;
        rect.y = 1500;
        if (movimiento)
        {
            if (rect.x == 900)
                rect.x = 0;
            else
                rect.x = rect.x+300;
        }
    }
    if (lado == -1)
    {
        position.x = 300;
        rect.y = 1800;
        if (movimiento)
        {
            if (rect.x == 900)
                rect.x = 0;
            else
                rect.x = rect.x+300;
        }
    }
    DrawTextureRec(sprite, rect, position, WHITE);
    return position;
}

Rectangle Cartoonist::GetRamaLightRectangle(int lado, bool animal) {
    if (animal)
        rect = GetRamaDayAnimalRectangle(lado);
    else
        rect = GetRamaVaciaRectangle(lado);
    return rect;
}

Vector2 Cartoonist::DrawRama(int lado, int sector, Rectangle rectangle){
    if (lado == -1)
    {
        switch (sector) {
            case 1:
                position.x = 190;
                position.y = -150;
                break;
            case 2:
                position.x = 190;
                position.y = 150;
                break;
            case 3:
                position.x = 190;
                position.y = 450;
                break;
            case 4:
                position.x = 190;
                position.y = 750;
                break;
        }
    }
    else
    {
        switch (sector) {
            case 1:
                position.x = 710;
                position.y = -150;
                break;
            case 2:
                position.x = 710;
                position.y = 150;
                break;
            case 3:
                position.x = 710;
                position.y = 450;
                break;
            case 4:
                position.x = 710;
                position.y = 750;
                break;
        }
    }
    DrawTextureRec(sprite, rectangle, position, WHITE);
    return position;
}

Rectangle Cartoonist::GetRamaNightAnimalRectangle(int lado) {
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

Rectangle Cartoonist::GetRamaVaciaRectangle(int lado) {
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

Rectangle Cartoonist::GetRamaDayAnimalRectangle(int lado) {
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

Rectangle Cartoonist::GetRamaNightRectangle(int lado, bool animal) {
    if (animal)
        rect = GetRamaNightAnimalRectangle(lado);
    else
        rect = GetRamaVaciaRectangle(lado);
    return rect;
}

Texture2D Cartoonist::GetSprite()
{
    return sprite;
}

void Cartoonist::DrawNightButton(Vector2 position, int estado) {
    if (!estado)
    {
        rect.x = 1200;
        rect.y = 600;
    } else
    {
        rect.x = 1200;
        rect.y = 900;
    }
    DrawTextureRec(sprite, rect, position, WHITE);

}

void Cartoonist::DrawLightButton(Vector2 position, int estado) {
    if (!estado)
    {
        rect.x = 1200;
        rect.y = 0;
    } else
    {
        rect.x = 1200;
        rect.y = 300;
    }
    DrawTextureRec(sprite, rect, position, WHITE);
}

void Cartoonist::DrawStartButton(Vector2 position, int estado, int theme) {
    if (!estado)
    {
        if(theme)
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
        if(theme)
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
    DrawTextureRec(sprite, rect, position, WHITE);
}


void Cartoonist::DrawMonkeyMenu(int tema, Vector2 posicion){
    if(tema)
    {
        rect.x = 300;
        rect.y = 0;
    }
    else
    {
        rect.x = 0;
        rect.y = 0;
    }

    DrawTextureRec(sprite, rect, posicion, WHITE);
}
