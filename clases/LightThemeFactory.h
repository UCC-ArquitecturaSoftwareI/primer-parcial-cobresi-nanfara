
/**
 * @title       Clase LightMonkey
 * @file        LightMonkey.h
 * @version     1.0
 * @date        3/5/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */
#ifndef RAYLIBTEMPLATE_LIGHTTHEMEFACTORY_H
#define RAYLIBTEMPLATE_LIGHTTHEMEFACTORY_H

#include "ThemeFactory.h"
#include "Monkey.h"
#include "LightMonkey.h"
#include "LightRama.h"

/**
 * @class LightThemeFactory
 * @brief Clase que crea objetos en tema "Light"
 */
class LightThemeFactory : public ThemeFactory {
public:

    /**
     * @brief crea un LightMonkey
     * @return LightMonkey creado
     */
    Monkey *createMonkey( ) override {
        return new LightMonkey;
    }

    /**
     * @brief crea una LightRama
     * @param lado
     * @param sector
     * @return LightRama creada
     */
    Rama *createRama( int lado , int sector ) override {
        return new LightRama( lado , sector );
    }

};


#endif //RAYLIBTEMPLATE_LIGHTTHEMEFACTORY_H
