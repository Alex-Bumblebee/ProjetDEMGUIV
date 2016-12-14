#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialogabsence.h"
#include "dialogGestionVehicules.h"
#include "dialogCreerAgence.h"
#include "dialogGestionCommercial.h"
#include "dialoggestionmodifier.h"
#include "dialogConsulterDossiers.h"
#include "dialogacceslogiciel.h"
#include "QSqlQuery"
#include <QDebug>

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

void MainWindow::on_pushButtonConsultDossier_clicked()
{
    DialogConsulterDossiers diagConsulterDossiers;
    diagConsulterDossiers.exec();
}

void MainWindow::setTypeUtilisateur(int leType)
{
    switch (leType)
    {
    case 1 :
        //ADMIN
        break;
    case 2 :
        //Tous
        ui->pushButtonAgenda->setEnabled(false);
        ui->pushButtonConsultDossier->setEnabled(false);
        ui->pushButtonCreerAgence->setEnabled(false);
        ui->pushButtonCreerDossier->setEnabled(false);
        ui->pushButtonGererAbsence->setEnabled(false);
        ui->pushButtonGererSalaries->setEnabled(false);
        ui->pushButtonGererVehicules->setEnabled(false);
        ui->pushButtonModifierDossier->setEnabled(false);
        break;
    case 3 :
        //Commercial
        ui->pushButtonAgenda->setEnabled(false);
        ui->pushButtonConsultDossier->setEnabled(false);
        ui->pushButtonCreerAgence->setEnabled(false);
        ui->pushButtonDemandeAbsence->setEnabled(false);
        ui->pushButtonGererAbsence->setEnabled(false);
        ui->pushButtonGererSalaries->setEnabled(false);
        ui->pushButtonGererVehicules->setEnabled(false);
        ui->pushButtonModifierDossier->setEnabled(false);
        break;
    case 4:
        //Chef D'exploitation
        ui->pushButtonAgenda->setEnabled(false);
        ui->pushButtonConsultDossier->setEnabled(false);
        ui->pushButtonCreerAgence->setEnabled(false);
        ui->pushButtonDemandeAbsence->setEnabled(false);
        ui->pushButtonGererAbsence->setEnabled(false);
        ui->pushButtonGererSalaries->setEnabled(false);
        ui->pushButtonGererVehicules->setEnabled(false);
        ui->pushButtonCreerDossier->setEnabled(false);
        break;
    case 5:
        //Demenageur
        ui->pushButtonCreerAgence->setEnabled(false);
        ui->pushButtonDemandeAbsence->setEnabled(false);
        ui->pushButtonGererAbsence->setEnabled(false);
        ui->pushButtonGererSalaries->setEnabled(false);
        ui->pushButtonGererVehicules->setEnabled(false);
        ui->pushButtonCreerDossier->setEnabled(false);
        ui->pushButtonModifierDossier->setEnabled(false);
    case 6:
        //Chef D'equipe
        ui->pushButtonCreerAgence->setEnabled(false);
        ui->pushButtonDemandeAbsence->setEnabled(false);
        ui->pushButtonGererAbsence->setEnabled(false);
        ui->pushButtonGererSalaries->setEnabled(false);
        ui->pushButtonGererVehicules->setEnabled(false);
        ui->pushButtonCreerDossier->setEnabled(false);
        ui->pushButtonModifierDossier->setEnabled(false);
        break;
    case 7:
        //Directeur Ressources
        ui->pushButtonAgenda->setEnabled(false);
        ui->pushButtonConsultDossier->setEnabled(false);
        ui->pushButtonCreerAgence->setEnabled(false);
        ui->pushButtonCreerDossier->setEnabled(false);
        ui->pushButtonModifierDossier->setEnabled(false);
        ui->pushButtonDemandeAbsence->setEnabled(false);
        break;
    case 8:
        //Patron
        break;

    }
}
