#include <raylib.h>

#include "clases/Nave.h"
#include "clases/Monkey.h"
#include "clases/Tree.h"
#include "clases/FrameManager.h"

#if defined(PLATFORM_WEB) // Para crear HTML5
#include <emscripten/emscripten.h>
#endif
const int screenWidth = 1200;
const int screenHeight = 900;

// Variables Globales
Music music;
Monkey *player;
Tree *tree;

static void UpdateDrawFrame(void);          // Función dedicada a operar cada frame

int main() {
    // Inicialización de la ventana
    InitWindow(screenWidth, screenHeight, "Tankey game");
    InitAudioDevice();              // Initialize audio device

    /// Ejemplo de utilización de audio.
    music = LoadMusicStream("resources/Cyberpunk Moonlight Sonata.mp3");

    PlayMusicStream(music);
    tree = new Tree;
    player = new Monkey;

#if defined(PLATFORM_WEB)  // Para versión Web.
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    // Main loop
    while (!WindowShouldClose()) {
        UpdateDrawFrame();
    }
#endif
    // Descargar todos los resources cargados

    UnloadMusicStream(music);   // Descargo la musica de RAM
    CloseAudioDevice();         // Cierro el dispositivo de Audio
    CloseWindow();              // Cierro la ventana
    return 0;
}


/**
 *  Función dedicada a dibujar cada frame. Acá adentro se debe poner la logica necesaria para representar un nuevo frame
 *  del juego.
 */
static void UpdateDrawFrame(void) {


    // siempre hay que reproducir la musica que esta actualmente
    UpdateMusicStream(music);
    // Verifico Entradas de eventos.
    //if (IsKeyDown(KEY_RIGHT)) player->move_right();
    //if (IsKeyDown(KEY_LEFT)) player->move_left();


    // Comienzo a dibujar
    BeginDrawing();
        ClearBackground(WHITE); // Limpio la pantalla con "celeste cielo"
        tree->Draw();
        player->Draw();
        if (IsKeyReleased(KEY_RIGHT)) player->move_right();
        if (IsKeyReleased(KEY_LEFT)) player->move_left();

    // Dibujo todos los elementos del juego.
    DrawText("Tankey", 20, 20, 40, BLACK);

    // Finalizo el dibujado
    EndDrawing();
}