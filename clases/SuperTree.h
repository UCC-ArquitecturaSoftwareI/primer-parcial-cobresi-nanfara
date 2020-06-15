/**
 * @title       Clase SuperTree
 * @file        SuperTree.h
 * @version     1.0
 * @date        13/4/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_SUPERTREE_H
#define RAYLIBTEMPLATE_SUPERTREE_H

#include "Visitable.h"

/**
 * @class SuperTree
 * @brief Clase que representa el arbol
 */
class SuperTree: public Visitable
{
public:
    int lado{};                     /** int value. Especifica de que lado del árbol se encuentra la rama (-1 = izquierdo / 1 = derecho)*/
    Vector2 position{};             /** Vector2 value. Especifica la posicion del arbol*/

    /**
     * @brief función virtual que indica cómo graficar al arbol en pantalla
     */
    virtual void DrawTree() = 0;

    /**
     * Funcion de aceptacion a un visitante
     * @param v
     */
    void Accept(Visitor& v) override =0;

    /**
     * @brief grafica al arbol en pantalla
     */
    virtual void Draw() = 0;
};

#endif //RAYLIBTEMPLATE_SUPERTREE_H
