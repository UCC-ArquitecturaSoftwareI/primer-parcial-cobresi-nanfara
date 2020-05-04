//
// Created by Abril on 4/5/2020.
//

#ifndef RAYLIBTEMPLATE_BUTTON_H

#include "Cartoonist.h"
#define RAYLIBTEMPLATE_BUTTON_H


class Button: public Cartoonist {
public:
    int theme;
    int estado;
    Vector2 position;
    Rectangle rectangulo;
    virtual void Draw() = 0;
    virtual void Draw(Vector2 pos, int est) = 0;
    virtual Rectangle GetRectangle() = 0;
};

class LightButton: public Button
{
public:
    void Draw()
    {
        DrawLightButton(position, estado);
    }
     void Draw(Vector2 pos, int est)
     {
        DrawLightButton(pos, est);
     }

    LightButton()
    {
        position.x = 600;
        position.y = 50;
        estado = 0;
        rectangulo = {position.x + 60, position.y + 60, 175, 175};
        Draw();
    }
    Rectangle GetRectangle()
    {
        return rectangulo;
    }
};

class NightButton: public Button
{
public:
    void Draw()
    {
        DrawNightButton(position, estado);
    }
    void Draw(Vector2 pos, int est)
    {
        DrawNightButton(pos, est);
    }

    NightButton()
    {
        position.x = 300;
        position.y = 50;
        estado = 0;
        rectangulo = {position.x + 60, position.y + 60, 175, 175};
        Draw();
    }
    Rectangle GetRectangle()
    {
        return rectangulo;
    }
};

class StartButton: public Button
{
public:
    void Draw()
    {
        DrawStartButton(position, estado, theme);
    }
    void Draw(Vector2 pos, int est)
    {
        DrawStartButton(pos, est, theme);
    }

    StartButton()
    {
        theme = 0;
        position.x = 450;
        position.y = 650;
        rectangulo = {position.x + 10, position.y + 100, 280, 120};
        estado = 0;
        Draw();
    }
    Rectangle GetRectangle()
    {
        return rectangulo;
    }
    void SetTheme(int i)
    {
        theme = i;
    }
};

//Sacar esto de aca
class Skin: public Cartoonist
{
public:
    int tema;
    Vector2 position;
    Skin ()
    {
        tema = 0;
        position.x = 450;
        position.y = 400;
    }
    void Draw()
    {
        DrawMonkeyMenu(tema, position);
    }
};
#endif //RAYLIBTEMPLATE_BUTTON_H
