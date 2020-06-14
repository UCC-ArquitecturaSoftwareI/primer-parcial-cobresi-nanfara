#include "EndState.h"
#include "SingletonGame.h"

void EndState::Update( SingletonGame *singleton ) {
    SingletonGame & game = SingletonGame::get( );
    BeginDrawing( );
    ClearBackground( game.colorBackground );
    DrawText( FormatText( "GAME OVER" ) , 375 , 300 , 70 , game.colorText );
    DrawText( FormatText( "Score: %05i" , game.score ) , 455 , 400 , 40 , game.colorText );
    EndDrawing( );
}

void EndState::Menu( SingletonGame *singleton ) {
    singleton->SetState( SingletonGame::ST_MENU );
}

void EndState::Game( SingletonGame *singleton ) {
    singleton->SetState( SingletonGame::ST_GAME );
}

