#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "mainmenu.h"
#include "tictacscreen.h"
#include "winnerscreen.h"


class GameController
{
public:
    GameController();
    TicTacScreen *tictacscreen;
    void Start();

private:
    MainMenu *mainmenuScreen;

    WinnerScreen *winnerscreen;

};

#endif // GAMECONTROLLER_H
