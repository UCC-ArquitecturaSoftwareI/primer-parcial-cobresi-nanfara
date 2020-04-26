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
//    DrawRama1();
    DrawRama2();
//    DrawRama3();
//    DrawRama4();
}

void Rama::Move() {

    while(rama_position2.y < 900){

        rama_position2.y += 100;  //150 + 100
         DrawRama2();   //pos.y=250}
    }
 }
