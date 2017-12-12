
#include <QApplication>
#include <QSplashScreen>
#include<QTimer>


#include "gamecontroller.h"
GameController *game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


//GameController is started!
    game = new GameController();
    game->Start();

    //MainMenu w;
    //w.show();

    return a.exec();
}
