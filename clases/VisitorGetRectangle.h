/**
 * @title       Clase VisitorGetRectangle
 * @file        VisitorGetRectangle.h
 * @version     1.0
 * @date        21/4/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_VISITORGETRECTANGLE_H
#define RAYLIBTEMPLATE_VISITORGETRECTANGLE_H

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
 * @class VisitorGetRectangle
 * @brief Clase que devuelve las coordenadas de la textura de lo que necesito/visito
 */
class VisitorGetRectangle: public Visitor
{
public:

    /**
     * @brief constructor de VisitorGetRectangle
     */
    VisitorGetRectangle():Visitor(){
    }
    /**
     * Funcion de visita a una textura
     * @param NightMonkey
     */
    void Visit(NightMonkey &o) override {}

    /**
     * Funcion de visita a una textura
     * @param LightMonkey
     */
    void Visit(LightMonkey &o) override {}

    /**
     * Funcion de visita a una textura
     * @param Tree
     */
    void Visit(Tree &o) override {}

    /**
     * Funcion de visita a una textura
     * @param TreeVetas
     */
    void Visit(TreeVetas &o) override {}

    /**
     * Funcion de visita a una textura
     * @param Rama
     */
    void Visit(Rama &o) override {}

    /**
     * Funcion de visita a una textura
     * @param Skin
     */
    void Visit(Skin &o) override {}

    /**
     * Funcion de visita a una textura
     * @param StartButton
     */
    void Visit(StartButton &o) override {}

    /**
     * Funcion de visita a una textura
     * @param LightButton
     */
    void Visit(LightButton &o) override {}

    /**
     * Funcion de visita a una textura
     * @param NightButton
     */
    void Visit(NightButton &o) override {}

    /**
     * Funcion de visita a una textura
     * @param LightRama
     */
    void Visit(LightRama &rama) override
    {
        if (rama.animal)
            rect = GetRamaDayAnimalRectangle(rama.lado);
        else
            rect = GetRamaVaciaRectangle(rama.lado);
        rama.rect = rect;
    }

    /**
     * Funcion de visita a una textura
     * @param NightRama
     */
    void Visit(NightRama &rama) override{
        if (rama.animal)
            rect = GetRamaNightAnimalRectangle(rama.lado);
        else
            rect = GetRamaVaciaRectangle(rama.lado);
        rama.rect = rect;
    }

    /**
     * Funcion de retorno de la textura de una NightRama con animal
     * @param lado Lado determina si es una rama a la izq (-1) o a la derecha (1)
     */
    Rectangle GetRamaNightAnimalRectangle(int lado){
        int animal = GetRandomValue(0, 3);
        if (lado == -1)
        {
            switch(animal)
            {
                case 0:
                    rect.y = 2100;
                    rect.x = 300;
                    break;
                case 1:
                    rect.y = 2100;
                    rect.x = 900;
                    break;
                case 2:
                    rect.y = 2400;
                    rect.x = 300;
                    break;
                case 3:
                    rect.y = 2400;
                    rect.x = 900;
            }
        }
        else
        {
            switch(animal)
            {
                case 0:
                    rect.y = 2100;
                    rect.x = 0;
                    break;
                case 1:
                    rect.y = 2100;
                    rect.x = 600;
                    break;
                case 2:
                    rect.y = 2400;
                    rect.x = 0;
                    break;
                case 3:
                    rect.y = 2400;
                    rect.x = 600;
            }
        }
        return rect;
    }

    /**
     * Funcion de retorno de la textura de una LightRama con animal
     * @param lado Lado determina si es una rama a la izq (-1) o a la derecha (1)
     */
    Rectangle GetRamaDayAnimalRectangle(int lado){
        {
            int animal = GetRandomValue(0, 3);
            if (lado == -1)
            {
                switch (animal)
                {
                    case 0:
                        rect.y = 2700;
                        rect.x = 300;
                        break;
                    case 1:
                        rect.y = 2700;
                        rect.x = 900;
                        break;
                    case 2:
                        rect.y = 3000;
                        rect.x = 300;
                        break;
                    case 3:
                        rect.y = 3000;
                        rect.x = 900;
                }
            }
            else
            {
                switch (animal)
                {
                    case 0:
                        rect.y = 2700;
                        rect.x = 0;
                        break;
                    case 1:
                        rect.y = 2700;
                        rect.x = 600;
                        break;
                    case 2:
                        rect.y = 3000;
                        rect.x = 0;
                        break;
                    case 3:
                        rect.y = 3000;
                        rect.x = 600;
                }
            }
            return rect;
        }
    }

    /**
     * Funcion de retorno de la textura de una Rama vacia
     * @param lado Lado determina si es una rama a la izq (-1) o a la derecha (1)
     */
    Rectangle GetRamaVaciaRectangle(int lado){
        int color = GetRandomValue(0, 1);
        rect.y = 900;
        if (lado == -1)
        {
            if (color == 1)
                rect.x = 900;
            else
                rect.x = 300;
        }
        else {
            if (color == 1)
                rect.x = 600;
            else
                rect.x = 0;
        }

        return rect;
    }

};

#endif //RAYLIBTEMPLATE_VISITORGETRECTANGLE_H
