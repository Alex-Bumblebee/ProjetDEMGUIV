#include "dialogGestionVehicules.h"
#include "ui_dialoggGestionVehicules.h"
#include <QSqlQuery>
#include <QDebug>

DialogGestionVehicules::DialogGestionVehicules(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionVehicules)
{
    ui->setupUi(this);
    chargeLesVehicules();
}

DialogGestionVehicules::~DialogGestionVehicules()
{
    delete ui;
}

void DialogGestionVehicules::chargeLesVehicules()
{
    int noLigne=0;
    QSqlQuery reqVehicules("select immat from Vehicule");
    while(reqVehicules.next())
    {
        qDebug() << "select immat from Vehicule";
        //on obtient les valeurs qui nous interessent
        QString immatVehicule=reqVehicules.value(0).toString();
        qDebug()<<immatVehicule;
        //on ajoute une ligne au comboBoxVehicules
        ui->tableWidgetVehicules->setRowCount(noLigne+1);
        ui->tableWidgetVehicules->setItem(noLigne,0,new QTableWidgetItem(immatVehicule));
        //on passe a la ligne suivante
        noLigne++;
    }
}
