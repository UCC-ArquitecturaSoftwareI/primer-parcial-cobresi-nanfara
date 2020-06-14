//
// Created by Abril on 6/6/2020.
//
//
// Created by Abril on 6/6/2020.
//
#include "VisitorDraw.h"
#include "SingletonGame.h"

void VisitorDraw::Visit(NightMonkey &monkey) {
    position.y = 450;
    if (monkey.lado == 1)
    {
        position.x = 600;
        monkey.rect.y = 1500;
        if (monkey.mov)
        {
            if (monkey.rect.x == 900)
                monkey.rect.x = 0;
            else
                monkey.rect.x = monkey.rect.x+300;
        }
    }
    if (monkey.lado == -1)
    {
        position.x = 300;
        monkey.rect.y = 1800;
        if (monkey.mov)
        {
            if (monkey.rect.x == 900)
                monkey.rect.x = 0;
            else
                monkey.rect.x = monkey.rect.x+300;
        }
    }
    DrawTextureRec(SingletonGame::get().sprite, monkey.rect, position, WHITE);
    monkey.monkey_position = position;
}

void VisitorDraw::Visit(LightMonkey &monkey) {
    position.y = 450;
    if (monkey.lado == 1)
    {
        position.x = 600;
        monkey.rect.y = 300;
        if (monkey.mov)
        {
            if (monkey.rect.x == 900)
                monkey.rect.x = 0;
            else
                monkey.rect.x = monkey.rect.x+300;
        }
    }
    if (monkey.lado == -1)
    {
        position.x = 300;
        monkey.rect.y = 600;
        if (monkey.mov)
        {
            if (monkey.rect.x == 900)
                monkey.rect.x = 0;
            else
                monkey.rect.x = monkey.rect.x+300;
        }
    }
    DrawTextureRec(SingletonGame::get().sprite, monkey.rect, position, WHITE);
    monkey.monkey_position = position;

}

void VisitorDraw::Visit(Tree &tree) {
    if(tree.lado == -1)
    {
        rect.y = 1200;
        rect.x = 900;
    }
    if(tree.lado == 1)
    {
        rect.y = 1200;
        rect.x = 600;
    }
    DrawTextureRec(SingletonGame::get().sprite, rect, tree.position, WHITE);
}

void VisitorDraw::Visit(TreeVetas &tree) {
    if(tree.lado == -1)
    {
        rect.y = 1200;
        rect.x = 300;
    }
    if(tree.lado == 1)
    {
        rect.y = 1200;
        rect.x = 0;
    }
    DrawTextureRec(SingletonGame::get().sprite, rect, tree.position, WHITE);

}

void VisitorDraw::Visit(Rama &rama) {
    CallRama(rama);
}

void VisitorDraw::Visit(NightButton &button) {

    if (!button.estado)
    {
        rect.x = 1200;
        rect.y = 600;
    } else
    {
        rect.x = 1200;
        rect.y = 900;
    }
    DrawTextureRec(SingletonGame::get().sprite, rect, button.position, WHITE);

}

void VisitorDraw::Visit(LightButton &button) {

    if (!button.estado)
    {
        rect.x = 1200;
        rect.y = 0;
    } else
    {
        rect.x = 1200;
        rect.y = 300;
    }
    DrawTextureRec(SingletonGame::get().sprite, rect, button.position, WHITE);

}

void VisitorDraw::Visit(StartButton &button) {
    if (!button.estado)
    {
        if(button.theme)
        {
            rect.x = 0;
            rect.y = 3300;
        }
        else
        {
            rect.x = 600;
            rect.y = 3300;
        }

    } else
    {
        if(button.theme)
        {
            rect.x = 300;
            rect.y = 3300;
        }
        else
        {
            rect.x = 900;
            rect.y = 3300;
        }

    }
    DrawTextureRec(SingletonGame::get().sprite, rect, button.position, WHITE);

}

void VisitorDraw::Visit(Skin &skin) {

    if(skin.tema)
    {
        rect.x = 300;
        rect.y = 0;
    }
    else
    {
        rect.x = 0;
        rect.y = 0;
    }

    DrawTextureRec(SingletonGame::get().sprite, rect, skin.position, WHITE);

}

void VisitorDraw::CallRama(Rama &rama) {
    if (rama.lado == -1)
    {
        switch (rama.rama_sector) {
            case 1:
                rama.rama_position.x = 190;
                rama.rama_position.y = -150;
                break;
            case 2:
                rama.rama_position.x = 190;
                rama.rama_position.y = 150;
                break;
            case 3:
                rama.rama_position.x = 190;
                rama.rama_position.y = 450;
                break;
            case 4:
                rama.rama_position.x = 190;
                rama.rama_position.y = 750;
                break;
        }
    }
    else
    {
        switch (rama.rama_sector) {
            case 1:
                rama.rama_position.x = 710;
                rama.rama_position.y = -150;
                break;
            case 2:
                rama.rama_position.x = 710;
                rama.rama_position.y = 150;
                break;
            case 3:
                rama.rama_position.x = 710;
                rama.rama_position.y = 450;
                break;
            case 4:
                rama.rama_position.x = 710;
                rama.rama_position.y = 750;
                break;
        }
    }
    DrawTextureRec(SingletonGame::get().sprite, rama.rect, rama.rama_position, WHITE);

}
