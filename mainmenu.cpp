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
    game->tictacscreen->getPlayerName();

}
