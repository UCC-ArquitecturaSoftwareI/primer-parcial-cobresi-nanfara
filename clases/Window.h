//
// Created by Abril on 10/5/2020.
//

#ifndef RAYLIBTEMPLATE_WINDOW_H
#define RAYLIBTEMPLATE_WINDOW_H
#include "raylib.h"


class Window {
private:
    int screenWidth;
    int screenHeight;
public:
    Window()
    {
        screenWidth = 1200;
        screenHeight = 900;
        InitWindow(screenWidth, screenHeight, "Tankey game");
    }
//    ~Window(){
//        CloseWindow();
//    }
    void Descargar()
    {
        CloseWindow();
    }

};


#endif //RAYLIBTEMPLATE_WINDOW_H
