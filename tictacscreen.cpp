#include "tictacscreen.h"
#include "ui_tictacscreen.h"

#include <QInputDialog>
#include "gamecontroller.h"

extern GameController *game;

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

}

TicTacScreen::~TicTacScreen()
{
    delete ui;
}

qint8 TicTacScreen::getPlayerTwoCount() const
{
    return PlayerTwoCount;
}

void TicTacScreen::setPlayerTwoCount(const qint8 &value)
{
    PlayerTwoCount = value;
}

qint8 TicTacScreen::getPlayerOneCount() const
{
    return PlayerOneCount;
}

void TicTacScreen::setPlayerOneCount(const qint8 &value)
{
    PlayerOneCount = value;
}

void TicTacScreen::setPlayerTwo(const QString &value)
{
    PlayerTwo = value;
}

void TicTacScreen::setPlayerOne(const QString &value)
{
    PlayerOne = value;
}

QString TicTacScreen::getPlayerTwo() const
{
    return PlayerTwo;
}

QString TicTacScreen::getPlayerOne() const
{
    return PlayerOne;
}

QString TicTacScreen::getWhoseTurn() const
{
    return whoseTurn;
}

void TicTacScreen::setWhoseTurn(const QString &value)
{
    whoseTurn = value;
}

QString TicTacScreen::getWinnerPlayer() const
{
    return WinnerPlayer;
}

void TicTacScreen::setWinnerPlayer(const QString &value)
{
    WinnerPlayer = value;
}



void TicTacScreen::getPlayerName()
{
    bool ok;
    QString a=QInputDialog::getText(this,tr("Name Please"),tr("Player One Name:"),
                                    QLineEdit::Normal,QDir::home().dirName(),&ok);
    setPlayerOne(a);
    QString b=QInputDialog::getText(this,tr("Name Please"),tr("Player Two Name:"),
                                    QLineEdit::Normal,QDir::home().dirName(),&ok);
    setPlayerTwo(b);

    if(PlayerOne=="")
    {    setPlayerOne("Player One"); }
    if(PlayerTwo=="")
    {   setPlayerTwo("Player Two");  }

    ui->labelPlayerOneScore->setText(getPlayerOne());

    ui->labelPlayerTwoScore->setText(getPlayerTwo());
}

void TicTacScreen::DetermineWhoseTurn()
{
    if(whoseTurn=="X")
    {

        setWhoseTurn("O");
    }
    else
    {

        setWhoseTurn("X");
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
    ui->labelPlayerOneScore->setText(getPlayerOne());

    ui->labelPlayerTwoScore->setText(getPlayerTwo());

    ui->PlayerOnelcdNumber->display(getPlayerOneCount());
    ui->PlayerTwolcdNumber->display(getPlayerTwoCount());

    if(PlayerOneCount>PlayerTwoCount)
    {  //winner is PlayerOne

        setWinnerPlayer(getPlayerOne());
    }
    else
    { //winner is PlayerTwo

        setWinnerPlayer(getPlayerTwo());
    }

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
    game->winnerscreen->show();


}

void TicTacScreen::on_Button1_clicked()
{
    ui->Button1->setText(getWhoseTurn());
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
    ui->Button2->setText(getWhoseTurn());
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
    ui->Button3->setText(getWhoseTurn());
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
    ui->Button4->setText(getWhoseTurn());
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
    ui->Button5->setText(getWhoseTurn());
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
    ui->Button6->setText(getWhoseTurn());
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
    ui->Button7->setText(getWhoseTurn());
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
    ui->Button8->setText(getWhoseTurn());
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
    ui->Button9->setText(getWhoseTurn());
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
    ui->Button1->setText("");
    ui->Button2->setText("");
    ui->Button3->setText("");
    ui->Button4->setText("");
    ui->Button5->setText("");
    ui->Button6->setText("");
    ui->Button7->setText("");
    ui->Button8->setText("");
    ui->Button9->setText("");



    setPlayerOneCount(0);
    setPlayerTwoCount(0);

    ui->PlayerOnelcdNumber->display(getPlayerOneCount());
    ui->PlayerTwolcdNumber->display(getPlayerTwoCount());
    getPlayerName();
}
