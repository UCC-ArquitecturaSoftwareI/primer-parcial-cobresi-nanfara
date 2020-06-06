//
// Created by Abril on 10/5/2020.
//

#ifndef RAYLIBTEMPLATE_SINGLETONGAME_H
#include <raylib.h>
#include "Bar_Life.h"
#include "Audio.h"
#include "Window.h"
#include <vector>
#define RAYLIBTEMPLATE_SINGLETONGAME_H

class Manager;

class SuperTree;

class Button;

class ThemeFactory;

class LightThemeFactory;

class NightThemeFactory;
//class NightButton;

//class LightButton;

//class StartButton;

class Rama;

class Monkey;

class Skin;

//class TreeVetas;

class SingletonGame {
private:
    SingletonGame();
    Manager *m_pState;


public:
    Texture2D sprite;
    Window window;
    Audio music;
    Monkey *player;
    SuperTree *tree;
    bool GameOver;
    int score;
    barLife barL;
    ThemeFactory *tf;
    bool start;
    Color colorBackground;
    Color colorText;
    std::vector<Rama*> Ramas;
    std::vector<Button*> Botones;
    Vector2 mousePoint;
    Skin *TankeySkin;
    //friend class Manager;
    int tema;
    enum State
    {
        ST_MENU,
        ST_GAME,
        ST_END
    };


    static SingletonGame &get(){
        static SingletonGame game;
        return game;
    }

    void Descargar(){
        music.Descargar();
        window.Descargar();
    }

    void SetState(State state);

    void Menu();
    void Game();
    void End();
    void Update();
    virtual ~SingletonGame();

};


#endif //RAYLIBTEMPLATE_SINGLETONGAME_H
