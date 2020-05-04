//
// Created by Abril on 3/5/2020.
//

#ifndef RAYLIBTEMPLATE_NIGHTTHEMEFACTORY_H
#include "ThemeFactory.h"
#include "Monkey.h"
#include "NightMonkey.h"

#define RAYLIBTEMPLATE_NIGHTTHEMEFACTORY_H


class NightThemeFactory: public ThemeFactory{
public:
    Monkey *createMonkey() override {
    return new NightMonkey;
    }

};


#endif //RAYLIBTEMPLATE_NIGHTTHEMEFACTORY_H
