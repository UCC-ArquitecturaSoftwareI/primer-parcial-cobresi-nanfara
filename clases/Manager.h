//
// Created by Abril on 10/5/2020.
//

#ifndef RAYLIBTEMPLATE_MANAGER_H
#include "raylib.h"
#include <string>
#define RAYLIBTEMPLATE_MANAGER_H

class SingletonGame;
class Manager {
private:
    std::string m_name;
public:
    Manager(std::string name):m_name(name){}
    std::string GetName(){
        return m_name;
    }
    virtual ~Manager(){}
    virtual void Menu(SingletonGame *singleton);
    virtual void Game(SingletonGame *singleton);
    virtual void End(SingletonGame *singleton);

    //int UpdateMenu();       // 1 = noche// 0 = dia
    //static void UpdateDrawFrame(void);          // Función dedicada a operar cada frame
    //void UpdateDrawEnd();
};

class MenuState: public Manager{
public:
    MenuState():Manager(std::string("Menu")){}
    int Update(SingletonGame *singleton)  {
        SingletonGame &game = SingletonGame::get();
        BeginDrawing();
        ClearBackground(game.colorBackground);
        game.TankeySkin->Draw();
        game.mousePoint = GetMousePosition();
        for (int i = 0; i<3; i++)
        {
            if (CheckCollisionPointRec(game.mousePoint, game.Botones[i]->GetRectangle()))
            {
                if (IsMouseButtonDown(MOUSE_LEFT_BUTTON))
                {
                    game.Botones[i]->estado = 1;
                    switch (i)
                    {
                        case 0:
                            game.tema = 0;
                            game.colorBackground = SKYBLUE;
                            game.colorText = BLACK;
                            game.Botones[2]->theme = game.tema;
                            game.TankeySkin->tema = game.tema;
                            break;
                        case 1:
                            game.tema = 1;
                            game.colorBackground = BLACK;
                            game.colorText = WHITE;
                            game.Botones[2]->theme = game.tema;
                            game.TankeySkin->tema = game.tema;
                            break;
                        case 2:
                            game.start = true;
                            break;
                    }
                }
                else
                    game.Botones[i]->estado = 0;
            }
            game.Botones[i]->Draw();
        }

        EndDrawing();
        return game.tema;
    }
    virtual void Game(SingletonGame *singleton){
        singleton->SetState(SingletonGame::ST_GAME);
    }
    virtual void End(SingletonGame *singleton){
        singleton->SetState(SingletonGame::ST_END);
    }
    virtual ~MenuState(){}
};

class GameState: public Manager{
public:
    GameState():Manager(std::string("Game")){}
    void Update(SingletonGame *singleton)  {
        SingletonGame &game = SingletonGame::get();
        // siempre hay que reproducir la musica que esta actualmente
        //game.music.updateAudio();
        //UpdateMusicStream(music);
        // Verifico Entradas de eventos.

        // Comienzo a dibujar
        BeginDrawing();
        if (game.barL.getStatus() == 1)
            --game.barL;
        ClearBackground(game.colorBackground); // Limpio la pantalla con "celeste cielo"
        game.tree->DrawTree();
        game.player->Draw();
        for (int i = 0; i < 4; i++)
            game.Ramas[i]->Draw();

        if (IsKeyReleased(KEY_RIGHT))
        {
            game.barL.setStatus(1);
            game.score += 5;
            ++game.barL;
            game.player->move_right();
            for (int i = 0; i < 4; i++)
                game.Ramas[i]->Move();


            for (int i = 0; i < 4; i++)
            {
                game.GameOver = CheckCollisionRecs(game.Ramas[i]->getRectangle(), game.player->getRectangle());
                if (game.GameOver)
                    break;
            }
        }

        if (IsKeyReleased(KEY_LEFT))
        {
            game.barL.setStatus(1);
            game.score += 5;
            ++game.barL;
            game.player->move_left();
            for (int i = 0; i < 4; i++)
                game.Ramas[i]->Move();
            for (int i = 0; i < 4; i++)
            {
                game.GameOver = CheckCollisionRecs(game.Ramas[i]->getRectangle(), game.player->getRectangle());
                if (game.GameOver)
                    break;
            }
        }
        //Barra vida
        game.barL.drawBarLife();
        if (game.barL.getprogress() < 1)
            game.GameOver = 1;


        // Dibujo todos los elementos del juego.
        DrawText("Tankey", 20, 20, 40, game.colorText);
        DrawText(FormatText("Score: %05i", game.score), 950, 30, 30, game.colorText);

        // Finalizo el dibujado
        EndDrawing();
    }
    virtual ~GameState(){}
    virtual void Menu(SingletonGame *singleton){
        singleton->SetState(SingletonGame::ST_MENU);
    }
    virtual void End(SingletonGame *singleton){
        singleton->SetState(SingletonGame::ST_END);
    }

};

class EndState: public Manager{
public:
    EndState():Manager(std::string("End")){}
    void Update(SingletonGame *singleton)  {
        SingletonGame &game = SingletonGame::get();
        BeginDrawing();
        ClearBackground(game.colorBackground);
        DrawText(FormatText("GAME OVER"), 375, 300, 70, game.colorText);
        DrawText(FormatText("Score: %05i", game.score), 455, 400, 40, game.colorText);
        EndDrawing();
    }
    virtual ~EndState(){}
    virtual void Menu(SingletonGame *singleton){
        singleton->SetState(SingletonGame::ST_MENU);
    }
    virtual void Game(SingletonGame *singleton){
        singleton->SetState(SingletonGame::ST_GAME);
    }

};



#endif //RAYLIBTEMPLATE_MANAGER_H
