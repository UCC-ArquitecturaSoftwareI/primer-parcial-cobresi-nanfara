
#include "MenuState.h"
#include "SingletonGame.h"
#include "Monkey.h"
#include "Tree.h"
#include "Rama.h"
#include "ThemeFactory.h"
#include "LightThemeFactory.h"
#include "NightThemeFactory.h"
#include "MenuElements.h"
#include "SuperTree.h"


void MenuState::Update( ) {
    SingletonGame & game = SingletonGame::get( );
    BeginDrawing( );
    ClearBackground( game.colorBackground );
    game.TankeySkin->Draw( );
    game.mousePoint = GetMousePosition( );
    for ( int i = 0 ; i < 3 ; i++ ) {
        if ( CheckCollisionPointRec( game.mousePoint , game.Botones[ i ]->GetRectangle( ))) {
            if ( IsMouseButtonDown( MOUSE_LEFT_BUTTON )) {
                game.Botones[ i ]->estado = 1;
                switch ( i ) {
                    case 0:
                        game.tema = 0;
                        game.colorBackground = SKYBLUE;
                        game.colorText = BLACK;
                        game.Botones[ 2 ]->theme = game.tema;
                        game.TankeySkin->tema = game.tema;
                        break;
                    case 1:
                        game.tema = 1;
                        game.colorBackground = BLACK;
                        game.colorText = WHITE;
                        game.Botones[ 2 ]->theme = game.tema;
                        game.TankeySkin->tema = game.tema;
                        break;
                    case 2:
                        game.start = true;
                        break;
                    default:
                        break;
                }
            } else
                game.Botones[ i ]->estado = 0;
        }
        game.Botones[ i ]->Draw( );
    }

    EndDrawing( );
}


void MenuState::Game( SingletonGame *singleton ) {
    singleton->SetState( SingletonGame::ST_GAME );

}

void MenuState::End( SingletonGame *singleton ) {
    singleton->SetState( SingletonGame::ST_END );
}
