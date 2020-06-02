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

class Visitor {
public:
    Texture2D sprite;
    Rectangle rect;
    Vector2 position;

    //virtual void Draw() = 0;
    Visitor() {
        sprite = LoadTexture("resources/Sprite.png");
        rect = {0, 0, 300, 300};
    }

    virtual void Visit(NightMonkey &) = 0;

    virtual void Visit(LightMonkey &) = 0;

    virtual void Visit(Tree &) = 0;

    virtual void Visit(Rama &) = 0;

    virtual void Visit(Skin &) = 0;

    virtual void Visit(StartButton &) = 0;

    virtual void Visit(LightButton &) = 0;

    virtual void Visit(NightButton &) = 0;

    virtual void Visit(NightRama &) = 0;

    virtual void Visit(LightRama &) = 0;

//    Texture2D GetSprite();
};


#endif //RAYLIBTEMPLATE_VISITOR_H
