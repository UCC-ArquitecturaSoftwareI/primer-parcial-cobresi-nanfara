//
// Created by Abril on 21/4/2020.
//

#ifndef RAYLIBTEMPLATE_TREE_H
#define RAYLIBTEMPLATE_TREE_H

#include "Visitor.h"
#include "Visitable.h"
#include "SuperTree.h"

#include "raylib.h"



class Tree: public SuperTree{
public:
    void DrawTree() override
	{
    position.x = 300;
    position.y = -150;
    while (position.y < 1050) {
	lado = -1;
        Draw();
        position.x += 300;
	lado = 1;
        Draw();
        position.x = 300;
        position.y += 300;
    }
	}
	
	void Accept(Visitor& v) { 
	v.Visit(*this);
	}

 	void Draw();

    /*virtual void assemble(){

    };*/
};
/*
class TreePlain: public Tree{
public:
    int lado;
    Vector2 position;

    void Draw()
    {
        position.x = 300;
        position.y = -150;
        while (position.y < 1050) {
            lado = -1;
            DrawTree();
            position.x += 300;
            lado = 1;
            DrawTree();
            position.x = 300;
            position.y += 300;
        }
    }

    virtual void assemble(){
        Draw();
    };

    void Accept(Visitor& v) {
        v.Visit(*this);
    }

    void DrawTree();

};
*/

#endif //RAYLIBTEMPLATE_TREE_H
