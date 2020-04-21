//
// Created by Abril on 13/4/2020.
//

#ifndef RAYLIBTEMPLATE_MONKEY_H
#include <raylib.h>
#include <string>
#include "Cartoonist.h"
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

class Monkey: public Cartoonist{
public:
        Vector2 monkey_position;
        Monkey():Cartoonist()
        {
            monkey_position = DrawMonkey(0, 'l');
        }

        void draw();
        void move_right(float d);
        void move_left(float d);
    };



#endif //RAYLIBTEMPLATE_MONKEY_H
