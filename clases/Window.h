/**
 * @title       Clase Window
 * @file        Window.h
 * @version     1.0
 * @date        21/4/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_WINDOW_H
#define RAYLIBTEMPLATE_WINDOW_H
#include "raylib.h"

/**
 * @class Window
 * @brief Clase que instancia las propiedades de la ventana del juego
 */
class Window{

private:
    int screenWidth;            /** int value. Especifica el ancho de la ventana*/
    int screenHeight;           /** int value. Especifica el ancho de la ventana*/
public:

    /**
     * @brief constructor de Window
     */
    Window()
    {
        screenWidth = 1200;
        screenHeight = 900;
        InitWindow(screenWidth, screenHeight, "Tankey game");
    }

    /**
     *@brief Funcion de cierre de ventana
     */
    static void Descargar()
    {
        CloseWindow();
    }

};


#endif //RAYLIBTEMPLATE_WINDOW_H
