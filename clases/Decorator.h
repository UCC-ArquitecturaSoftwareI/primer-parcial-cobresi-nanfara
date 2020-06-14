
/**
 * @title       Clase Decorator
 * @file        Decorator.h
 * @version     1.0
 * @date        01/06/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_DECORATOR_H
#define RAYLIBTEMPLATE_DECORATOR_H

#include "SuperTree.h"

/**
 * @class Decorator
 * @brief Clase padre de las decoraciones concretas
 */

class Decorator : public SuperTree {

private:
    SuperTree *r_SuperTree;

protected:

    /**
     * @brief constructor de Decorator
     * @param tree
     */
    Decorator ( SuperTree *tree ) : r_SuperTree ( tree ) { };

    /**
     * @brief funcion virtual que dibuja el arbol en pantalla
     */
    virtual void DrawTree ( ) {
        r_SuperTree->DrawTree ( );
    }

};

#endif //RAYLIBTEMPLATE_DECORATOR_H
