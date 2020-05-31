//
// Created by Abril on 3/5/2020.
//

#ifndef RAYLIBTEMPLATE_LIGHTTHEMEFACTORY_H
#define RAYLIBTEMPLATE_LIGHTTHEMEFACTORY_H
#include "ThemeFactory.h"
#include "Monkey.h"
#include "LightMonkey.h"
#include "LightRama.h"


class LightThemeFactory: public ThemeFactory{
public:
    Monkey *createMonkey() override {
        return new LightMonkey;
    }
    //Color de fondo

    Rama *createRama(int lado, int sector) {
        return new LightRama(lado, sector);
    }

};


#endif //RAYLIBTEMPLATE_LIGHTTHEMEFACTORY_H
