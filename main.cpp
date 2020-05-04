#include <raylib.h>

#include "clases/Monkey.h"
#include "clases/Tree.h"
#include "clases/Rama.h"
#include "clases/Bar_Life.h"
#include "clases/ThemeFactory.h"
#include "clases/LightThemeFactory.h"
#include "clases/NightThemeFactory.h"
#include "clases/Button.h"
#include <iostream>
#include <vector>


#if defined(PLATFORM_WEB) // Para crear HTML5
#include <emscripten/emscripten.h>
#endif
const int screenWidth = 1200;
const int screenHeight = 900;


// Variables Globales
Music music;
Monkey *player;
Tree *tree;
bool GameOver;
int score = 0;
barLife barLife;
ThemeFactory *tf;
bool start = false;
Color colorBackground = SKYBLUE;
Color colorText = BLACK;
std::vector<Rama*> Ramas;
std::vector<Button*> Botones;
Vector2 mousePoint = { 0.0f, 0.0f};
Skin *TankeySkin;

int UpdateMenu();       // 1 = noche// 0 = dia
static void UpdateDrawFrame(void);          // Función dedicada a operar cada frame
void UpdateDrawEnd();



int main() {
    int tema;
    // Inicialización de la ventana
    InitWindow(screenWidth, screenHeight, "Tankey game");
    InitAudioDevice();              // Initialize audio device
    /// Ejemplo de utilización de audio.
    music = LoadMusicStream("resources/Cyberpunk Moonlight Sonata.mp3");
    PlayMusicStream(music);
    GameOver = false;



#if defined(PLATFORM_WEB)  // Para versión Web.
    emscripten_set_main_loop(UpdateDrawFrame, 0, 1);
#else
    SetTargetFPS(60);   // Set our game to run at 60 frames-per-second
    // Main loop

    Botones.push_back(new LightButton);
    Botones.push_back(new NightButton);
    Botones.push_back(new StartButton);
    TankeySkin = new Skin;

    while (!WindowShouldClose()&& !start)
    {
        tema = UpdateMenu();
    }

    if (tema == 0)
    {
        tf = new LightThemeFactory;
    }
    else
    {
        tf = new NightThemeFactory;
        colorBackground = BLACK;
        colorText = WHITE;
    }
    tree = new Tree;
    player = tf->createMonkey();
    Ramas.push_back(tf->createRama(-1, 1));
    Ramas.push_back(tf->createRama(1, 2));
    Ramas.push_back(tf->createRama(-1, 3));
    Ramas.push_back(tf->createRama(1, 4));



    while (!WindowShouldClose()&& !GameOver)
    {
        UpdateDrawFrame();
    }
    while (!WindowShouldClose()&& GameOver)
    {
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
        ClearBackground(colorBackground); // Limpio la pantalla con "celeste cielo"
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
    DrawText("Tankey", 20, 20, 40, colorText);
    DrawText(FormatText("Score: %05i", score), 950, 30, 30, colorText);

    // Finalizo el dibujado
    EndDrawing();
}

void UpdateDrawEnd() {
    BeginDrawing();
    ClearBackground(colorBackground);
    DrawText(FormatText("GAME OVER"), 375, 300, 70, colorText);
    DrawText(FormatText("Score: %05i", score), 455, 400, 40, colorText);
    EndDrawing();
}

int UpdateMenu()
{
    BeginDrawing();
    ClearBackground(colorBackground);
    TankeySkin->Draw();
    int tema;
    mousePoint = GetMousePosition();
    for (int i = 0; i<3; i++)
    {
        if (CheckCollisionPointRec(mousePoint, Botones[i]->GetRectangle()))
        {
            if (IsMouseButtonDown(MOUSE_LEFT_BUTTON))
            {
                Botones[i]->estado = 1;
                switch (i)
                {
                    case 0:
                        tema = 0;
                        colorBackground = SKYBLUE;
                        Botones[2]->theme = tema;
                        TankeySkin->tema = tema;
                        break;
                    case 1:
                        tema = 1;
                        colorBackground = BLACK;
                        Botones[2]->theme = tema;
                        TankeySkin->tema = tema;
                        break;
                    case 2:
                        start = true;
                        break;
                }
            }
            else
                Botones[i]->estado = 0;
        }
        Botones[i]->Draw();
    }

    EndDrawing();
    return tema;
}