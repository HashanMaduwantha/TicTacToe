#include "winnerscreen.h"
#include "ui_winnerscreen.h"

WinnerScreen::WinnerScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WinnerScreen)
{
    ui->setupUi(this);
    WinnerGIF();
}

WinnerScreen::~WinnerScreen()
{
    delete ui;
}

void WinnerScreen::WinnerGIF()
{
    Cmovie=new QMovie(":/gif/giphycongradulations.gif");
    Cmovie->setScaledSize(QSize(280,200));
    ui->labelCongradulations->setMovie(Cmovie);
    Cmovie->start();

    //tictac=new TicTacSceen();
    //tictac->PlayerOne;
    //ui->LabelWinPlayer->setText();
}

