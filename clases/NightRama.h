
/**
 * @title       Clase NightMonkey
 * @file        NightMonkey.h
 * @version     1.0
 * @date        4/5/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_NIGHTRAMA_H
#define RAYLIBTEMPLATE_NIGHTRAMA_H

#include "Rama.h"
#include "Visitor.h"
#include "Visitable.h"

/**
 * @class NightRama
 * @brief Clase que representa a las ramas en su tema "Night"
 */
class NightRama : public Rama {
public:
    /**
     * @brief constructor de la clase NightRama
     * @param lado1 Lado en el que se va a construir la rama
     * @param sector1 Sector en el que se va a construir la rama
     */
    NightRama( int lado1 , int sector1 ) : Rama( lado1 , sector1 ) {
        GetRectangle( );
        Draw( );
    }

    /**
     * @brief cambia a la NightRama de posicion
     */
    void Move( ) override;

    /**
     * Funcion de aceptacion a un visitante
     * @param v
     */
    void Accept( Visitor & v ) override {
        v.Visit( * this );
    }

    /**
     * @brief grafica la NightRama en pantalla
     */
    void Draw( ) override;

    /**
     * @details dependiendo de los atributos de la rama, calcula las
     * coordenadas del rectangulo de la textura correspondiente y las coloca
     * como el nuevo valor del atributo rect de la rama, esto permite, por ejemplo,
     * que la imagen de la rama cambie de vacia a con animales.
     */
    void GetRectangle( ) override;
};


#endif //RAYLIBTEMPLATE_NIGHTRAMA_H
