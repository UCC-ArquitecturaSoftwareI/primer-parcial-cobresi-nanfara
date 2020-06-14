
#include "LightMonkey.h"
#include "VisitorDraw.h"

void LightMonkey::Draw( ) {
    VisitorDraw v;
    Accept( v );
}

