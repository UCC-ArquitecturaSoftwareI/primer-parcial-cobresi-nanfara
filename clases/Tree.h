//
// Created by Abril on 21/4/2020.
//

#ifndef RAYLIBTEMPLATE_TREE_H

#include "Visitor.h"
#include "raylib.h"
#define RAYLIBTEMPLATE_TREE_H


class Tree{
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
	
	void Accept(Visitor& v) { 
	v.Visit(this); 
	}
 	void DrawTree(){
	VisitorDraw *v;
	Accept(v);}
};


#endif //RAYLIBTEMPLATE_TREE_H
