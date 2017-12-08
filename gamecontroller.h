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
    WinnerScreen *winnerscreen;
    void Start();

private:
    MainMenu *mainmenuScreen;



};

#endif // GAMECONTROLLER_H
