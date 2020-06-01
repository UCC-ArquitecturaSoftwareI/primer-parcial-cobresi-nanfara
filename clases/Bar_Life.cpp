//
// Created by Abril on 1/5/2020.
//
#include <raylib.h>
#include "Bar_Life.h"

barLife::barLife() {
    width = 500;
    height = 40;
    status = 0;
    progress = width;
    position.x = 350;
    position.y = 75;
    step = 15;
}

void barLife::operator--() {
    progress--;
}

void barLife::operator++() {
    if (progress < width - step)
        progress += step;
    else
        progress = width;
}

int barLife::getprogress() {
    return progress;
}

void barLife::drawBarLife() {
    switch (status)
    {
        case 0: DrawText("Pulsa <- para comenzar", position.x+130 , position.y+10, 20, DARKGRAY); break;
        case 1:
        {
            DrawRectangle(position.x, position.y, progress, 40, LIME);
        } break;
        case -1:
        {
            DrawRectangle(position.x, position.y , width, height, LIME);
            DrawText("GAME OVER", position.x+150, position.y + 5, 40, GREEN);

        } break;
        default: break;
    }
    DrawRectangleLines(position.x, position.y , width, height, DARKGRAY);
}

void barLife::setStatus(int newStatus) {
    status = newStatus;
}

int barLife::getStatus() {
    return status;
}

