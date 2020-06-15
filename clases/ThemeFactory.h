
/**
 * @title       Clase ThemeFactory
 * @file        ThemeFactory.h
 * @version     1.0
 * @date        13/4/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_THEMEFACTORY_H

#include "Monkey.h"
#include "Rama.h"
#define RAYLIBTEMPLATE_THEMEFACTORY_H

/**
 * @class ThemeFactory
 * @brief Clase que representa el tema del juego
 */
class ThemeFactory {
public:

    /**
     * @brief función virtual que permite crear un mono de un tema (Light/Night)
     */
    virtual Monkey* createMonkey() =0;

    /**
     * @brief función virtual que permite crear una rama de un tema (Light/Night)
     * @param lado Lado en que se crea la rama (-1 = izquierdo / 1 = derecho)
     * @param sector Sector de la pantalla (1,2,3,4)
     */
    virtual Rama* createRama(int lado, int sector) =0;
};


#endif //RAYLIBTEMPLATE_THEMEFACTORY_H
