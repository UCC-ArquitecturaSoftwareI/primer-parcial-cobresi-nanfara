//
// Created by Abril on 3/5/2020.
//

#ifndef RAYLIBTEMPLATE_LIGHTTHEMEFACTORY_H

#include "ThemeFactory.h"
#include "Monkey.h"
#include "LightMonkey.h"

#define RAYLIBTEMPLATE_LIGHTTHEMEFACTORY_H


class LightThemeFactory: public ThemeFactory{
public:
    Monkey *createMonkey() override {
        return new LightMonkey;
    }

//    Rama *createRama() override {
//        return new LightRama;
//    }

};


#endif //RAYLIBTEMPLATE_LIGHTTHEMEFACTORY_H
