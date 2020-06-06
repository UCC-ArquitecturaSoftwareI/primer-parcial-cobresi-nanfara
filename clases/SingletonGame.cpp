//
// Created by Abril on 5/6/2020.
//
#include "Manager.h"
#include "SingletonGame.h"


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
    m_pState->Update(this);
}

void SingletonGame::End() {
    m_pState->Update(this);
}

void SingletonGame::Game() {
    m_pState->Update(this);
}
