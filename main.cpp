#include <raylib.h>

#include "clases/Monkey.h"
#include "clases/Tree.h"
#include "clases/Rama.h"
#include "clases/Bar_Life.h"
#include "clases/ThemeFactory.h"
#include "clases/LightThemeFactory.h"
#include "clases/NightThemeFactory.h"
#include <iostream>
#include <vector>

#if defined(PLATFORM_WEB) // Para crear HTML5
#include <emscripten/emscripten.h>
#endif
const int screenWidth = 1200;
const int screenHeight = 900;

//Notas:
//Tengo que hacer que las ramas generen distintos animales dependiendo si es de día o de noche
//Ver como cambiar el color del fondo (a negro o azul cielo) y el color de la fuente (blanco o negro) dependiendo si es dia o noche
//Hace menú para seleccionar tema del juego


// Variables Globales
Music music;
Monkey *player;
Tree *tree;
//Rama *rama;
bool GameOver;
int score = 0;
barLife barLife;
ThemeFactory *tf;


static void UpdateDrawFrame(void);          // Función dedicada a operar cada frame

void UpdateDrawEnd();

std::vector<Rama*> Ramas;

int main() {
    int tema;
    std::cout<<"Teclee: "<<"\n0 para día"<<"\n1 para noche"<<"\n";
    std::cin>>tema;
    if (tema == 0)
        tf = new LightThemeFactory;
    else
        tf = new NightThemeFactory;
    // Inicialización de la ventana
    InitWindow(screenWidth, screenHeight, "Tankey game");
    InitAudioDevice();              // Initialize audio device
    /// Ejemplo de utilización de audio.
    music = LoadMusicStream("resources/Cyberpunk Moonlight Sonata.mp3");

    PlayMusicStream(music);
    tree = new Tree;
    //player = new Monkey;
    player = tf->createMonkey();

    Ramas.push_back(new Rama(-1, 1));
    Ramas.push_back(new Rama(1, 2));
    Ramas.push_back(new Rama(-1, 3));
    Ramas.push_back(new Rama(1, 4));

    GameOver = false;



#if defined(PLATFORM_WEB)  // Para versión Web.
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    // Main loop
    while (!WindowShouldClose())
    {
        if (!GameOver)
         UpdateDrawFrame();
        else
            UpdateDrawEnd();
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
    //UpdateMusicStream(music);
    // Verifico Entradas de eventos.

    // Comienzo a dibujar
    BeginDrawing();
        if (barLife.getStatus() == 1)
            --barLife;
        ClearBackground(BLACK); // Limpio la pantalla con "celeste cielo"
        tree->Draw();
        player->Draw();
        for (int i = 0; i < 4; i++)
            Ramas[i]->Draw();

        if (IsKeyReleased(KEY_RIGHT))
        {
            barLife.setStatus(1);
            score += 5;
            ++barLife;
            player->move_right();
            for (int i = 0; i < 4; i++)
                Ramas[i]->Move();


            for (int i = 0; i < 4; i++)
            {
                GameOver = CheckCollisionRecs(Ramas[i]->getRectangle(), player->getRectangle());
                if (GameOver)
                    break;
            }
        }

        if (IsKeyReleased(KEY_LEFT))
        {
            barLife.setStatus(1);
            score += 5;
            ++barLife;
            player->move_left();
            for (int i = 0; i < 4; i++)
                Ramas[i]->Move();
            for (int i = 0; i < 4; i++)
            {
                GameOver = CheckCollisionRecs(Ramas[i]->getRectangle(), player->getRectangle());
                if (GameOver)
                    break;
            }
        }
        //Barra vida
    barLife.drawBarLife();
        if (barLife.getprogress() < 1)
            GameOver = 1;


    // Dibujo todos los elementos del juego.
    DrawText("Tankey", 20, 20, 40, BLACK);
    DrawText(FormatText("Score: %05i", score), 950, 30, 30, BLACK);

    // Finalizo el dibujado
    EndDrawing();
}

void UpdateDrawEnd() {
    BeginDrawing();
    ClearBackground(SKYBLUE);
    DrawText(FormatText("GAME OVER"), 375, 300, 70, BLACK);
    DrawText(FormatText("Score: %05i", score), 455, 400, 40, BLACK);
    EndDrawing();
}