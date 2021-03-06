#include <raylib.h>
//#include "clases/Monkey.h"
#include "clases/Tree.h"
//#include "clases/Rama.h"
//#include "clases/Bar_Life.h"
//#include "clases/ThemeFactory.h"
#include "clases/LightThemeFactory.h"
#include "clases/NightThemeFactory.h"
#include "clases/MenuElements.h"
#include "clases/SingletonGame.h"
#include "clases/Manager.h"
#include "clases/TreeVetas.h"
#include <vector>


#if defined(PLATFORM_WEB) // Para crear HTML5
#include <emscripten/emscripten.h>
#endif


int main() {
    SingletonGame &game = SingletonGame::get();
    /// Ejemplo de utilización de audio.

    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    // Main loop

    game.Botones.push_back(new LightButton);
    game.Botones.push_back(new NightButton);
    game.Botones.push_back(new StartButton);
    game.TankeySkin = new Skin;

    while (!WindowShouldClose()&& !game.start)
    {
        game.Update();
    }

    if (game.tema == 0)
    {
        game.tf = new LightThemeFactory;
    }
    else
    {
        game.tf = new NightThemeFactory;
        game.colorBackground = BLACK;
        game.colorText = WHITE;
    }
    game.tree = new TreeVetas(new Tree());
    game.player = game.tf->createMonkey();

    game.Ramas.push_back(game.tf->createRama(-1, 1));
    game.Ramas.push_back(game.tf->createRama(1, 2));
    game.Ramas.push_back(game.tf->createRama(-1, 3));
    game.Ramas.push_back(game.tf->createRama(1, 4));

    game.Game();
    while (!WindowShouldClose()&& !game.GameOver)
    {
        game.Update();
    }
    game.End();
    while (!WindowShouldClose())
    {
        game.Update();
    }

    game.Descargar();
    return 0;
}
