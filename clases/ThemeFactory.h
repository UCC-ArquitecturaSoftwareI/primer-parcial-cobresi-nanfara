//
// Created by Abril on 3/5/2020.
//

#ifndef RAYLIBTEMPLATE_THEMEFACTORY_H

#include "Monkey.h"
#include "Rama.h"
#define RAYLIBTEMPLATE_THEMEFACTORY_H


class ThemeFactory {
public:
    virtual Monkey* createMonkey()=0;
    virtual Rama* createRama(int lado, int sector)=0;
};


#endif //RAYLIBTEMPLATE_THEMEFACTORY_H
