//
// Created by Abril on 1/6/2020.
//

#ifndef RAYLIBTEMPLATE_VISITABLE_H
#define RAYLIBTEMPLATE_VISITABLE_H

#include "Visitor.h"
#include "raylib.h"

/* Declaración de clases vacías para resolver bucle de inclusión */
class LightMonkey;
class LightRama;
class NightMonkey;
class NightRama;
class Tree;
class Button;
class NightButton;
class LightButton;
class StartButton;
class Rama;
class Monkey;
class Skin;

class Visitable
{
public:
    Visitable(){}
    virtual void Accept(Visitor &v) = 0;
};
#endif //RAYLIBTEMPLATE_VISITABLE_H
