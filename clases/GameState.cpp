
#include "GameState.h"
#include "SingletonGame.h"
#include "Monkey.h"
#include "Tree.h"
#include "Rama.h"
#include "ThemeFactory.h"
#include "LightThemeFactory.h"
#include "NightThemeFactory.h"
#include "MenuElements.h"
#include "SuperTree.h"

void GameState::Update(SingletonGame *singleton) {
    SingletonGame & game = SingletonGame::get();
    // siempre hay que reproducir la musica que esta actualmente
    game.music.updateAudio();

    // Comienzo a dibujar
    BeginDrawing();
    if ( game.barL.getStatus() == 1 )
        --game.barL;

    // Limpio la pantalla con el color de fondo
    ClearBackground(game.colorBackground);
    game.tree->DrawTree();
    game.player->Draw();
    for ( int i = 0 ; i < 4 ; i++ )
        game.Ramas[ i ]->Draw();

    // Verifico entradas de eventos
    if ( IsKeyReleased(KEY_RIGHT)) {
        game.barL.setStatus(1);
        game.score += 5;
        ++game.barL;
        game.player->move_right();
        for ( int i = 0 ; i < 4 ; i++ )
            game.Ramas[ i ]->Move();
        for ( int i = 0 ; i < 4 ; i++ ) {
            game.GameOver = CheckCollisionRecs(game.Ramas[ i ]->getRectangle() , game.player->getRectangle());
            if ( game.GameOver )
                break;
        }
    }

    if ( IsKeyReleased(KEY_LEFT)) {
        game.barL.setStatus(1);
        game.score += 5;
        ++game.barL;
        game.player->move_left();
        for ( int i = 0 ; i < 4 ; i++ )
            game.Ramas[ i ]->Move();
        for ( int i = 0 ; i < 4 ; i++ ) {
            game.GameOver = CheckCollisionRecs(game.Ramas[ i ]->getRectangle() , game.player->getRectangle());
            if ( game.GameOver )
                break;
        }
    }

    //Barra vida
    game.barL.drawBarLife();
    if ( game.barL.getprogress() < 1 )
        game.GameOver = true;

    // Dibujo todos los elementos del juego.
    DrawText("Tankey" , 20 , 20 , 40 , game.colorText);
    DrawText(FormatText("Score: %05i" , game.score) , 950 , 30 , 30 , game.colorText);

    // Finalizo el dibujado
    EndDrawing();
}

void GameState::Menu(SingletonGame *singleton) {
    singleton->SetState(SingletonGame::ST_MENU);
}

void GameState::End(SingletonGame *singleton) {
    singleton->SetState(SingletonGame::ST_END);
}
