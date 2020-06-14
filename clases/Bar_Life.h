/**
 * @title       Clase Bar_Life
 * @file        Bar_Life.h
 * @version     1.0
 * @date        1/5/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_BAR_LIFE_H
#define RAYLIBTEMPLATE_BAR_LIFE_H

#include <raylib.h>

/**
 * @class barLife
 * @brief Clase que representa la barra de vida
 */

class barLife {
private:
    int height;                  /** int value. Especifica el alto de la barra de vida */

    int width;                   /** int value. Especifica el ancho de la barra de vida */

    int progress;                /** int value. Especifica el progreso de la barra de vida */

    int step;                    /** int value. Especifica el paso de la barra de vida */

    Vector2 position { };         /** Vector2 value. Especifica la posicion de la barra de vida */

    /** int value. Especifica el estado de la barra de vida
    *  Puede tomar los valores: 0(inicio); 1(jugando); -1(perdido)
    */
    int status;
public:

    /**
     * @brief constructor de barLife
     */
    barLife ( );

    /**
     * @brief sobrecarga del operador decremento
     */
    void operator-- ( );

    /**
     * @brief sobrecarga del operador incremento
     */
    void operator++ ( );

    /**
     * @return Valor entero que se corresponde con el progreso de la barra de vida
     */
    int getprogress ( );

    /**
     * @brief grafica la barra de vida en la pantalla
     */
    void drawBarLife ( );

    /**
     * @brief coloca a la barra de vida en un nuevo estado
     * @param newStatus Nuevo estado que debe tomar la barra de vida
     */
    void setStatus ( int newStatus );

    /**
     * @return Valor entero que se corresponde con el estado de la barra de vida
     */
    int getStatus ( );

};


#endif //RAYLIBTEMPLATE_BAR_LIFE_H
