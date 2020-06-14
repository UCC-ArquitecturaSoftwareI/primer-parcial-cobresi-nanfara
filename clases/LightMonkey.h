
/**
 * @title       Clase LightMonkey
 * @file        LightMonkey.h
 * @version     1.0
 * @date        3/5/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_LIGHTMONKEY_H
#define RAYLIBTEMPLATE_LIGHTMONKEY_H

#include "raylib.h"
#include "Monkey.h"
#include "Visitor.h"
#include "Visitable.h"

/**
 * @class LightMonkey
 * @brief Clase que representa a Tankey con su tema "light"
 */
class LightMonkey : public Monkey {
public:

    /**
     * @brief constructor de la clase LightMonkey
     */
    LightMonkey( ) : Monkey( ) {
        rect = { 0 , 300 , 300 , 300 };
        lado = 1;
        Draw( );
    }

    /**
     * Funcion de aceptacion a un visitante
     * @param v
     */
    void Accept( Visitor & v ) override {
        v.Visit( * this );
    }

    /**
     * @brief grafica el LightMonkey en pantalla
     */
    void Draw( ) override;
};


#endif //RAYLIBTEMPLATE_LIGHTMONKEY_H
