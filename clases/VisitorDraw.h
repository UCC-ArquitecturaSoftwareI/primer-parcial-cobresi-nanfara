/**
 * @title       Clase VisitorDraw
 * @file        VisitorDraw.h
 * @version     1.0
 * @date        21/4/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_VISITORDRAW_H
#define RAYLIBTEMPLATE_VISITORDRAW_H

#include "Visitor.h"

#include "LightMonkey.h"
#include "LightRama.h"
#include "NightRama.h"
#include "NightMonkey.h"
#include "Tree.h"
#include "MenuElements.h"
#include "Rama.h"
#include "Monkey.h"
#include "TreeVetas.h"

#include "raylib.h"

/**
 * @class VisitorDraw
 * @brief Clase que dibuja lo que se visitó
 */
class VisitorDraw: public Visitor
{
public:
    /**
     * @brief constructor de VisitorDraw
     */
    VisitorDraw():Visitor(){
    }

    /**
     * Funcion de visita y dibujo a un visitante
     * @param NightMonkey
     */
    void Visit(NightMonkey &monkey) override;

    /**
     * Funcion de visita y dibujo a un visitante
     * @param LightMonkey
     */
    void Visit(LightMonkey &monkey) override;

    /**
     * Funcion de visita y dibujo a un visitante
     * @param Tree
     */
    void Visit(Tree &tree) override;

    /**
     * Funcion de visita y dibujo a un visitante
     * @param TreeVetas
     */
    void Visit(TreeVetas &tree) override;

    /**
     * Funcion de visita y dibujo a un visitante
     * @param Rama
     */
    void Visit(Rama &rama) override;

    /**
     * Funcion de visita y dibujo a un visitante
     * @param NightButton
     */
    void Visit(NightButton &button) override;

    /**
     * Funcion de visita y dibujo a un visitante
     * @param LightButton
     */
    void Visit(LightButton &button) override;

    /**
     * Funcion de visita y dibujo a un visitante
     * @param StartButton
     */
    void Visit(StartButton &button) override;

    /**
     * Funcion de visita y dibujo a un visitante
     * @param NightRama
     */
    void Visit(NightRama &rama) override {
        CallRama(rama);
    }

    /**
     * Funcion de visita y dibujo a un visitante
     * @param LightRama
     */
    void Visit(LightRama &rama) override {
        CallRama(rama);
    }

     /**
     * Funcion de visita y dibujo a un visitante
     * @param Skin
     */
    void Visit(Skin &skin) override;

    /**
     * Funcion en donde se determina el lado(-1/1) y sector(1/2/3/4) de la rama a visitar y dibujar
     * @param Rama
     */
    void CallRama(Rama &rama);
};



#endif //RAYLIBTEMPLATE_VISITORDRAW_H
