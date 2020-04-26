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
    DrawRama(lado, rama_sector, color);
}

void Rama::Move() {
    if (rama_sector == 4)
    {
        rama_sector = 1;
    }
    else
        rama_sector = rama_sector +1;
    rama_position = DrawRama(lado, rama_sector, color);
}
/*
void Rama::Move() {
    while(rama_position.y < 900){     //colision

            //if (rama_position.y==-150 ||rama_position.y==150 || rama_position.y==450 || rama_position.y==750){

                rama_position.y+=10;
                DrawRama(1);
            //}

        }
}
*/
Rectangle Rama::getRectangle() {
    Rectangle rec_rama = {rama_position.x, rama_position.y, 300, 300};
    return rec_rama;
}

void Rama::SetDatos(int lado1, int sector1) {
        lado = lado1;
        rama_sector = sector1;
        color = 1; //Ver como cambiar color
        rama_position = DrawRama(lado, rama_sector, color); //ver de pasar rama
}

/*
=======
    while(rama_position2.y < 900){
>>>>>>> rama

        rama_position2.y += 100;  //150 + 100
         DrawRama2();   //pos.y=250}
    }
 }
 */