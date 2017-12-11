#ifndef WINNERSCREEN_H
#define WINNERSCREEN_H

#include <QWidget>

#include <QLabel>
#include <QPixmap>
#include <QMovie>

namespace Ui {
class WinnerScreen;
}

class WinnerScreen : public QWidget
{
    Q_OBJECT

public:
    explicit WinnerScreen(QWidget *parent = 0);
    ~WinnerScreen();

public slots:
    void AddingWinner();

private:
    Ui::WinnerScreen *ui;




    QMovie *Cmovie;
    //TicTacScreen *tictac;


    void WinnerGIF();
};

#endif // WINNERSCREEN_H
