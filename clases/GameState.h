
/**
 * @title       Clase GameState
 * @file        GameState.h
 * @version     1.0
 * @date        6/6/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_GAMESTATE_H
#define RAYLIBTEMPLATE_GAMESTATE_H

#include "Manager.h"
#include <string>

/** Declaración de clase vacía para resolver bucle de inclusión */
class SingletonGame;

/**
 * @class GameState
 * @brief Clase hijo de Manager, representa el estado del programa durante el juego
 */
class GameState : public Manager {
public:

    /**
     * @brief constructor de la clase GameState
     */
    GameState( ) : Manager( std::string( "Game" )) { }

    /**
     * @brief actualiza los graficos para cada frame
     * @param singleton
     */
    void Update(  ) override;

    /**
     * @brief destructor de la clase GameState
     */
    ~GameState( ) override = default;

    /**
     * @brief cambia el estado del programa a Menu
     * @param singleton
     */
    void Menu( SingletonGame *singleton ) override;

    /**
     * @brief cambia el estado del programa a End
     * @param singleton
     */
    void End( SingletonGame *singleton ) override;

};


#endif //RAYLIBTEMPLATE_GAMESTATE_H
