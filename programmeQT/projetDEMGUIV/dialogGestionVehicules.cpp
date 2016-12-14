#include "dialogGestionVehicules.h"
#include "ui_dialoggGestionVehicules.h"
#include "dialogGestionVehiculesAjout.h"
#include <QSqlQuery>
#include <QDebug>

DialogGestionVehicules::DialogGestionVehicules(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionVehicules)
{
    ui->setupUi(this);
    chargeLesVehicules();
    ui->pushButtonSupprimerVehicule->setEnabled(false);
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

void DialogGestionVehicules::on_pushButtonAjoutVehicule_clicked()
{
    //on selectionne un vehicule dans la liste,
    //on clique sur ajouter, une boite de dialogue s'ouvre,
    //et nous demande toutes les infos necessaires
    DialogGestionVehiculesAjout diagAjout;
    diagAjout.exec();
}

void DialogGestionVehicules::on_pushButtonSupprimerVehicule_clicked()
{
    //on selectionne une vehicule dans la liste
    //on clique sur supprimer, une confirmation s'ouvre
    int ligne=ui->tableWidgetVehicules->currentRow();
    QString immat = ui->tableWidgetVehicules->item(ligne-1,1)->text();
    //et que l'on clique sur supprimer,
    //ça supprime la ligne du table widget et la ligne de la bdd
    ui->tableWidgetVehicules->removeRow(ligne);
    //debut de la requete
    QSqlQuery reqDelete;
    //texte de la requete
    QString texteRequete="delete from Vehicule where immat='"+immat+"'";
    reqDelete.exec(texteRequete);
    chargeLesVehicules();

    qDebug () << texteRequete;
}

void DialogGestionVehicules::on_tableWidgetVehicules_cellClicked(int row, int column)
{
    //quand on selectionne une case pour la modifier,
    //le bouton supprimer s'active
    ui->pushButtonSupprimerVehicule->setEnabled(true);
}
