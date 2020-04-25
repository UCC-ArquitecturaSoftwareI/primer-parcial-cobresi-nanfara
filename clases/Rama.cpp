//
// Created by Abril on 21/4/2020.
//

#include "Rama.h"
#include <string>


//Rama::Rama(){
//
//(int lado1, int color1) {
//    rama_position.y = 150;
//    lado = lado1;
//    color = color1;
//    if (lado == -1)
//        rama_position.x = 189;
//    else
//        rama_position.x = 711;
//    DrawRama(color, rama_position);
//
//}

void Rama::Draw() {
    DrawRama(key);
}

void Rama::Move() {

    while(rama_position.y < 900){     //colision

            //if (rama_position.y==-150 ||rama_position.y==150 || rama_position.y==450 || rama_position.y==750){

                rama_position.y+=10;
                DrawRama(1);
            //}

        }
}



