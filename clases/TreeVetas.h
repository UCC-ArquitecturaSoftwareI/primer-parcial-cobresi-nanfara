/**
 * @title       Clase TreeVetas
 * @file        TreeVetas.h
 * @version     1.0
 * @date        21/4/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_TREEVETAS_H
#define RAYLIBTEMPLATE_TREEVETAS_H

#include "Decorator.h"
#include "SuperTree.h"
#include "Visitor.h"
#include "Visitable.h"

/**
 * @class TreeVetas
 * @brief Clase que representa al arbol con trama de vetas
 */
class TreeVetas: public Decorator{
public:
    /**
     * @brief constructor de TreeVetas
     * @param dcrator
     */
    explicit TreeVetas(SuperTree* const dcrator): Decorator (dcrator){}

     /**
     * @brief función que indica cómo graficar al arbol en pantalla
     */
    void DrawTree() override{
        position.x = 300;
        position.y = -150;
        while (position.y < 1050) {
            lado = -1;
            Draw();
            position.x += 300;
            lado = 1;
            Draw();
            position.x = 300;
            position.y += 300;
        }
    }

    /**
    * Funcion de aceptacion a un visitante
    * @param v
    */
    void Accept(Visitor& v) override {
        v.Visit(*this);
    }

    /**
     * @brief grafica al arbol en pantalla
     */
    void Draw() override;
};

#endif //RAYLIBTEMPLATE_TREEVETAS_H
