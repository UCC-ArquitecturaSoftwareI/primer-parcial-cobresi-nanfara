
/**
 * @title       Clase EndState
 * @file        EndState.h
 * @version     1.0
 * @date        6/6/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_MENUSTATE_H
#define RAYLIBTEMPLATE_MENUSTATE_H

#include "Manager.h"
#include <string>

/** Declaración de clase vacía para resolver bucle de inclusión */
class SingletonGame;

/**
 * @class MenuState
 * @brief Clase hijo de Manager, representa el estado inicial
 */
class MenuState : public Manager {
public:
    /**
     * @brief constructor de la clase MenuState
     */
    MenuState( ) : Manager( std::string( "Menu" )) { }

    /**
     * @brief actualiza los graficos para cada frame
     * @param singleton
     */
    void Update( ) override;

    /**
     * @brief cambia el estado del programa a Game
     * @param singleton
     */
    void Game( SingletonGame *singleton ) override;

    /**
     * @brief cambia el estado del programa a End
     * @param singleton
     */
    void End( SingletonGame *singleton ) override;

    /**
     * @brief destructor de la clase MenuState
     */
    ~MenuState( ) override = default;
};


#endif //RAYLIBTEMPLATE_MENUSTATE_H
