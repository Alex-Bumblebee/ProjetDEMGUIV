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
    vehicule.cpp \
    salarie.cpp \
    maladie.cpp \
    ficheDeSuivi.cpp \
    dossierDemenagement.cpp \
    demenageur.cpp \
    conge.cpp \
    commercial.cpp \
    agence.cpp \
    absence.cpp \
    dialogGestionDemenagement.cpp \
    dialogGestiondemenagementCreer.cpp \
    dialogGestionVehicules.cpp \
    dialogCreerAgence.cpp \
    dialogGestionCommercial.cpp \
    dialoggestionmodifier.cpp \
    dialogabsence.cpp
    


HEADERS  += mainwindow.h \
    dialogacceslogiciel.h \
    vehicule.h \
    salarie.h \
    maladie.h \
    ficheDeSuivi.h \
    dossierDemenagement.h \
    demenageur.h \
    conge.h \
    commercial.h \
    agence.h \
    absence.h \
    dialogGestionDemenagement.h \
    dialogGestionDemenagementCreer.h \
    dialogGestionVehicules.h \
    dialogCreerAgence.h \
    dialogGestionCommercial.h \
    dialoggestionmodifier.h \
    dialogabsence.h
    

FORMS    += mainwindow.ui \
    dialogacceslogiciel.ui \
    dialogGestionDemenagement.ui \
    dialogGestionDemenagementCreer.ui \
    dialoggGestionVehicules.ui \
    dialogCreerAgence.ui \
    dialogGestionCommercial.ui \
    dialogGestionCommercial.ui \
    dialoggestionmodifier.ui \
    dialogabsence.ui
    


