#ifndef TICTACSCREEN_H
#define TICTACSCREEN_H

#include <QWidget>
#include <QtGui>
#include <QtCore>
#include <QMessageBox>
#include <QPixmap>
#include <QInputDialog>

//#include "winnerscreen.h"

namespace Ui {
class TicTacScreen;
}

class TicTacScreen : public QWidget
{
    Q_OBJECT

public:
    explicit TicTacScreen(QWidget *parent = 0);
    ~TicTacScreen();

    QString whoseTurn;
    qint8 result;
    QString PlayerOne;
    QString PlayerTwo;
    qint8 PlayerOneCount;
    qint8 PlayerTwoCount;


    void getPlayerName();
    void DetermineWhoseTurn();
    void DetermineIfWin();
    void setScore();

    void Owin();
    void Xwin();
    void TieGame();
    void ResetGame();

private:
    Ui::TicTacScreen *ui;
    //WinnerScreen *WinScreen;
    void winner();

protected:
    //void paintEvent(QPaintEvent *e);
    QPalette *palette1;
    //QMessageBox msgBox;
    QPixmap *pixmap;
    //void imagesize();

private slots:
    void on_Button1_clicked();
    void on_Button2_clicked();
    void on_Button3_clicked();
    void on_Button4_clicked();
    void on_Button5_clicked();
    void on_Button6_clicked();
    void on_Button7_clicked();
    void on_Button8_clicked();
    void on_Button9_clicked();
    void on_ResetButton_clicked();
    void on_NewGameButton_clicked();
};

#endif // TICTACSCREEN_H
