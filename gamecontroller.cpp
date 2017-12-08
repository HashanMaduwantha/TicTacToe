#include "gamecontroller.h"

GameController::GameController()
{
   // Start();
}

void GameController::Start()
{
    mainmenuScreen = new MainMenu();
    tictacscreen = new TicTacScreen();
    mainmenuScreen->show();



    //if(()
    //mainmenuScreen->on_PlayButton_clicked();

    //tictacscreen->getPlayerName();


}

