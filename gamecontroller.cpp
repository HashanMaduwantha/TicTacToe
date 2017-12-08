#include "gamecontroller.h"

GameController::GameController()
{
   // Start();
}

void GameController::Start()
{
    mainmenuScreen = new MainMenu();
    mainmenuScreen->show();

    tictacscreen = new TicTacScreen();

    //mainmenuScreen->MainMenuGif();
    //mainmenuScreen->on_PlayButton_clicked();

    //tictacscreen->getPlayerName();


}

