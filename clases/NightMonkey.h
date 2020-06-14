
/**
 * @title       Clase NightMonkey
 * @file        NightMonkey.h
 * @version     1.0
 * @date        3/5/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_NIGHTMONKEY_H
#define RAYLIBTEMPLATE_NIGHTMONKEY_H

#include "raylib.h"
#include "Monkey.h"
#include "Visitor.h"
#include "Visitable.h"

/**
 * @class NightMonkey
 * @brief Clase que representa a Tankey con su tema "Night"
 */
class NightMonkey : public Monkey { //Override??
public:

    /**
     * @brief constructor de la clase nightMonkey
     */
    NightMonkey( ) : Monkey( ) {
        rect = { 0 , 1500 , 300 , 300 };
        lado = 1;
        Draw( );
    }

    /**
     * Funcion de aceptacion a un visitante
     * @param v
     */
    void Accept( Visitor & v ) override {
        v.Visit( *this );
    }

    /**
     * @brief grafica el LightMonkey en pantalla
     */
    void Draw( ) override;
};


#endif //RAYLIBTEMPLATE_NIGHTMONKEY_H
