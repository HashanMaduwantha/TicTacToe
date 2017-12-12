#ifndef TICTACSCREEN_H
#define TICTACSCREEN_H

#include <QWidget>
#include <QtGui>
#include <QtCore>
#include <QMessageBox>
#include <QPixmap>
#include <QInputDialog>
#include <QString>



namespace Ui {
class TicTacScreen;
}

class TicTacScreen : public QWidget
{
    Q_OBJECT

public:
    explicit TicTacScreen(QWidget *parent = 0);
    ~TicTacScreen();
    Ui::TicTacScreen *ui;

    QString whoseTurn;
    //qint8 result;
    QString PlayerOne;
    QString PlayerTwo;
    qint8 PlayerOneCount;
    qint8 PlayerTwoCount;
    QString WinnerPlayer;

    void getPlayerName();
    void DetermineWhoseTurn();
    void DetermineIfWin();
    void setScore();

    void Owin();
    void Xwin();
    void TieGame();
    void ResetGame();

    QString getWinnerPlayer() const;
    void setWinnerPlayer(const QString &value);

    void setWhoseTurn(const QString &value);

    QString getWhoseTurn() const;

    QString getPlayerOne() const;

    QString getPlayerTwo() const;

    void setPlayerOne(const QString &value);

    void setPlayerTwo(const QString &value);

    void setPlayerOneCount(const qint8 &value);

    qint8 getPlayerOneCount() const;

    qint8 getPlayerTwoCount() const;
    void setPlayerTwoCount(const qint8 &value);

    void playerChanceHighlighterIf_O();
    void playerChanceHighlighterIf_X();
//    void buttonEnabler();
signals:

    void setWinPlayer(QString a);


private:

    void winner();


protected:
    //void paintEvent(QPaintEvent *e);
    QPalette *palette1;
    //QMessageBox msgBox;
    QPixmap *pixmap;
    //void imagesize();

private slots:
//    void on_Button1_clicked();
//    void on_Button2_clicked();
//    void on_Button3_clicked();
//    void on_Button4_clicked();
//    void on_Button5_clicked();
//    void on_Button6_clicked();
//    void on_Button7_clicked();
//    void on_Button8_clicked();
//    void on_Button9_clicked();
    void on_ResetButton_clicked();
    void on_NewGameButton_clicked();
    void on_Button1_pressed();
    void on_Button2_pressed();
    void on_Button3_pressed();
    void on_Button4_pressed();
    void on_Button5_pressed();
    void on_Button6_pressed();
    void on_Button7_pressed();
    void on_Button8_pressed();
    void on_Button9_pressed();
};

#endif // TICTACSCREEN_H
