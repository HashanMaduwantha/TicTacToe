
#include <QApplication>


#include <QPixmap>

#include "gamecontroller.h"
GameController *game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    QPixmap bkgnd(":/images/bg1.jpg");
//    bkgnd = bkgnd.scaled(game->mainmenuScreen->size(), Qt::IgnoreAspectRatio);
//    QPalette palette;
//    palette.setBrush(QPalette::Background, bkgnd);
//    game->mainmenuScreen->setPalette(palette);


//GameController is started!
    game = new GameController();
    game->Start();
    game->mainmenuScreen->wallpaper();

    //MainMenu w;
    //w.show();

    return a.exec();
}
