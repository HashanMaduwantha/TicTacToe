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
    TicTacScreen *tictacscreen;
    WinnerScreen *winnerscreen;

//    QMovie *movie;
    void Start();

private:
    MainMenu *mainmenuScreen;




};

#endif // GAMECONTROLLER_H
