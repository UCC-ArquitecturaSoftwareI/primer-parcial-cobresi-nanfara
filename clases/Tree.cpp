//
// Created by Abril on 21/4/2020.
//

#include "Tree.h"
#include <raylib.h>

Tree::Tree() {
    Vector2 position;
    position.x = 150;
    position.y = -150;
    while (position.y < 1050) {
        for (int i = -1; i <= 1; i++) {
            DrawTree(i, position);
            position.x += 300;
        }
        position.x = 150;
        position.y += 300;
        /*if (position.y == 450)
            position.y += 300;*/
    }
    /*position.x = 450;
    position.y = 450;
    DrawTree(0, position);*/

}
