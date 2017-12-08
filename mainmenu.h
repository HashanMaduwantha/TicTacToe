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


    void on_PlayGameButton_clicked();

private:
    Ui::MainMenu *ui;




    QMovie *movie;

};

#endif // MAINMENU_H
