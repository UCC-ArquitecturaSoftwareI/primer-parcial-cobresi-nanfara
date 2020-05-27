//
// Created by Abril on 20/4/2020.
// Esta clase se encarga de dibujar todito
//

#ifndef RAYLIBTEMPLATE_CARTOONIST_H

#include "LightMonkey.h"
#include "NightMonkey.h"
#include "Tree.h"
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
    virtual void Visit(NightMonkey *);
    virtual void Visit(LightMonkey *);
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
    if (lado == -1)
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
    if (lado == -1)
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

//    void DrawMonkeyMenu(int tema, Vector2 posicion);
//    Vector2 DrawRama(int lado, int sector, Rectangle rectangle);
//    void DrawNightButton(Vector2 position, int estado);
//    void DrawLightButton(Vector2 position, int estado);
//    void DrawStartButton(Vector2 position, int estado, int theme);

};


#endif //RAYLIBTEMPLATE_CARTOONIST_H
