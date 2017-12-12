#include "gamecontroller.h"
#include <QDebug>

GameController::GameController()
{
   // Start();
}

void GameController::Start()
{

//MainMenu class instance is created
    mainmenuScreen = new MainMenu();

//TicTacScreen class instance is created
    tictacscreen = new TicTacScreen();

//WinnerScreen class is instance is created
    winnerscreen = new WinnerScreen();
//MainMenu screen is displayed
    mainmenuScreen->show();
    qDebug() << "MainMenuOpens";



}

