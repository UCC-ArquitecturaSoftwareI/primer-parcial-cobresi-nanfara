//
// Created by Abril on 1/5/2020.
//

#ifndef RAYLIBTEMPLATE_BAR_LIFE_H

#include <raylib.h>
#define RAYLIBTEMPLATE_BAR_LIFE_H


class barLife {
private:
    int height;
    int width;
    int progress;
    int status; // = 0(inicio); =1(jugando); =-1(perdido)
    int step;
    Vector2 position;
public:
    barLife();
    void operator--();
    void operator++();
    int getprogress();
    void drawBarLife();
    void setStatus(int);
    int getStatus();


};


#endif //RAYLIBTEMPLATE_BAR_LIFE_H
