//
// Created by Abril on 20/4/2020.
//
#include <raylib.h>
#include "Cartoonist.h"
#include "Monkey.h"
//podemos hacer una lista enlazada circular para derecha e izq
//Deberíamos abrir la imagen una sola vez mepa y cada corte lo almacenamos en un coso distinto hay una que se llama ImageFromImage para esto

/*
void Cartoonist::Draw_monkey() {
  Image monkey_front = LoadImage("resources/Sprite.png");
  ImageCrop(&monkey_front, (Rectangle){0, 0, 300, 300});
  Image monkey_right1 = LoadImage("resources/Sprite.png");
  ImageCrop(&monkey_right1, (Rectangle){0, 300, 300, 300});
  Image monkey_right2 = LoadImage("resources/Sprite.png");
  ImageCrop(&monkey_right2, (Rectangle){300, 300, 300, 300});
  Image monkey_right3 = LoadImage("resources/Sprite.png");
  ImageCrop(&monkey_right3, (Rectangle){600, 300, 300, 300});
  Image monkey_right4 = LoadImage("resources/Sprite.png");
  ImageCrop(&monkey_right4, (Rectangle){900, 300, 300, 300});
  Image monkey_left1 = LoadImage("resources/Sprite.png");
  ImageCrop(&monkey_left1, (Rectangle){0, 600, 300, 300});
  Image monkey_left2 = LoadImage("resources/Sprite.png");
  ImageCrop(&monkey_left2, (Rectangle){300, 600, 300, 300});
  Image monkey_left3 = LoadImage("resources/Sprite.png");
  ImageCrop(&monkey_left3, (Rectangle){600, 600, 300, 300});
  Image monkey_left4 = LoadImage("resources/Sprite.png");
  ImageCrop(&monkey_left4, (Rectangle){900, 600, 300, 300});
  Image monkey_back = LoadImage("resources/Sprite.png");
  ImageCrop(&monkey_back, (Rectangle){1200, 300, 300, 300});
}

void Cartoonist::Draw_banana() {
    Image banana_right = LoadImage("resources/Sprite.png");
    ImageCrop(&banana_right, (Rectangle){300, 0, 300, 300});
    Image banana_left = LoadImage("resources/Sprite.png");
    ImageCrop(&banana_left, (Rectangle){600, 0, 300, 300});
}

void Cartoonist::Draw_rama() {
    Image rama_clara_right = LoadImage("resources/Sprite.png");
    ImageCrop(&rama_clara_right, (Rectangle){0, 900, 300, 300});
    Image rama_clara_left = LoadImage("resources/Sprite.png");
    ImageCrop(&rama_clara_left, (Rectangle){300, 900, 300, 300});
    Image rama_oscura_right = LoadImage("resources/Sprite.png");
    ImageCrop(&rama_oscura_right, (Rectangle){600, 900, 300, 300});
    Image rama_oscura_left = LoadImage("resources/Sprite.png");
    ImageCrop(&rama_oscura_left, (Rectangle){900, 900, 300, 300});
}


void Cartoonist::Draw_tree() {
    Image tree_center = LoadImage("resources/Sprite.png");
    ImageCrop(&tree_center, (Rectangle){1200, 900, 300, 300});
    Image tree_left = LoadImage("resources/Sprite.png");
    ImageCrop(&tree_left, (Rectangle){900, 1200, 300, 300});
    Image tree_right = LoadImage("resources/Sprite.png");
    ImageCrop(&tree_right, (Rectangle){600, 1200, 300, 300});
}
*/


/*
Cartoonist::Cartoonist()
{
    //Tankey
    monkey_front = LoadImage("resources/Sprite.png");
    ImageCrop(&monkey_front, (Rectangle){0, 0, 300, 300});
    monkey_right1 = LoadImage("resources/Sprite.png");
    ImageCrop(&monkey_right1, (Rectangle){0, 300, 300, 300});
    monkey_right2 = LoadImage("resources/Sprite.png");
    ImageCrop(&monkey_right2, (Rectangle){300, 300, 300, 300});
    monkey_right3 = LoadImage("resources/Sprite.png");
    ImageCrop(&monkey_right3, (Rectangle){600, 300, 300, 300});
    monkey_right4 = LoadImage("resources/Sprite.png");
    ImageCrop(&monkey_right4, (Rectangle){900, 300, 300, 300});
    monkey_left1 = LoadImage("resources/Sprite.png");
    ImageCrop(&monkey_left1, (Rectangle){0, 600, 300, 300});
    monkey_left2 = LoadImage("resources/Sprite.png");
    ImageCrop(&monkey_left2, (Rectangle){300, 600, 300, 300});
    monkey_left3 = LoadImage("resources/Sprite.png");
    ImageCrop(&monkey_left3, (Rectangle){600, 600, 300, 300});
    monkey_left4 = LoadImage("resources/Sprite.png");
    ImageCrop(&monkey_left4, (Rectangle){900, 600, 300, 300});
    monkey_back = LoadImage("resources/Sprite.png");
    ImageCrop(&monkey_back, (Rectangle){1200, 300, 300, 300});
    //Ramas
    rama_clara_right = LoadImage("resources/Sprite.png");
    ImageCrop(&rama_clara_right, (Rectangle){0, 900, 300, 300});
    rama_clara_left = LoadImage("resources/Sprite.png");
    ImageCrop(&rama_clara_left, (Rectangle){300, 900, 300, 300});
    rama_oscura_right = LoadImage("resources/Sprite.png");
    ImageCrop(&rama_oscura_right, (Rectangle){600, 900, 300, 300});
    rama_oscura_left = LoadImage("resources/Sprite.png");
    ImageCrop(&rama_oscura_left, (Rectangle){900, 900, 300, 300});
    //Banana
    banana_right = LoadImage("resources/Sprite.png");
    ImageCrop(&banana_right, (Rectangle){300, 0, 300, 300});
    banana_left = LoadImage("resources/Sprite.png");
    ImageCrop(&banana_left, (Rectangle){600, 0, 300, 300});
    //Arbol
    tree_center = LoadImage("resources/Sprite.png");
    ImageCrop(&tree_center, (Rectangle){1200, 900, 300, 300});
    tree_left = LoadImage("resources/Sprite.png");
    ImageCrop(&tree_left, (Rectangle){900, 1200, 300, 300});
    tree_right = LoadImage("resources/Sprite.png");
    ImageCrop(&tree_right, (Rectangle){600, 1200, 300, 300});

}
*/
Vector2 Cartoonist::DrawMonkey(int movimiento, char lado) {
    position.y = 450;
    if (lado == 'r')
    {
        position.x = 750;
        rect_monkey.y = 300;
        if (movimiento)
        {
            if (rect_monkey.x == 900)
                rect_monkey.x = 0;
            else
                rect_monkey.x = rect_monkey.x+300;
        }
    }
    if (lado == 'l')
    {
        position.x = 150;
        rect_monkey.y = 600;
        if (movimiento)
        {
            if (rect_monkey.x == 900)
                rect_monkey.x = 0;
            else
                rect_monkey.x = rect_monkey.x+300;
        }
    }
    DrawTextureRec(sprite, rect_monkey, position, WHITE);
    return position;
}
