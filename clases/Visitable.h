/**
 * @title       Clase Visitable
 * @file        Visitable.h
 * @version     1.0
 * @date        21/4/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */
#ifndef RAYLIBTEMPLATE_VISITABLE_H
#define RAYLIBTEMPLATE_VISITABLE_H

#include "Visitor.h"
#include "raylib.h"

/** Declaración de clase vacía para resolver bucle de inclusión */
class LightMonkey;
/** Declaración de clase vacía para resolver bucle de inclusión */
class LightRama;
/** Declaración de clase vacía para resolver bucle de inclusión */
class NightMonkey;
/** Declaración de clase vacía para resolver bucle de inclusión */
class NightRama;
/** Declaración de clase vacía para resolver bucle de inclusión */
class Tree;
/** Declaración de clase vacía para resolver bucle de inclusión */
class Button;
/** Declaración de clase vacía para resolver bucle de inclusión */
class NightButton;
/** Declaración de clase vacía para resolver bucle de inclusión */
class LightButton;
/** Declaración de clase vacía para resolver bucle de inclusión */
class StartButton;
/** Declaración de clase vacía para resolver bucle de inclusión */
class Rama;
/** Declaración de clase vacía para resolver bucle de inclusión */
class Monkey;
/** Declaración de clase vacía para resolver bucle de inclusión */
class Skin;

/**
 * @class Visitable
 * @brief Clase que determina a quien se esta visitando
 */
class Visitable
{
public:
    /**
     * @brief constructor de Visitable
     */
    Visitable()= default;

    /**
     * Funcion virtual de aceptacion a un visitante
     * @param v
     */
    virtual void Accept(Visitor &v) = 0;
};
#endif //RAYLIBTEMPLATE_VISITABLE_H
