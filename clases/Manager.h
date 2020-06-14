
/**
 * @title       Clase LightMonkey
 * @file        LightMonkey.h
 * @version     1.0
 * @date        10/5/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */
#ifndef RAYLIBTEMPLATE_MANAGER_H
#define RAYLIBTEMPLATE_MANAGER_H

#include "raylib.h"
#include <string>

/** Declaración de clase vacía para resolver bucle de inclusión */
class SingletonGame;

/**
 * @class Manager
 * @brief clase padre de los estados del programa
 */
class Manager {
private:
    std::string m_name;
public:
    /**
     * @brief constructor de la clase Manager
     * @param name
     */
    Manager( std::string name );

    /**
     * @brief destructor de la clase Manager
     */
    virtual ~Manager( );

    /**
     * @brief solo se accedera es esta definición de la función virtual en
     * caso de que se solicite una transición de estado inválida
     * @param singleton
     */
    virtual void Menu( SingletonGame *singleton );

    /**
     * @brief solo se accedera es esta definición de la función virtual en
     * caso de que se solicite una transición de estado inválida
     * @param singleton
     */
    virtual void Game( SingletonGame *singleton );

    /**
     * @brief solo se accedera es esta definición de la función virtual en
     * caso de que se solicite una transición de estado inválida
     * @param singleton
     */
    virtual void End( SingletonGame *singleton );

    /**
     * @brief actualiza los graficos para cada frame
     * @param singleton
     */
    virtual void Update( SingletonGame *singleton );

};


#endif //RAYLIBTEMPLATE_MANAGER_H
