#include "tictacscreen.h"
#include "ui_tictacscreen.h"

#include <QInputDialog>

TicTacScreen::TicTacScreen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TicTacScreen)
{
    ui->setupUi(this);



    whoseTurn="X";
    PlayerOne="Player One";
    PlayerTwo="Player Two";
    PlayerOneCount=0;
    PlayerTwoCount=0;
    getPlayerName();

}

TicTacScreen::~TicTacScreen()
{
    delete ui;
}

void TicTacScreen::getPlayerName()
{
    bool ok;
    PlayerOne=QInputDialog::getText(this,tr("Name Please"),tr("Player One Name:"),
                                    QLineEdit::Normal,QDir::home().dirName(),&ok);
    PlayerTwo=QInputDialog::getText(this,tr("Name Please"),tr("Player Two Name:"),
                                    QLineEdit::Normal,QDir::home().dirName(),&ok);
    if(PlayerOne=="")
    {    PlayerOne="Player One";}
    if(PlayerTwo=="")
    {   PlayerTwo="Player Two"; }

    ui->labelPlayerOneScore->setText(PlayerOne);

    ui->labelPlayerTwoScore->setText(PlayerTwo);
}

void TicTacScreen::DetermineWhoseTurn()
{
    if(whoseTurn=="X")
    {
        whoseTurn="O";
    }
    else
    {
        whoseTurn="X";
    }
}

void TicTacScreen::DetermineIfWin()
{
    QString btn1Value=ui->Button1->text();
    QString btn2Value=ui->Button2->text();
    QString btn3Value=ui->Button3->text();
    QString btn4Value=ui->Button4->text();
    QString btn5Value=ui->Button5->text();
    QString btn6Value=ui->Button6->text();
    QString btn7Value=ui->Button7->text();
    QString btn8Value=ui->Button8->text();
    QString btn9Value=ui->Button9->text();





        //Checking whether "X" user has won
    if(btn1Value=="X" && btn4Value=="X" && btn7Value=="X")
        {
            Xwin();
        }
    if(btn2Value=="X" && btn5Value=="X" && btn8Value=="X")
        {
            Xwin();
        }
    if(btn3Value=="X" && btn6Value=="X" && btn9Value=="X")
        {
            Xwin();
        }
    if(btn1Value=="X" && btn2Value=="X" && btn3Value=="X")
        {
            Xwin();
        }
    if(btn4Value=="X" && btn5Value=="X" && btn6Value=="X")
        {
            Xwin();
        }
    if(btn7Value=="X" && btn8Value=="X" && btn9Value=="X")
        {
            Xwin();
        }
    if(btn1Value=="X" && btn5Value=="X" && btn9Value=="X")
        {
            Xwin();
        }
    if(btn3Value=="X" && btn5Value=="X" && btn7Value=="X")
        {
            Xwin();
        }


    //Checking whether "O" user has won
        if(btn1Value=="O" && btn4Value=="O" && btn7Value=="O")
        {
            Owin();
        }
        if(btn2Value=="O" && btn5Value=="O" && btn8Value=="O")
        {
            Owin();
        }
        if(btn3Value=="O" && btn6Value=="O" && btn9Value=="O")
        {
           Owin();
        }
        if(btn1Value=="O" && btn2Value=="O" && btn3Value=="O")
        {
            Owin();
        }
        if(btn4Value=="O" && btn5Value=="O" && btn6Value=="O")
        {
            Owin();
        }
        if(btn7Value=="O" && btn8Value=="O" && btn9Value=="O")
        {
            Owin();
        }
        if(btn1Value=="O" && btn5Value=="O" && btn9Value=="O")
        {
            Owin();
        }
        if(btn3Value=="O" && btn5Value=="O" && btn7Value=="O")
    {
        Owin();
    }

}

void TicTacScreen::setScore()
{
    ui->labelPlayerOneScore->setText(PlayerOne);

    ui->labelPlayerTwoScore->setText(PlayerTwo);

    ui->PlayerOnelcdNumber->display(PlayerOneCount);
    ui->PlayerTwolcdNumber->display(PlayerTwoCount);

}

void TicTacScreen::Owin()
{
    winner();
    PlayerOneCount++;
    ResetGame();

}

void TicTacScreen::Xwin()
{
    winner();
    PlayerTwoCount++;
    ResetGame();

}

void TicTacScreen::TieGame()
{
    QString btn1Value=ui->Button1->text();
    QString btn2Value=ui->Button2->text();
    QString btn3Value=ui->Button3->text();
    QString btn4Value=ui->Button4->text();
    QString btn5Value=ui->Button5->text();
    QString btn6Value=ui->Button6->text();
    QString btn7Value=ui->Button7->text();
    QString btn8Value=ui->Button8->text();
    QString btn9Value=ui->Button9->text();

    if(!(btn1Value.isEmpty()) && !(btn2Value.isEmpty()) && !(btn3Value.isEmpty()) &&
            !(btn4Value.isEmpty()) && !(btn5Value.isEmpty()) &&
            !(btn6Value.isEmpty()) && !(btn7Value.isEmpty()) &&
            !(btn8Value.isEmpty()) && !(btn9Value.isEmpty()))
    {

    QMessageBox::information(this,"Game Results","No winner!! \n  Match is a Tie ");
    ResetGame();
    }
}

