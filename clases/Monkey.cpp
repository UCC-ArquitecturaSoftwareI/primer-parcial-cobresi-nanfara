//
// Created by Abril on 13/4/2020.
//
#include <string>
#include "Monkey.h"

Monkey::Monkey(std::string text, const Vector2 &monkeyPos) : monkey_pos(monkeyPos) {

    monkey = LoadTexture(text.c_str());
}


void Monkey::draw() {

    DrawTexture(monkey, monkey_pos.x - monkey.width/2, monkey_pos.y- monkey.height/2, WHITE);
}

void Monkey::move_right(float d) {
    monkey_pos.x += d;
}
void Monkey::move_left(float d) {
    monkey_pos.x -= d;
}
