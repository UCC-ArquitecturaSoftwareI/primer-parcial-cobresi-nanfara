
/**
 * @title       Clase Tree
 * @file        Tree.h
 * @version     1.0
 * @date        21/4/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */
#ifndef RAYLIBTEMPLATE_TREE_H
#define RAYLIBTEMPLATE_TREE_H

#include "Visitor.h"
#include "Visitable.h"
#include "SuperTree.h"
#include "raylib.h"

/**
 * @class Tree
 * @brief Clase que representa al tronco
 */
class Tree : public SuperTree {
public:
    /**
     * @brief función que indica cómo graficar al arbol en pantalla
     */
    void DrawTree( ) override;

    /**
     * Funcion de aceptacion a un visitante
     * @param v
     */
    void Accept( Visitor & v ) override {
        v.Visit( *this );
    }

    /**
     * @brief grafica al arbol en pantalla
     */
    void Draw( ) override;
};

#endif //RAYLIBTEMPLATE_TREE_H
