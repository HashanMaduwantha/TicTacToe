#ifndef GAMECONTROLLER_H
#define GAMECONTROLLER_H

#include "mainmenu.h"
#include "tictacscreen.h"
#include "winnerscreen.h"

//#include <QMovie>

class GameController
{
public:
    GameController();
    MainMenu *mainmenuScreen;
    TicTacScreen *tictacscreen;
    WinnerScreen *winnerscreen;

//    QMovie *movie;

    void Start();

private:





};

#endif // GAMECONTROLLER_H
