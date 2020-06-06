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
    Manager(std::string name);
//    std::string GetName(){
//        return m_name;
//    }
    virtual ~Manager();
    virtual void Menu(SingletonGame *singleton);
    virtual void Game(SingletonGame *singleton);
    virtual void End(SingletonGame *singleton);
    virtual void Update(SingletonGame *singleton);

    //int UpdateMenu();       // 1 = noche// 0 = dia
    //static void UpdateDrawFrame(void);          // Función dedicada a operar cada frame
    //void UpdateDrawEnd();
};



#endif //RAYLIBTEMPLATE_MANAGER_H
