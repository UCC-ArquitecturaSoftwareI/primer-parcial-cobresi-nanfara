//
// Created by Abril on 20/4/2020.
// Esta clase se encarga de dibujar todito
//

#ifndef RAYLIBTEMPLATE_CARTOONIST_H

#include "LightMonkey.h"
#include <raylib.h>
#define RAYLIBTEMPLATE_CARTOONIST_H



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
    virtual void VisitMonkey(LightMonkey *);
//    virtual void VisitNightMonkey() = 0;
//    virtual void VisitRama() = 0;
//    virtual void VisitTree() = 0;
//    virtual void VisitNightButton() = 0;
//    virtual void VisitLightButton() = 0;
//    virtual void VisitStartButton() = 0;



//    void DrawBanana(char lado);
//    Vector2 DrawRama(int lado, int sector, int color);

//    Rectangle GetRamaLightRectangle(int lado, bool animal);
//    Rectangle GetRamaNightRectangle(int lado, bool animal);
//    Rectangle GetRamaNightAnimalRectangle(int lado);
//    Rectangle GetRamaDayAnimalRectangle(int lado);
//    Rectangle GetRamaVaciaRectangle(int lado);
//    Texture2D GetSprite();

};

class VisitorDraw: public Visitor
{
    public:
    void VisitMonkey(LightMonkey *)
    {

    }
//    Vector2 DrawMonkey(int movimiento, int lado);
//    void DrawMonkeyMenu(int tema, Vector2 posicion);
//    Vector2 DrawNightMonkey(int movimiento, int lado);
//    Vector2 DrawRama(int lado, int sector, Rectangle rectangle);
//    void DrawTree(int lado, Vector2 pos);
//    void DrawNightButton(Vector2 position, int estado);
//    void DrawLightButton(Vector2 position, int estado);
//    void DrawStartButton(Vector2 position, int estado, int theme);

};


#endif //RAYLIBTEMPLATE_CARTOONIST_H
