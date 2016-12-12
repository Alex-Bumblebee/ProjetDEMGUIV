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
    chargeLesDemenageursDispo();
}

DialogGestionCommercial::~DialogGestionCommercial()
{
    delete ui;
}

void DialogGestionCommercial::chargeLesVehiculesDispo()
{
    int noLigne=0;
    QSqlQuery reqVehicules("select immat from Vehicule where etat = 'disponible'");
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

void DialogGestionCommercial::on_buttonBox_accepted()
{
    QSqlQuery reqInsertDossier;
    QString requeteRecupMaxId("SELECT ifnull(max(id)+1,1) FROM DossierDemenagement");
    reqInsertDossier.exec(requeteRecupMaxId);
    reqInsertDossier.first();


    QString idDossier = reqInsertDossier.value(0).toString();
    QString dateDebutDemenagement = ui->dateEditDebutDem->text();
    QString dateFinDemenagement = ui->dateEditFinDem->text();
    QString volumeDemenagement = ui->spinBoxVolume->text();
    QString kmDemenagement = ui->spinBoxKilometre->text();
    QString adresseChargementDemenagement = ui->lineEditAdresseChargement->text();
    QString adresseLivraisonDemenagement= ui->lineEditAdresseLivraison->text();
    QString dateOuverture = QDateTime::currentDateTime().toString();


    //texte de la requete
    QString texteRequete="insert into DossierDemenagement(id,dateOuverture, dateDebutDem, dateFinDem, volume, nombreKm, adresseChargement, adresseLivraison) values('";
    texteRequete+=idDossier;
    texteRequete+="','";
    texteRequete+=dateOuverture;
    texteRequete+="','";
    texteRequete+=dateDebutDemenagement;
    texteRequete+="','";
    texteRequete+=dateFinDemenagement;
    texteRequete+="','";
    texteRequete+=volumeDemenagement;
    texteRequete+="','";
    texteRequete+=kmDemenagement;
    texteRequete+="','";
    texteRequete+=adresseChargementDemenagement;
    texteRequete+="','";
    texteRequete+=adresseLivraisonDemenagement;
    texteRequete+="')";

    qDebug()<<texteRequete<<endl;
    //execution de l'insert
    reqInsertDossier.exec(texteRequete);
}
