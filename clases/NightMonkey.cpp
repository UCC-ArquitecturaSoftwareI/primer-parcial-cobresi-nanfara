
#include "NightMonkey.h"
#include "VisitorDraw.h"

void NightMonkey::Draw( ) {
    VisitorDraw v;
    Accept( v );
}

