
/**
 * @title       Clase SingletonGame
 * @file        SingletonGame.h
 * @version     1.0
 * @date        21/4/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_SINGLETONGAME_H
#include <raylib.h>
#include "Bar_Life.h"
#include "Audio.h"
#include "Window.h"
#include <vector>
#define RAYLIBTEMPLATE_SINGLETONGAME_H

/** Declaración de clase vacía para resolver bucle de inclusión */
class Manager;

/** Declaración de clase vacía para resolver bucle de inclusión */
class SuperTree;

/** Declaración de clase vacía para resolver bucle de inclusión */
class Button;

/** Declaración de clase vacía para resolver bucle de inclusión */
class ThemeFactory;

/** Declaración de clase vacía para resolver bucle de inclusión */
class LightThemeFactory;

/** Declaración de clase vacía para resolver bucle de inclusión */
class NightThemeFactory;

/** Declaración de clase vacía para resolver bucle de inclusión */
class Rama;

/** Declaración de clase vacía para resolver bucle de inclusión */
class Monkey;

/** Declaración de clase vacía para resolver bucle de inclusión */
class Skin;

/**
 * @class NightRama
 * @brief Clase que instancia de manera unica la creacion de todos los objetos del programa
 */

class SingletonGame {
private:
    /**
     * @brief constructor de la clase SingletonGame
     */
    SingletonGame();

    Manager *m_pState;              /** Instancia un puntero al objeto Manager (clase padre de los estados del programa)*/


public:
    Texture2D sprite;               /** Crea Texture2D*/
    Window window;                  /** Crea Window*/
    Audio music;                    /** Crea Audio*/
    Monkey *player;                 /** Crea puntero a un Monkey*/
    SuperTree *tree;                /** Crea puntero a un SuperTree*/
    bool GameOver;                  /** bool value GameOver. Especifica si ocurre una colision*/
    int score;                      /** int value. Especifica el puntaje del juego*/
    barLife barL;                   /** Crea barLife*/
    ThemeFactory *tf;               /** Crea puntero a un ThemeFactore*/
    bool start;                     /** bool value start. Especifica si el juego dio inicio*/
    Color colorBackground;          /** Crea colorBackground*/
    Color colorText;                /** Crea colorText*/
    std::vector<Rama*> Ramas;       /** Crea un vector que va a conterner las 4 ramas que se muestran por pantalla*/
    std::vector<Button*> Botones;   /** Crea un vector que va a conterner los 3 tipos de botones utilizados en el juego*/
    Vector2 mousePoint;             /** Especifica las coordenadas del mouse sobre la pantalla*/
    Skin *TankeySkin;               /** Crea puntero a un TankeySkin*/
    int tema;                       /** int value. Especifica el tema del juego en 1 o 0 para lighttheme o nighttheme*/
    enum State                      /** enum value. Enumeramos un grupo de elementos comunes*/
    {
        ST_MENU,
        ST_GAME,
        ST_END
    };

     /**
     * @brief funcion static utilizada para retornar un singletonGame con todos sus respectivos objetos creados
     */
    static SingletonGame &get(){
        static SingletonGame game;
        return game;
    }

    /**
    * @brief funcion que realiza la descarga de música con la creacion de Audio y Window
    */
    void Descargar(){
        music.Descargar();
        Window::Descargar();
    }

    /**
    * @brief funcion que setea el estado del SingletonGame (GameState, EndState o MenuState)
    * @param State
    */
    void SetState(State state);

    /**
    * @brief funcion que le pasa a Manager un SingletonGame
    */
    void Menu();

    /**
    * @brief funcion que le pasa a Manager un SingletonGame
    */
    void Game();

    /**
    * @brief funcion que le pasa a Manager un SingletonGame
    */
    void End();

    /**
    * @brief funcion que le pasa a Manager un SingletonGame
    */
    void Update();

    /**
    * @brief funcion virtual que destruye un SingletonGame
    */
    virtual ~SingletonGame();

};


#endif //RAYLIBTEMPLATE_SINGLETONGAME_H
