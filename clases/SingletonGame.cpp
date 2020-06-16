//
// Created by Abril on 5/6/2020.
//

#include "SingletonGame.h"

#include "MenuState.h"
#include "GameState.h"
#include "EndState.h"


void SingletonGame::SetState(SingletonGame::State state) {
    delete m_pState;
    if(state == ST_MENU)
    {
        m_pState = new MenuState();
    }
    else if(state == ST_GAME)
    {
        m_pState = new GameState();
    }
    else
    {
        m_pState = new EndState();
    }
}


SingletonGame::~SingletonGame() {
    delete m_pState;
}

void SingletonGame::Menu() {
    m_pState->Menu(this);
}

void SingletonGame::End() {
    m_pState->End(this);
}

void SingletonGame::Game() {
    m_pState->Game(this);
}

void SingletonGame::Update() {
    m_pState->Update( );
}

SingletonGame::SingletonGame(): m_pState(new MenuState()) {
    score = 0;
    GameOver = false;
    start = false;
    colorBackground = SKYBLUE;
    colorText = BLACK;
    mousePoint = { 0.0f, 0.0f};
    tema = 0;
    sprite = LoadTexture("resources/Sprite.png");
}