void TicTacScreen::ResetGame()
{
    ui->Button1->setText("");
    ui->Button2->setText("");
    ui->Button3->setText("");
    ui->Button4->setText("");
    ui->Button5->setText("");
    ui->Button6->setText("");
    ui->Button7->setText("");
    ui->Button8->setText("");
    ui->Button9->setText("");

    setScore();
}

void TicTacScreen::winner()
{
    WinScreen=new WinnerScreen();
    //if(PlayerOneCount>PlayerTwoCount)
    //

    WinScreen->show();
}

void TicTacScreen::on_Button1_clicked()
{
    ui->Button1->setText(whoseTurn);
    if(whoseTurn=="X")
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::red);

        ui->Button1->setPalette(*palette1);

    }
    else
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::blue);
        ui->Button1->setPalette(*palette1);
    }

    DetermineWhoseTurn();
    DetermineIfWin();
    TieGame();
}

void TicTacScreen::on_Button2_clicked()
{
    ui->Button2->setText(whoseTurn);
    if(whoseTurn=="X")
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::red);

        ui->Button2->setPalette(*palette1);

    }
    else
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::blue);
        ui->Button2->setPalette(*palette1);
    }

    DetermineWhoseTurn();
    DetermineIfWin();
    TieGame();
}

void TicTacScreen::on_Button3_clicked()
{
    ui->Button3->setText(whoseTurn);
    if(whoseTurn=="X")
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::red);

        ui->Button3->setPalette(*palette1);

    }
    else
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::blue);
        ui->Button3->setPalette(*palette1);
    }

    DetermineWhoseTurn();
    DetermineIfWin();
    TieGame();
}

void TicTacScreen::on_Button4_clicked()
{
    ui->Button4->setText(whoseTurn);
    if(whoseTurn=="X")
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::red);

        ui->Button4->setPalette(*palette1);

    }
    else
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::blue);
        ui->Button4->setPalette(*palette1);
    }

    DetermineWhoseTurn();
    DetermineIfWin();
    TieGame();
}

void TicTacScreen::on_Button5_clicked()
{
    ui->Button5->setText(whoseTurn);
    if(whoseTurn=="X")
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::red);

        ui->Button5->setPalette(*palette1);

    }
    else
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::blue);
        ui->Button5->setPalette(*palette1);
    }

    DetermineWhoseTurn();
    DetermineIfWin();
    TieGame();
}

void TicTacScreen::on_Button6_clicked()
{
    ui->Button6->setText(whoseTurn);
    if(whoseTurn=="X")
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::red);

        ui->Button6->setPalette(*palette1);

    }
    else
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::blue);
        ui->Button6->setPalette(*palette1);
    }

    DetermineWhoseTurn();
    DetermineIfWin();
    TieGame();
}

void TicTacScreen::on_Button7_clicked()
{
    ui->Button7->setText(whoseTurn);
    if(whoseTurn=="X")
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::red);

        ui->Button7->setPalette(*palette1);

    }
    else
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::blue);
        ui->Button7->setPalette(*palette1);
    }

    DetermineWhoseTurn();
    DetermineIfWin();
    TieGame();
}

void TicTacScreen::on_Button8_clicked()
{
    ui->Button8->setText(whoseTurn);
    if(whoseTurn=="X")
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::red);

        ui->Button8->setPalette(*palette1);

    }
    else
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::blue);
        ui->Button8->setPalette(*palette1);
    }

    DetermineWhoseTurn();
    DetermineIfWin();
    TieGame();
}

void TicTacScreen::on_Button9_clicked()
{
    ui->Button9->setText(whoseTurn);
    if(whoseTurn=="X")
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::red);

        ui->Button9->setPalette(*palette1);

    }
    else
    {
        QPalette *palette1 = new QPalette();
        palette1->setColor(QPalette::ButtonText,Qt::blue);
        ui->Button9->setPalette(*palette1);
    }

    DetermineWhoseTurn();
    DetermineIfWin();
    TieGame();
}

void TicTacScreen::on_ResetButton_clicked()
{
    ResetGame();
}

void TicTacScreen::on_NewGameButton_clicked()
{
    PlayerOne="";
    PlayerTwo="";
    PlayerOneCount=0;
    PlayerTwoCount=0;
    ui->labelPlayerOneScore->setText(PlayerOne);

    ui->labelPlayerTwoScore->setText(PlayerTwo);

    ui->PlayerOnelcdNumber->display(PlayerOneCount);
    ui->PlayerTwolcdNumber->display(PlayerTwoCount);
    getPlayerName();
}