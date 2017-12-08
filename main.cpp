
#include <QApplication>
#include <QSplashScreen>
#include<QTimer>


#include "gamecontroller.h"
GameController *game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    QSplashScreen *splash=new QSplashScreen;
//    splash->setPixmap(QPixmap(":/images/originalWelcomeScreen.PNG"));
//    splash->show();
    game = new GameController();
    game->Start();


    //MainMenu w;
    //GameController w;
//    QTimer::singleShot(2500,splash,SLOT(close()));
//    QTimer::singleShot(2500,&w,SLOT(show()));



    //delete splash;

    //w.show();

    return a.exec();
}
