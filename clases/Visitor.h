//
// Created by Abril on 1/6/2020.
//

#ifndef RAYLIBTEMPLATE_VISITOR_H
#define RAYLIBTEMPLATE_VISITOR_H

#include "raylib.h"

/* Declaración de clases vacías para resolver bucle de inclusión */
class LightMonkey;
class LightRama;
class NightMonkey;
class NightRama;
class Tree;
class Button;
class NightButton;
class LightButton;
class StartButton;
class Rama;
class Monkey;
class Skin;

class Visitor
{
public:
    Texture2D sprite;
    Rectangle rect;
    Vector2 position;
    //virtual void Draw() = 0;
    Visitor() {
        sprite = LoadTexture("resources/Sprite.png");
        rect = {0,0, 300, 300};
    }
    virtual void Visit(NightMonkey &);
    virtual void Visit(LightMonkey &);
    virtual void Visit(Tree &);
    virtual void Visit(Rama &);
    virtual void Visit(Skin &);
    virtual void Visit(StartButton &);
    virtual void Visit(LightButton &);
    virtual void Visit(NightButton &);
    virtual void Visit(NightRama &);
    virtual void Visit(LightRama &);

//    Texture2D GetSprite();
};





#endif //RAYLIBTEMPLATE_VISITOR_H
