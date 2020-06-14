
#include "Monkey.h"
#include "raylib.h"

void Monkey::move_right() {
    if (lado == 1)
    {
        mov = 1;
        Draw();
        mov = 0;
    }
    else
        newlado();
}

void Monkey::move_left() {
    if (lado == -1)
    {
	    mov = 1;
        Draw();
        mov = 0;
    }
    else
        newlado();
}

void Monkey::newlado()
{
	mov = 0;

    if (monkey_position.x == 600)
    {
        lado = -1;
        Draw();
    }
    else
    {
        lado = 1;
        Draw();
    }
}


Rectangle Monkey::getRectangle() {
    Rectangle rect_monkey = {monkey_position.x, monkey_position.y, 300, 300};
    return rect_monkey;
}


