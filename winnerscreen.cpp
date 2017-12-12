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

    setWindowTitle("Winner");
    setWindowIcon(QIcon(":/images/smileImoji.png"));
}

WinnerScreen::~WinnerScreen()
{
    delete ui;
}

//Using this method WINNER NAME will be applied to UI of WinnerScreen class
void WinnerScreen::setWinner(QString winner)
{

    ui->LabelWinPlayer->setText(winner);

}

//Using this method GIF on WinnerScreen class is displayed
void WinnerScreen::WinnerGIF()
{
    Cmovie=new QMovie(":/gif/giphycongradulations.gif");
    Cmovie->setScaledSize(QSize(375,200));
    ui->labelCongradulations->setMovie(Cmovie);
    Cmovie->start();
}

