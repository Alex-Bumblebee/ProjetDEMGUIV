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
    chargerVehicule();
    chargerDossier();
}

DialogGestionModifier::~DialogGestionModifier()
{
    delete ui;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void DialogGestionModifier::chargerDossier(){
    qDebug()<<"DialogGestionModifier::chargerDemenageur()"<<endl;

    ui->listWidgetDossier->clear();
    int cpt=0;

    QSqlQuery reqDossier("select id,dateDebutDem,dateFinDem,volume,adresseChargement,adresseLivraison from DossierDemenagement where etatDossier='ATT'");
    while(reqDossier.next())
    {
        cpt++;
        int idDossier=reqDossier.value(0).toInt();
        QString dateDebutDemDossier=reqDossier.value(1).toString();
        QString dateFinDemDossier=reqDossier.value(2).toString();
        int volumeDossier=reqDossier.value(3).toInt();
        QString adresseChargementDossier=reqDossier.value(4).toString();
        QString adresseLivraisonDossier=reqDossier.value(5).toString();



        //concatene le nom avec le prenom
        QString dossier = reqDossier.value(0).toString();
        qDebug()<<dossier;

        QListWidgetItem* unDossier=new QListWidgetItem(dossier);
        unDossier->setData(32,idDossier);
        ui->listWidgetDossier->addItem(unDossier);

    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
void DialogGestionModifier::chargerDemenageur()
{
    qDebug()<<"DialogGestionModifier::chargerDemenageur()"<<endl;
/*
    QSqlQuery reqDemenageur("select id,nom,prenom,dateNaissance,dateEmbauche,adresse,idAgence,idPermis,chef from Salarie where typeSalarie='D' and etat='disponible'");
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


        ui->tableWidgetDemenageur->setRowCount(0);
        ui->tableWidgetDemenageur->setRowCount(reqDemenageur.size());
        for(unsigned int leCpt=0;leCpt<reqDemenageur.size();leCpt++)
        {


            QTableWidgetItem *itemNomDem=new QTableWidgetItem(reqDemenageur.value(1).toString());

            QTableWidgetItem *itemPrenomDem=new QTableWidgetItem(reqDemenageur.value(2).toString());

            ui->tableWidgetDemenageur->*itemNomDem->setData(32,reqDemenageur.value(0).toString());
            ui->tableWidgetDemenageur->setItem(leCpt,0,itemNomDem);
            ui->tableWidgetDemenageur->setItem(leCpt,1,itemPrenomDem);


        }*/
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void DialogGestionModifier::chargerVehicule()
{
   /*
    qDebug()<<"DialogGestionModifier::chargerVehicule()"<<endl;

    QSqlQuery reqVehicule("select Vehicule.id,immat,modele,dateMiseCirculation,volumeUtile,hayon,couchette,nbPlaceCabine,ptac,frequenceEntretien,idAgence from Vehicule inner join TypeVehicule on Vehicule.idType=TypeVehicule.id where etat='disponible'");

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


    ui->tableWidgetVehicule->setRowCount(0);
    ui->tableWidgetVehicule->setRowCount(reqVehicule.size());
    for(unsigned int leCpt=0;leCpt<reqVehicule.size();leCpt++)
    {

        QTableWidgetItem *itemModeleVeh=new QTableWidgetItem(reqVehicule.value(2).toString());
        *itemModeleVeh->setData(32,vectVehiculeAjouter[leCpt].getVehId());

        QTableWidgetItem *itemVolumeVeh=new QTableWidgetItem(reqVehicule.value(4).toString());


        ui->tableWidgetDemenageur->setItem(leCpt,0,itemModeleVeh);
        ui->tableWidgetDemenageur->setItem(leCpt,1,itemVolumeVeh);
    }*/
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------

void DialogGestionModifier::on_pushButtonAddVehicule_clicked()
{
    /*
    QTableWidgetItem* vehiculeChoisi=ui->tableWidgetVehicule->currentItem();
    int monVehicule=vehiculeChoisi->data(32).toInt();
    for(int cpt=0;cpt<vectVehicule.size();cpt++)
    {
        if(monVehicule==vectVehicule[cpt].getVehId())
        {
            vectVehiculeAjouter.push_back(vectVehicule[cpt]);

        }

    }

    //efface la liste
    ui->tableWidgetVehiculeAjouter->clear();
    //pour chaque occurence du vecteur

    for(int i=0; i<vectVehiculeAjouter.size();i++)
    {
        //concatene le nom avec le prenom
        QString veh = vectVehiculeAjouter[i].getVehType();
        qDebug()<<veh;
        //l'ajoute dans la liste en y associant en data l'id
        QListWidgetItem* unVehicule=new QListWidgetItem(veh);
        unVehicule->setData(32,vectVehiculeAjouter[i].getVehId());
        ui->tableWidgetVehiculeAjouter->addItem(unVehicule);
    }
    //trie la liste
    ui->tableWidgetVehiculeAjouter->sortItems();
*/
}

//----------------------------------------------------------------------------------------------------------------------------------------------------------------
void DialogGestionModifier::on_pushButtonDelVehicule_clicked()
{
    /*
    QListWidgetItem* vehiculeChoisi=ui->listWidgetVehiculeDemenagement->currentItem();
    int monVehicule=vehiculeChoisi->data(32).toInt();
    for(int cpt=0;cpt<vectVehiculeAjouter.size();cpt++)
    {
        if(monVehicule==vectVehiculeAjouter[cpt].getVehId())
        {
            vectVehiculeAjouter.remove(cpt);

        }

    }

    //efface la liste
    ui->tableWidgetVehiculeAjouter->clear();
    //pour chaque occurence du vecteur

    for(int i=0; i<vectVehiculeAjouter.size();i++)
    {
        //concatene le nom avec le prenom
        QString veh = vectVehiculeAjouter[i].getVehType();
        qDebug()<<veh;
        //l'ajoute dans la liste en y associant en data l'id
        QListWidgetItem* unVehicule=new QListWidgetItem(veh);
        unVehicule->setData(32,vectVehiculeAjouter[i].getVehId());
        ui->tableWidgetVehiculeAjouter->addItem(unVehicule);
    }
    //trie la liste
    ui->tableWidgetVehiculeAjouter->sortItems();*/
}

//--------------------------------------------------------------------------------------------------------------------------------------------------------------------

void DialogGestionModifier::on_listWidgetDossier_itemClicked(QListWidgetItem *item)
{
    /*
    QString requete="select id,dateDebutDem,dateFinDem,volume,adresseChargement,adresseLivraison from DossierDemenagement where etatDossier='ATT' and id='";
    requete += item->text();
    requete += "'";
    QSqlQuery reqDossier(requete);

    while(reqDossier.next())
    {
        int idDossier=reqDossier.value(0).toInt();
        QString dateDebutDemDossier=reqDossier.value(1).toString();
        QString dateFinDemDossier=reqDossier.value(2).toString();
        int volumeDossier=reqDossier.value(3).toInt();
        QString adresseChargementDossier=reqDossier.value(4).toString();
        QString adresseLivraisonDossier=reqDossier.value(5).toString();

        ui->labelAChargementDossier->setText(adresseChargementDossier);
        ui->labelALivraisonDossier->setText(adresseLivraisonDossier);
        ui->labelDateDebutDossier->setText(dateDebutDemDossier);
        ui->labelDateFinDossier->setText(dateFinDemDossier);
        ui->labelVolumeDossier->setText(QString::number(volumeDossier));
    }
*/
}
