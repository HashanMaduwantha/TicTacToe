#include "mainmenu.h"
#include "ui_mainmenu.h"

#include "gamecontroller.h"

extern GameController *game;

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    setWindowTitle("Main Menu");
    setWindowIcon(QIcon(":/images/smileImoji.png"));
    MainMenuGif();

//    this->setStyleSheet("{background-image: url(:/images/bg1.jpg);}");
//    QPixmap pixmap;
//    pixmap.load(":/images/bg1.jpg");
//    QPainter paint(this);
//    int widWidth = this->ui->centralWidget->width();
//    int widHeight = this->ui->centralWidget->height();
//    pixmap = pixmap.scaled(widWidth, widHeight, Qt::KeepAspectRatioByExpanding);
//    paint.drawPixmap(0, 0, pixmap);
////    QWidget::paintEvent(pe);
///
    QPixmap bkgnd(":/images/bg1.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

MainMenu::~MainMenu()
{
    delete ui;
}
//Use to show up the GIF in the mainscreen
void MainMenu::MainMenuGif()
{
    ui->gifLabel->setMask((new QPixmap(":/gif/tictacGIF.gif"))->mask());
    movie=new QMovie(":/gif/tictacGIF.gif");
    ui->gifLabel->setMovie(movie);
    movie->start();

}

//Play Game button method is here
//Use to show up the TicTacScreen class UI
void MainMenu::on_PlayGameButton_clicked()
{
    game->tictacscreen->show();
    delete game->mainmenuScreen;/*game->mainmenuScreen->destroyed(QObject =0);*/
    game->tictacscreen->getPlayerName();

}
