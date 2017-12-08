#include "mainmenu.h"
#include "ui_mainmenu.h"



MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    setWindowTitle("Tic Tac Toe");
    setWindowIcon(QIcon(":/images/smileImoji.png"));
    MainMenuGif();
}

MainMenu::~MainMenu()
{
    delete ui; // stashing
}

void MainMenu::on_PlayButton_clicked()
{
    QuickPlayScreen=new TicTacScreen();
    QuickPlayScreen->show();

}

void MainMenu::MainMenuGif()
{
    ui->gifLabel->setMask((new QPixmap(":/gif/tictacGIF.gif"))->mask());
    movie=new QMovie(":/gif/tictacGIF.gif");
    ui->gifLabel->setMovie(movie);
    movie->start();

}
