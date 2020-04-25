//
// Created by Abril on 20/4/2020.
//
#include <raylib.h>
#include "Cartoonist.h"
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

Vector2 Cartoonist::DrawRama(int key) {

    rect.y = 900;  //siempre en y=900 las ramas

    if (key == 1) {

        position.x = 190;
        position.y = -150;
        rect.x = 900;

        DrawTextureRec(sprite, rect, position, WHITE);

        position.x = 710;
        position.y += 300;   //150 en y
        rect.x = 0;

        DrawTextureRec(sprite, rect, position, WHITE);

        position.x = 190;
        position.y += 300;    //450 en y
        rect.x = 300;

        DrawTextureRec(sprite, rect, position, WHITE);

        position.x = 710;
        position.y += 300;  //750 en y
        rect.x = 600;

        DrawTextureRec(sprite, rect, position, WHITE);
    }
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

//Vector2 Cartoonist::DrawRama(int color, Vector2 pos) {
//
//    rect.y = 900;
//    if (pos.x == 189)
//    {
//        if (color == 1)
//            rect.x = 900;
//        else
//            rect.x = 300;
//    }
//    else
//    {
//        if (color == 1)
//            rect.x = 600;
//        else
//            rect.x = 0;
//    }
//
//     DrawTextureRec(sprite, rect, pos, WHITE);
//    return position;
//}
