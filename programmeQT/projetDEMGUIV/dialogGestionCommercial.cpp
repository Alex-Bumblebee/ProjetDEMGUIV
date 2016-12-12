#include "dialogGestionCommercial.h"
#include "ui_dialogGestionCommercial.h"
#include <QSqlQuery>
#include <QDebug>

DialogGestionCommercial::DialogGestionCommercial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionCommercial)
{
    ui->setupUi(this);
    chargeLesVehiculesDispo();
}

DialogGestionCommercial::~DialogGestionCommercial()
{
    delete ui;
}

void DialogGestionCommercial::chargeLesVehiculesDispo()
{
    int noLigne=0;
    QSqlQuery reqVehicules("select immat from Vehicule where typeSalarie = 'D'");
    while(reqVehicules.next())
    {
        qDebug() << "select immat from Vehicule where etat='disponible'";
        //on obtient les valeurs qui nous interessent
        QString immatVehicule=reqVehicules.value(0).toString();
        qDebug()<<immatVehicule;
        //on ajoute une ligne au comboBoxVehicules
        ui->tableWidgetVehiculesDispo->setRowCount(noLigne+1);
        ui->tableWidgetVehiculesDispo->setItem(noLigne,0,new QTableWidgetItem(immatVehicule));
        //on passe a la ligne suivante
        noLigne++;

    }
}

void DialogGestionCommercial::chargeLesDemenageursDispo()
{
    int noLigne=0;
    QSqlQuery reqDemenageurs("select nom, prenom from Salarie where typeSalarie='D'");

    while(reqDemenageurs.next())
    {
        qDebug() <<"select nom, prenom from Salarie where typeSalarie='D'";

        //on obtient les valeurs qui nous interessent
        QString nomDemenageurs=reqDemenageurs.value(0).toString();
        QString prenomDemenageurs=reqDemenageurs.value(1).toString();
        qDebug()<<nomDemenageurs;
        qDebug()<<prenomDemenageurs;
        //on ajoute une ligne au comboBoxVehicules
        ui->tableWidgetDemenageursDispo->setRowCount(noLigne+1);
        ui->tableWidgetDemenageursDispo->setItem(noLigne,0,new QTableWidgetItem(nomDemenageurs));
        ui->tableWidgetDemenageursDispo->setItem(noLigne,1,new QTableWidgetItem(prenomDemenageurs));
        //on passe a la ligne suivante
        noLigne++;
    }
}
