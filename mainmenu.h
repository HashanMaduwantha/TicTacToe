#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QMovie>
#include <QBitmap>
#include <QIcon>


//#include "tictacscreen.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();

    void MainMenuGif();
    void on_PlayButton_clicked();
private slots:


private:
    Ui::MainMenu *ui;
    //TicTacScreen *QuickPlayScreen;



    QMovie *movie;

};

#endif // MAINMENU_H
