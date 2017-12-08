#-------------------------------------------------
#
# Project created by QtCreator 2017-12-08T08:08:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TicTacToe-2Play
TEMPLATE = app


SOURCES += main.cpp\
        mainmenu.cpp \
    tictacscreen.cpp \
    winnerscreen.cpp

HEADERS  += mainmenu.h \
    tictacscreen.h \
    winnerscreen.h

FORMS    += mainmenu.ui \
    tictacscreen.ui \
    winnerscreen.ui

RESOURCES += \
    resources.qrc
