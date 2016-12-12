#include "dialoggestionmodifier.h"
#include "ui_dialoggestionmodifier.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

DialogGestionModifier::DialogGestionModifier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionModifier)
{
    ui->setupUi(this);

    chargerDemenageur();

}

DialogGestionModifier::~DialogGestionModifier()
{
    delete ui;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void DialogGestionModifier::chargerDemenageur()
{
    qDebug()<<"DialogGestionModifier::chargerDemenageur()"<<endl;

    QSqlQuery reqDemenageur("select id,nom,prenom,dateNaissance,dateEmbauche,adresse,idAgence,idPermis,chef from Salaire where typeSalarie='D' and etat='disponible'");
    while(reqDemenageur.next())
    {
        int idDem=reqDemenageur.value(0).toInt();
        QString nomDem1=reqDemenageur.value(1).toString();
        QString prenomDem1=reqDemenageur.value(2).toString();
        QString dateNaissanceDem1=reqDemenageur.value(3).toString();
        QString dateEmbaucheDem1=reqDemenageur.value(4).toString();
        QString adresseDem1=reqDemenageur.value(5).toString();
        int idAgenceDem=reqDemenageur.value(6).toInt();
        QString idPermisDem1=reqDemenageur.value(7).toString();
        int chefDem=reqDemenageur.value(8).toInt();

        string nomDem=nomDem1.toStdString();
        string prenomDem=prenomDem1.toStdString();
        string dateNaissanceDem=dateNaissanceDem1.toStdString();
        string dateEmbaucheDem=dateEmbaucheDem1.toStdString();
        string adresseDem=adresseDem1.toStdString();
        string idPermisDem=idPermisDem1.toStdString();

        Demenageur unDemenageur;
        unDemenageur.setSalId(idDem);
        unDemenageur.setSalNom(nomDem);
        unDemenageur.setSalPrenom(prenomDem);
        unDemenageur.setSalDateNaissance(dateNaissanceDem);
        unDemenageur.setSalDateEmbauche(dateEmbaucheDem);
        unDemenageur.setSalAdresse(adresseDem);
      //  unDemenageur.setSalAgence(idAgenceDem);
        unDemenageur.setDemPermis(idPermisDem);
        unDemenageur.setDemChef(chefDem);

        vectDemenageur.push_back(unDemenageur);
    }
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void DialogGestionModifier::chargerVehicule()
{
    qDebug()<<"DialogGestionModifier::chargerDemenageur()"<<endl;

    QSqlQuery reqVehicule("");

}
