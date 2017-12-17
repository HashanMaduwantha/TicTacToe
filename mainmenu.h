#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QMovie>
#include <QBitmap>
#include <QIcon>
#include <QPainter>




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
    void wallpaper();

private slots:


    void on_PlayGameButton_clicked();

private:
    Ui::MainMenu *ui;




    QMovie *movie;

};

#endif // MAINMENU_H
