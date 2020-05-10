//
// Created by Abril on 10/5/2020.
//

#ifndef RAYLIBTEMPLATE_SINGLETONGAME_H
#include <raylib.h>
#include "Monkey.h"
#include "Tree.h"
#include "Rama.h"
#include "Bar_Life.h"
#include "ThemeFactory.h"
#include "LightThemeFactory.h"
#include "NightThemeFactory.h"
#include "Button.h"
#include "Audio.h"
#include "Window.h"
#include <vector>
#define RAYLIBTEMPLATE_SINGLETONGAME_H


class SingletonGame {
private:
    SingletonGame() {
        bool GameOver;
        score = 0;
        GameOver = false;
        start = false;
        colorBackground = SKYBLUE;
        colorText = BLACK;
        mousePoint = { 0.0f, 0.0f};
        tema = 0;
    }


public:
    Window window;
    Audio music;
    Monkey *player;
    Tree *tree;
    bool GameOver;
    int score;
    barLife barLife;
    ThemeFactory *tf;
    bool start;
    Color colorBackground;
    Color colorText;
    std::vector<Rama*> Ramas;
    std::vector<Button*> Botones;
    Vector2 mousePoint;
    Skin *TankeySkin;
    int tema;

    static SingletonGame &get(){
        static SingletonGame game;
        return game;
    }

    void Descargar(){
        music.Descargar();
        window.Descargar();
    }
};


#endif //RAYLIBTEMPLATE_SINGLETONGAME_H
