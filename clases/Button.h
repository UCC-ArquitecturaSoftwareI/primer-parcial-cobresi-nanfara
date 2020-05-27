//
// Created by Abril on 4/5/2020.
//

#ifndef RAYLIBTEMPLATE_BUTTON_H

#include "Visitor.h"
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
	virtual void Accept(Visitor&) = 0;
};

class LightButton: public Button
{
public:
    void DrawButton()
    {
        VisitorDraw *v;
	Accept(v);
    }
    void Draw()
 	{ DrawButton();
	}
     void Draw(Vector2 pos, int est)
     {
	position = pos;
	estado = est;
        DrawButton();
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
	virtual void Accept(Visitor& v) { 
	v.Visit(this); 
	}
};

class NightButton: public Button
{
public:
    void DrawButton()
    {
        VisitorDraw *v;
	Accept(v);
    }
    void Draw()
 	{ DrawButton();
	}
    void Draw(Vector2 pos, int est)
    {
        position = pos;
	estado = est;
        DrawButton();
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
	virtual void Accept(Visitor& v) { 
	v.Visit(this); 
	}
};

class StartButton: public Button
{
public:
	DrawStartButton()
{
VisitorDraw *v;
	Accept(v);
}
    void Draw()
    {
        DrawStartButton(position, estado, theme);
    }
    void Draw(Vector2 pos, int est)
    {
	position = pos;
	estado = est;
        DrawStartButton();
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
	virtual void Accept(Visitor& v) { 
	v.Visit(this); 
	}
};

class Skin
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
	DrawMonkeyMenu(){
VisitorDraw *v;
	Accept(v);
}

 void Accept(Visitor& v) { 
	v.Visit(this); 
	}
};
#endif //RAYLIBTEMPLATE_BUTTON_H
