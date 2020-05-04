//
// Created by Abril on 20/4/2020.
// Esta clase se encarga de dibujar todito
//

#ifndef RAYLIBTEMPLATE_CARTOONIST_H

#include <raylib.h>
#define RAYLIBTEMPLATE_CARTOONIST_H



class Cartoonist
{
private:
    Texture2D sprite;
    Rectangle rect;
    Vector2 position;
public:
    //virtual void Draw() = 0;
    Cartoonist() {
        sprite = LoadTexture("resources/Sprite.png");
        rect = {0,0, 300, 300};
    }

    Vector2 DrawMonkey(int movimiento, int lado);
    void DrawMonkeyMenu(int tema, Vector2 posicion);
    Vector2 DrawNightMonkey(int movimiento, int lado);
//    void DrawBanana(char lado);
//    Vector2 DrawRama(int lado, int sector, int color);
    Vector2 DrawRama(int lado, int sector, Rectangle rectangle);
    void DrawTree(int lado, Vector2 pos);
    Rectangle GetRamaLightRectangle(int lado, bool animal);
    Rectangle GetRamaNightRectangle(int lado, bool animal);
    Rectangle GetRamaNightAnimalRectangle(int lado);
    Rectangle GetRamaDayAnimalRectangle(int lado);
    Rectangle GetRamaVaciaRectangle(int lado);
    Texture2D GetSprite();
    void DrawNightButton(Vector2 position, int estado);
    void DrawLightButton(Vector2 position, int estado);
    void DrawStartButton(Vector2 position, int estado, int theme);

};


#endif //RAYLIBTEMPLATE_CARTOONIST_H
