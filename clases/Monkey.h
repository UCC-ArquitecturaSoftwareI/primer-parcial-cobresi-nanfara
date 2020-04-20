//
// Created by Abril on 13/4/2020.
//
#include <raylib.h>
#include <string>
#ifndef RAYLIBTEMPLATE_MONKEY_H
#define RAYLIBTEMPLATE_MONKEY_H

/* if (la flecha se presiona)
 * { if (flecha derecha) && (monkey.posición==derecha)
 *      {mono+=mono y bajar un cuadro el arbol}
 *   if (flecha derecha) && (monkey.posición==izquierda)
 *      {monkey.posición==derecha;
 *      y bajar un cuadro el arbol}
 *   if (flecha izq) && (monkey.posición==izq)
 *      {mono+=mono y bajar un cuadro el arbol}
 *   if (flecha izq) && (monkey.posición==derecha)
 *      {monkey.posición==izq;
 *      y bajar un cuadro el arbol}
 */

class Monkey {
        Vector2 monkey_posicion[2];
        bool monkey_left;
        bool monkey_right;
        Texture2D monkey;
        Vector2 monkey_pos;
    public:
        Monkey(std::string text, const Vector2 &monkeyPos);

        void draw();
        void move_right(float d);
        void move_left(float d);
    };



#endif //RAYLIBTEMPLATE_MONKEY_H
