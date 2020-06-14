
/**
 * @title       Clase LightMonkey
 * @file        LightMonkey.h
 * @version     1.0
 * @date        3/5/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */
#ifndef RAYLIBTEMPLATE_NIGHTTHEMEFACTORY_H
#define RAYLIBTEMPLATE_NIGHTTHEMEFACTORY_H

#include "ThemeFactory.h"
#include "Monkey.h"
#include "NightMonkey.h"
#include "NightRama.h"

/**
 * @class NightThemeFactory
 * @brief Clase que crea objetos en tema "Night"
 */
class NightThemeFactory : public ThemeFactory {
public:

    /**
     * @brief crea un NightMonkey
     * @return NightMonkey creado
     */
    Monkey *createMonkey( ) override {
        return new NightMonkey;
    }

    /**
     * @brief crea una NightRama
     * @param lado
     * @param sector
     * @return NightRama creada
     */
    Rama *createRama( int lado , int sector ) override {
        return new NightRama( lado , sector );
    }
};


#endif //RAYLIBTEMPLATE_NIGHTTHEMEFACTORY_H
