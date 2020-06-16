
/**
 * @title       Elementos del menú
 * @file        MenuElements.h
 * @version     1.0
 * @date        4/5/2020
 * @author      Ticiana Cobresi Serravalle
 * @author      Nara Abril Nanfara
 */

#ifndef RAYLIBTEMPLATE_MENUELEMENTS_H
#define RAYLIBTEMPLATE_MENUELEMENTS_H

#include "raylib.h"
#include "Visitor.h"
#include "Visitable.h"

/**
 * @class Button
 * @brief Clase que representa a un botón
 */
    class Button: public Visitable {
    public:
        int theme{};                           /** int value. Especifica el tema del boton, puede tomar valores 0 o 1 para lighttheme o nighttheme */
        int estado{};                          /** int value. Especifica el estado del boton, puede tomar valores 0 o 1 */
        Vector2 position{};                    /** Especifica la posicion en donde se situa el boton*/
        Rectangle rectangulo{};                /** Rectangle value. Especifica los pixeles de la textura que pertenecen al boton */

        /**
        *@brief función virtual pura que grafica un Boton
        */
        virtual void Draw() = 0;

        /**
        * @brief función virtual pura que indica cómo graficar al boton en pantalla dependiendo del boton
        * @param pos posicion en el que se va a dibujar el boton
        * @param est estado en el que se va a dibujarla el boton
        */
        virtual void Draw(Vector2 pos, int est) = 0;

        /**
        * @details función virtual pura que dependiendo de los atributos del boton, calcula las
        * coordenadas del rectangulo de la textura correspondiente y las coloca
        * como el nuevo valor del atributo rect del boton
        */
        virtual Rectangle GetRectangle() = 0;

        /**
        * @brief función de aceptación de un visitante
        */
        void Accept(Visitor&) override = 0;
    };


/**
* @class LightButton
* @brief Clase que representa a un Boton en su tema Light
*/
    class LightButton: public Button
    {
    public:
        /**
        * @brief constructor de la clase LightButton
        */
        LightButton()
        {
            position.x = 600;
            position.y = 50;
            estado = 0;
            rectangulo = {position.x + 60, position.y + 60, 175, 175};
            Draw();
        }
        /**
        *@brief función que grafica un LightButton
        */
        void Draw() override;

        /**
        * @brief función que indica cómo graficar al boton en pantalla dependiendo del boton
        * @param pos posicion en el que se va a dibujar el boton
        * @param est estado en el que se va a dibujarla el boton
        */
        void Draw(Vector2 pos, int est) override
         {
            position = pos;
            estado = est;
            Draw();
         }

        /**
        * Retorna el valor almacenado en el atributo rect
        * @return
        */
        Rectangle GetRectangle() override
        {
            return rectangulo;
        }

        /**
        * Funcion de aceptacion a un visitante
        * @param v
        */
        void Accept(Visitor & v) override {
            v.Visit(*this);
        }
    };

/**
* @class NightButton
* @brief Clase que representa a boton en su tema night
*/
    class NightButton: public Button
    {
    public:
       /**
       * @brief constructor de la clase NightButton
       */
        NightButton()
        {
            position.x = 300;
            position.y = 50;
            estado = 0;
            rectangulo = {position.x + 60, position.y + 60, 175, 175};
            Draw();
        }

        /**
        *@brief función que grafica un NightButton
        */
        void Draw() override;

        /**
        * @brief función que indica cómo graficar al boton en pantalla dependiendo del boton
        * @param pos posicion en el que se va a dibujar el boton
        * @param est estado en el que se va a dibujarla el boton
        */
        void Draw(Vector2 pos, int est) override
        {
            position = pos;
            estado = est;
            Draw();
        }

        /**
         * Retorna el valor almacenado en el atributo rect
         * @return
         */
        Rectangle GetRectangle() override
        {
            return rectangulo;
        }

        /**
        * Funcion de aceptacion a un visitante
        * @param v
        */
        void Accept(Visitor & v) override {
            v.Visit(*this);
        }
    };


/**
* @class StartButton
* @brief Clase que representa al botón para iniciar
*/
    class StartButton: public Button
    {
    public:
        /**
        * @brief constructor de la clase StartButton
        */
        StartButton()
        {
            theme = 0;
            position.x = 450;
            position.y = 650;
            rectangulo = {position.x + 10, position.y + 100, 280, 120};
            estado = 0;
            Draw();
        }

        /**
        *@brief función que grafica un StartButton
        */
        void Draw() override;

        /**
        * @brief función que indica cómo graficar al boton en pantalla dependiendo del boton
        * @param pos posicion en el que se va a dibujar el boton
        * @param est estado en el que se va a dibujarla el boton
        */
        void Draw(Vector2 pos, int est) override
        {
             position = pos;
             estado = est;
             Draw();
        }

        /**
         * Retorna el valor almacenado en el atributo rect
         * @return
         */
        Rectangle GetRectangle() override
        {
            return rectangulo;
        }

        /**
        * Funcion de aceptacion a un visitante
        * @param v
        */
        void Accept(Visitor & v) override {
            v.Visit(*this);
        }
    };

/**
* @class Skin
* @brief Clase que representa la textura del boton
*/
    class Skin: public Visitable
    {
    public:
        int tema;                       /** int value. Especifica el tema del boton, puede tomar valores 0 o 1 para lighttheme o nighttheme*/
        Vector2 position{};             /** Especifica la posicion en donde se situa el boton*/
        /**
        * @brief constructor de la clase Skin
        */
        Skin ()
        {
            tema = 0;
            position.x = 450;
            position.y = 400;
        }

        /**
        *@brief función que grafica un Skin
        */
        void Draw();

        /**
        * Funcion de aceptacion a un visitante
        * @param v
        */
        void Accept(Visitor & v) override {
            v.Visit(*this);
        }
    };

    #endif //RAYLIBTEMPLATE_MENUELEMENTS_H
