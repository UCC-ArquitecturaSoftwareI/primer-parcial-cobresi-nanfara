//
// Created by Abril on 21/4/2020.
//

#include "Rama.h"
#include <string>


Rama::Rama(int lado1, int color1) {
    rama_position.y = 300;
    lado = lado1;
    color = color1;
    if (lado == -1)
        rama_position.x = 189;
    else
        rama_position.x = 711;
    DrawRama(color, rama_position);
}

void Rama::Draw() {
    DrawRama(color, rama_position);
}
//
//void Rama::Move() {
//
//    struct Ramita R[50];
//    //rama_position.x = 189;
//
//    for (int i = 0; R[i].active ; i++)
//    {
//        R[i].rama_position.x = 189;
//        R[i].rama_position.y = -20;
//        R[i].active = true;
//
//            while (R[i].rama_position.y < 900)
//            {
//                //R[i].rama_position.y+=100;
//                R[i].rama_position.y += R[i].speedr.y;
//                DrawRama(R[i].color, R[i].rama_position);
//
//                //if(CheckCollisionRecs())
//            }
//    }
//}

//    for (int i = 0; i < activeEnemies; i++)
//    {
//        if (R[i].active)
//            DrawRama(R[i].color, R[i].rama_position);
//    }

//    for (int j = 0; j < activeEnemies; j++)
//    {
//        if (R[j].active)
//        {
//            if (CheckCollisionRecs(, enemy[j].rect))
//            {
//                // hide the bullet
//                shoot[i].active = false;
//                // reset enemy position
//                enemy[j].rect.x = GetRandomValue(screenWidth, screenWidth + 1000);
//                enemy[j].rect.y = GetRandomValue(0, screenHeight - enemy[j].rect.height);
//                shootRate = 0;
//            }
//        }
//    }


