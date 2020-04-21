//
// Created by Abril on 13/4/2020.
//
#include <string>
#include "Monkey.h"
#include "Cartoonist.h"
#include  "raylib.h"

Monkey::Monkey() {
    monkey_position.y = 450;
    monkey_position.x = 750;
    DrawMonkey(0, 'l', this);
}



/*
void Monkey::move_right(float d) {
    monkey_pos.x += d;
}
void Monkey::move_left(float d) {
    monkey_pos.x -= d;
}
*/