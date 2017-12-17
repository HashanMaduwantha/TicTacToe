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
    void setWinner(QString winner);

private:
    Ui::WinnerScreen *ui;




    QMovie *Cmovie;



    void WinnerGIF();
};

#endif // WINNERSCREEN_H
