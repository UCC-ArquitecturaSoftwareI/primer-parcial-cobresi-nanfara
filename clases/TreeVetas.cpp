//
// Created by Abril on 2/6/2020.
//
#include "TreeVetas.h"
#include "VisitorDraw.h"

void TreeVetas::Draw() {
        VisitorDraw v;
        Accept(v);
}
