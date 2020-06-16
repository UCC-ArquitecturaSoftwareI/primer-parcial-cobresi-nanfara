
/**
 * @title       Clase EndState
 * @file        EndState.h
 * @version     1.0
 * @date        6/6/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_ENDSTATE_H
#define RAYLIBTEMPLATE_ENDSTATE_H

#include "Manager.h"
#include <string>

/** Declaración de clase vacía para resolver bucle de inclusión */
class SingletonGame;

/**
 * @class EndState
 * @brief Clase hijo de Manager, representa el estado de fin de juego
 */
class EndState : public Manager {
public:
    /**
     * @brief constructor de la clase EndState
     */
    EndState( ) : Manager( std::string( "End" )) { }

    /**
     * @brief actualiza los graficos para cada frame
     * @param singleton
     */
    void Update(  ) override;

    /**
     * @brief destructor de la clase EndState
     */
    ~EndState( ) override = default;

    /**
     * @brief cambia el estado del programa a Menu
     * @param singleton
     */
    void Menu( SingletonGame *singleton ) override;

    /**
     * @brief cambia el estado del programa a Game
     * @param singleton
     */
    void Game( SingletonGame *singleton ) override;
};


#endif //RAYLIBTEMPLATE_ENDSTATE_H
