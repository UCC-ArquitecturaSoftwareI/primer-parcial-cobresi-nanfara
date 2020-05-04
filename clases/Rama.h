//
// Created by Abril on 21/4/2020.
//

#ifndef RAYLIBTEMPLATE_RAMA_H

#include "raylib.h"
#include "Cartoonist.h"

#define RAYLIBTEMPLATE_RAMA_H

class Rama: public Cartoonist {
protected:
    int rama_sector; //1, 2, 3 o 4
    int lado; //-1 = izq //1 = derecha
    Vector2 rama_position;
    //int color; //0 = clara // 1 = oscura
    bool animal;
    Rectangle rect;
public:
    Rama(int lado1, int sector1):Cartoonist()
    {
        animal = false;
        lado = lado1;
        rama_sector = sector1;
        //color = GetRandomValue(0,1);
        rama_position = DrawRama(lado, rama_sector, rect = GetRamaVaciaRectangle(lado)); //ver de pasar rama
    }
    //void SetDatos(int lado1, int sector1); //la hice por si es mejor usar el constructor Rama() y desp setear cada dato
    void Draw();
    virtual void Move() = 0;
    //Rectangle selectNightAnimal(int animal);
    Rectangle getRectangle();



};


#endif //RAYLIBTEMPLATE_RAMA_H
