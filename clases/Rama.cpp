#include "Rama.h"
#include "VisitorDraw.h"

void Rama::Draw( ) {
    VisitorDraw v;
    Accept( v );
}

Rectangle Rama::getRectangle( ) {
    Rectangle rec_rama = { rama_position.x , rama_position.y , 300 , 300 };
    return rec_rama;
}
