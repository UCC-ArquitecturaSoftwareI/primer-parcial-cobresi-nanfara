
/**
 * @title       Clase Monkey
 * @file        Monkey.h
 * @version     1.0
 * @date        13/4/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */
#ifndef RAYLIBTEMPLATE_MONKEY_H
#define RAYLIBTEMPLATE_MONKEY_H

#include "raylib.h"
#include <string>
#include "Visitor.h"
#include "Visitable.h"

/**
 * @class Monkey
 * @brief Clase que representa a Tankey en el juego
 */
class Monkey : public Visitable {
public:
    Vector2 monkey_position { };      /** Vector2 value. Especifica la posicion del mono */
    int lado { };                     /** int value. Especifica de que lado del árbol se encuentra el mono (-1 = izquierdo / 1 = derecho)*/
    Rectangle rect { };               /** Rectangle value. Especifica las cordenadas de la textura que se corresponden al mono */
    int mov = 0;                      /** Refiere a si el mono debe realizar el movimiento de trepar el arbol, puede tomar valores 0 o 1 */

    /**
     * @brief constructor de Monkey
     */
    Monkey( ) = default;

    /**
     *@brief función virtual pura que grafica un Monkey en pantalla
     */
    virtual void Draw( ) = 0;

    /**
     * @brief función de aceptación de un visitante
     */
    void Accept( Visitor & ) override = 0;

    /**
     * @brief función que reacciona al evento de precionar la tecla derecha
     */
    void move_right( );

    /**
     * @brief función que reacciona al evento de precionar la tecla izquierda
     */
    void move_left( );

    /**
     * @brief función que responde a cuando el mono tiene que cambiar de lado del árbol
     */
    void newlado( );

    /**
    * @details dependiendo de los atributos del mono, calcula las
    * coordenadas del rectangulo de la textura correspondiente y las coloca
    * como el nuevo valor del atributo rect del mono, esto permite, por ejemplo,
    * que la gráfica del mono cambie y simule que trepa el árbol
    */
    Rectangle getRectangle( );
};


#endif //RAYLIBTEMPLATE_MONKEY_H
