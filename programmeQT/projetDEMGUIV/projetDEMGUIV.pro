#-------------------------------------------------
#
# Project created by QtCreator 2016-12-05T13:11:24
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = projetDEMGUIV
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogacceslogiciel.cpp \
    dialoggestiondemenagement.cpp

HEADERS  += mainwindow.h \
    dialogacceslogiciel.h \
    dialoggestiondemenagement.h

FORMS    += mainwindow.ui \
    dialogacceslogiciel.ui \
    dialoggestiondemenagement.ui
