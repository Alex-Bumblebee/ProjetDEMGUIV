#include "dialogGestionVehicules.h"
#include "ui_dialoggGestionVehicules.h"

DialogGestionVehicules::DialogGestionVehicules(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionVehicules)
{
    ui->setupUi(this);
}

DialogGestionVehicules::~DialogGestionVehicules()
{
    delete ui;
}

/*void MainWindow::chargeLesVehicules()
{
    QSqlQuery reqContact("select from vehicules");
    int noLigne=0;
    while(reqContact.next())
    {
        //on obtient les valeurs qui nous interessent
        QString nomContact=reqContact.value(0).toString();
        QString prenomContact=reqContact.value(1).toString();
        QString mailContact=reqContact.value(2).toString();
        QString portableContact=reqContact.value(3).toString();
        //on ajoute une ligne au tableWidgetContacts
        ui->tableWidgetContacts->setRowCount(noLigne+1);
        ui->tableWidgetContacts->setItem(noLigne,0,new QTableWidgetItem(nomContact));
        ui->tableWidgetContacts->setItem(noLigne,1,new QTableWidgetItem(prenomContact));
        ui->tableWidgetContacts->setItem(noLigne,2,new QTableWidgetItem(mailContact));
        ui->tableWidgetContacts->setItem(noLigne,3,new QTableWidgetItem(portableContact));
        //on passe a la ligne suivante du tableWidgetContacts
        noLigne++;
    }
}*/
