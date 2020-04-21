//
// Created by Abril on 21/4/2020.
//

#include "Tree.h"
#include <raylib.h>

void Tree::Draw() {
    Vector2 position;
    position.x = 300;
    position.y = -150;
    while (position.y < 1050) {
        DrawTree(-1, position);
        position.x += 300;
        DrawTree(1, position);
        position.x = 300;
        position.y += 300;
    }
}

