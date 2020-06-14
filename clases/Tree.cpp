
#include "VisitorDraw.h"
#include "Tree.h"

void Tree::Draw( ) {
    VisitorDraw v;
    Accept( v );
}

void Tree::DrawTree( ) {
    position.x = 300;
    position.y = -150;
    while ( position.y < 1050 ) {
        lado = -1;
        Draw( );
        position.x += 300;
        lado = 1;
        Draw( );
        position.x = 300;
        position.y += 300;
    }
}

