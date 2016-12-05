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
    dialoggestiondemenagement.cpp \
    vehicule.cpp \
    salarie.cpp \
    maladie.cpp \
    ficheDeSuivi.cpp \
    dossierDemenagement.cpp \
    demenageur.cpp \
    conge.cpp \
    commercial.cpp \
    agence.cpp \
    absence.cpp

HEADERS  += mainwindow.h \
    dialogacceslogiciel.h \
    dialoggestiondemenagement.h \
    vehicule.h \
    salarie.h \
    maladie.h \
    ficheDeSuivi.h \
    dossierDemenagement.h \
    demenageur.h \
    conge.h \
    commercial.h \
    agence.h \
    absence.h

FORMS    += mainwindow.ui \
    dialogacceslogiciel.ui \
    dialoggestiondemenagement.ui
