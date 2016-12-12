#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogabsence.h"
#include "dialogGestionVehicules.h"
#include "dialogCreerAgence.h"
#include "dialogGestionCommercial.h"
#include "dialoggestionmodifier.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //chargeLesVehicules();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonGestionDemenagements_clicked()
{

}

void MainWindow::on_pushButtonGererAbsence_clicked()
{
    DialogAbsence diagAbsence;
    diagAbsence.exec();
}

void MainWindow::on_pushButtonGererVehicules_clicked()
{
    //comm pour dadou <3
    DialogGestionVehicules diagVehicules;
    diagVehicules.exec();
}

void MainWindow::on_pushButtonCreerAgence_clicked()
{
        DialogCreerAgence diagCreerAgence;
        diagCreerAgence.exec();
}

void MainWindow::on_pushButtonCreerDossier_clicked()
{
    DialogGestionCommercial diagGestionCommercial;
    diagGestionCommercial.exec();
}

void MainWindow::on_pushButtonModifierDossier_clicked()
{
    DialogGestionModifier diagGestionModifier;
    diagGestionModifier.exec();
}
