#include "mainmenu.h"
#include <QApplication>
#include <QSplashScreen>
#include<QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash=new QSplashScreen;
    splash->setPixmap(QPixmap(":/images/originalWelcomeScreen.PNG"));
    splash->show();


    MainMenu w;
    QTimer::singleShot(2500,splash,SLOT(close()));
    QTimer::singleShot(2500,&w,SLOT(show()));



    //delete splash;

    //w.show();

    return a.exec();
}