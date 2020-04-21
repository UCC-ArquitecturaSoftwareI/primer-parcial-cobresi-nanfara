//
// Created by Abril on 20/4/2020.
// Esta clase se encarga de dibujar todito
//

#ifndef RAYLIBTEMPLATE_CARTOONIST_H

#include <raylib.h>
#define RAYLIBTEMPLATE_CARTOONIST_H



class Cartoonist
{
private:
    Texture2D sprite;
    Rectangle rect;
    Vector2 position;
public:
    Cartoonist() {
        sprite = LoadTexture("resources/Sprite.png");
        rect = {0,0, 300, 300};
    }

    Vector2 DrawMonkey(int movimiento, int lado);
    void DrawBanana(char lado);
    void DrawRama(int nro_rama, char lado);
    void DrawTree(int lado, Vector2 pos);


    /*
public:
    //Mono
    Image monkey_front;
    Image monkey_right1;
    Image monkey_right2;
    Image monkey_right3;
    Image monkey_right4;
    Image monkey_left1;
    Image monkey_left2;
    Image monkey_left3;
    Image monkey_left4;
    Image monkey_back;
    //Rama
    Image rama_clara_right;
    Image rama_clara_left;
    Image rama_oscura_right;
    Image rama_oscura_left;
    //Banana
    Image banana_left;
    Image banana_right;
    //Arbol
    Image tree_center;
    Image tree_left;
    Image tree_right;
    Cartoonist();

    void Draw_monkey();
    void Draw_banana();
    void Draw_rama();
    void Draw_tree();
     */
};


#endif //RAYLIBTEMPLATE_CARTOONIST_H
