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
        QString nomDem=reqDemenageur.value(1).toString();
        QString prenomDem=reqDemenageur.value(2).toString();
        QString dateNaissanceDem=reqDemenageur.value(3).toString();
        QString dateEmbaucheDem=reqDemenageur.value(4).toString();
        QString adresseDem=reqDemenageur.value(5).toString();
       // int idAgenceDem=reqDemenageur.value(6).toInt();
        QString idPermisDem=reqDemenageur.value(7).toString();
        int chefDem=reqDemenageur.value(8).toInt();


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

    QSqlQuery reqVehicule("select id,immat,modele,dateMiseCirculation,volumeUtile,hayon,couchette,nbPlaceCabine,ptac,frequenceEntretien,idAgence from Vehicule inner join TypeVehicule on Vehicule.idType=TypeVehicule.id where etat='disponible';");

    while(reqVehicule.next())
    {
        int idVehicule=reqVehicule.value(0).toInt();
        QString immatVehicule=reqVehicule.value(1).toString();
        QString dateMiseCirculationVehicule=reqVehicule.value(3).toString();
        float volumeUtileVehicule=reqVehicule.value(4).toFloat();
        bool hayonVehicule=reqVehicule.value(5).toBool();
        bool couchetteVehicule=reqVehicule.value(6).toBool();
        int nbPlaceVehicule=reqVehicule.value(7).toInt();
        QString modeleVehicule=reqVehicule.value(2).toString();
        QString PTACVehicule=reqVehicule.value(8).toString();
        int frequenceEntretien=reqVehicule.value(9).toInt();
       //int idAgenceVehicule=reqVehicule.value(10).toInt();

        Vehicule leVehicule;
        leVehicule.setVehId(idVehicule);
        leVehicule.setVehImmat(immatVehicule);
        leVehicule.setVehDateMiseCirculation(dateMiseCirculationVehicule);
        leVehicule.setVehVolumeUtile(volumeUtileVehicule);
        leVehicule.setVehHayon(hayonVehicule);
        leVehicule.setVehCouchette(couchetteVehicule);
        leVehicule.setVehNbPlaceCabine(nbPlaceVehicule);
        leVehicule.setVehType(modeleVehicule);
        leVehicule.setVehPTAC(PTACVehicule);
        leVehicule.setVehFreqEntretien(frequenceEntretien);
       // leVehicule.setVehAgence(idAgenceVehicule);

        vectVehicule.push_back(leVehicule);
    }
}
