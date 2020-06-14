
#include "VisitorDraw.h"
#include "VisitorGetRectangle.h"
#include "NightRama.h"


void NightRama::Draw( ) {
    VisitorDraw v;
    Accept( v );
}

void NightRama::GetRectangle( ) {
    VisitorGetRectangle v;
    Accept( v );
}

void NightRama::Move( ) {
    int newlado;
    int newdiseno;
    if ( rama_sector == 4 ) {
        rama_sector = 1; //podemos poner que cambie el color
        newlado = GetRandomValue( 0 , 1 );
        if ( newlado == 0 )
            lado = -1;
        else
            lado = 1;
        newdiseno = GetRandomValue( 0 , 9 );
        animal = newdiseno >= 7;
        GetRectangle( );

    } else
        rama_sector = rama_sector + 1;
    Draw( );

}
