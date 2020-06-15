/**
 * @title       Clase Visitor
 * @file        Visitor.h
 * @version     1.0
 * @date        21/4/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_VISITOR_H
#define RAYLIBTEMPLATE_VISITOR_H

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
/** Declaración de clase vacía para resolver bucle de inclusión */
class TreeVetas;


/**
 * @class Visitor
 * @brief Clase que visita un objeto
 */
class Visitor {
public:
    Rectangle rect{};           /** Rectangle value. Especifica las cordenadas de la textura que se corresponden a lo que se visita*/
    Vector2 position{};         /** Vector2 value. Especifica la posicion de lo que se visita */

    /**
     * @brief constructor de la clase Visitor
     */
    Visitor() {
        rect = {0, 0, 300, 300};
    }

    /**
     * Funcion virtual de visita a un visitante
     * @param NightMonkey
     */
    virtual void Visit(NightMonkey &) = 0;

    /**
     * Funcion virtual de visita a un visitante
     * @param LightMonkey
     */
    virtual void Visit(LightMonkey &) = 0;

    /**
     * Funcion virtual de visita a un visitante
     * @param Tree
     */
    virtual void Visit(Tree &) = 0;

    /**
     * Funcion virtual de visita a un visitante
     * @param TreeVetas
     */
    virtual void Visit(TreeVetas &) = 0;

    /**
     * Funcion virtual de visita a un visitante
     * @param Rama
     */
    virtual void Visit(Rama &) = 0;

    /**
     * Funcion virtual de visita a un visitante
     * @param Skin
     */
    virtual void Visit(Skin &) = 0;

    /**
     * Funcion virtual de visita a un visitante
     * @param StartButton
     */
    virtual void Visit(StartButton &) = 0;

    /**
     * Funcion virtual de visita a un visitante
     * @param LightButton
     */
    virtual void Visit(LightButton &) = 0;

    /**
     * Funcion virtual de visita a un visitante
     * @param NightButton
     */
    virtual void Visit(NightButton &) = 0;

    /**
     * Funcion virtual de visita a un visitante
     * @param NightRama
     */
    virtual void Visit(NightRama &) = 0;

    /**
     * Funcion virtual de visita a un visitante
     * @param LightRama
     */
    virtual void Visit(LightRama &) = 0;

};


#endif //RAYLIBTEMPLATE_VISITOR_H
