
/**
 * @title       Clase Rama
 * @file        Rama.h
 * @version     1.0
 * @date        13/4/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */
#ifndef RAYLIBTEMPLATE_RAMA_H
#define RAYLIBTEMPLATE_RAMA_H

#include "raylib.h"
#include "Visitor.h"
#include "Visitable.h"


class Rama : public Visitable {
public:
    int rama_sector;            /** int value. Especifica el sector de la rama (existen 4 posiciones posibles, comenzando desde la 1)*/
    int lado;                   /** int value. Especifica de que lado del árbol se encuentra la rama (-1 = izquierdo / 1 = derecho)*/
    Vector2 rama_position{ };    /** Vector2 value. Especifica la posicion de la rama */
    bool animal;                /** bool value. Especifica si la rama tiene algún animal (verdadero) o no (falso)*/
    Rectangle rect{ };           /** Rectangle value. Especifica las cordenadas de la textura que se corresponden a la rama */


    /**
     * @brief constructor de la clase Rama
     * @param lado1 Lado en el que se va a construir la rama
     * @param sector1 Sector en el que se va a construir la rama
     */
    Rama( int lado1 , int sector1 ) {
        animal = false;
        lado = lado1;
        rama_sector = sector1;
    }


    /**
     * Retorna el valor almacenado en el atributo rect
     * @return
     */
    Rectangle getRectangle( );

    /**
     * Funcion de aceptacion a un visitante
     * @param v
     */
    void Accept( Visitor & v ) override {
        v.Visit( *this );
    }

    /**
     * @brief cambia a la Rama de posicion
     */
    virtual void Move( ) = 0;

    /**
     * @details dependiendo de los atributos de la rama, calcula las
     * coordenadas del rectangulo de la textura correspondiente y las coloca
     * como el nuevo valor del atributo rect de la rama, esto permite, por ejemplo,
     * que la imagen de la rama cambie de vacia a con animales.
     */
    virtual void GetRectangle( ) = 0;

    /**
     * @brief grafica la Rama en pantalla
     */
    virtual void Draw( );

};


#endif //RAYLIBTEMPLATE_RAMA_H
