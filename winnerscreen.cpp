#include "winnerscreen.h"
#include "ui_winnerscreen.h"

#include "gamecontroller.h"
#include <QString>
extern GameController *game;


WinnerScreen::WinnerScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WinnerScreen)
{
    ui->setupUi(this);
    WinnerGIF();
   // connect(game->tictacscreen,SIGNAL(setWinName()),this,SLOT(AddingWinner()));
}

WinnerScreen::~WinnerScreen()
{
    delete ui;
}

void WinnerScreen::AddingWinner(QString winner)
{

    ui->LabelWinPlayer->setText(winner);
    //game->tictacscreen->getWinnerName()
}

void WinnerScreen::WinnerGIF()
{
    Cmovie=new QMovie(":/gif/giphycongradulations.gif");
    Cmovie->setScaledSize(QSize(375,200));
    ui->labelCongradulations->setMovie(Cmovie);
    Cmovie->start();

//    game->Cmovie->setScaledSize(QSize(375,200));
//    ui->labelCongradulations->setMovie(game->Cmovie);
//    game->Cmovie->start();

    //tictac=new TicTacSceen();
    //tictac->PlayerOne;
    //ui->LabelWinPlayer->setText();
}

