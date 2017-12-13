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

//    QPalette* palette1 = new QPalette();
//        palette1->setColor(QPalette::Button,Qt::blue);
//    ui->PlayGameButton->palette(palette1);

    MainMenuGif();

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

void MainMenu::wallpaper()
{
    QPixmap pic(":/images/bg1.jpg");
    pic = pic.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, pic);
    this->setPalette(palette);
}

//Play Game button method is here
//Use to show up the TicTacScreen class UI
void MainMenu::on_PlayGameButton_clicked()
{
    game->tictacscreen->show();
    delete game->mainmenuScreen;
    game->tictacscreen->getPlayerName();

}
