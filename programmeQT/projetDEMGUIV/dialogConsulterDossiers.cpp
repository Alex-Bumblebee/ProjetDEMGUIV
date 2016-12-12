#include "dialogConsulterDossiers.h"
#include "ui_dialogConsulterDossiers.h"
#include <QSqlQuery>


DialogConsulterDossiers::DialogConsulterDossiers(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogConsulterDossiers)
{
    ui->setupUi(this);
    chargeDossiers();
}

DialogConsulterDossiers::~DialogConsulterDossiers()
{
    delete ui;
}

void DialogConsulterDossiers::on_listWidget_clicked(const QModelIndex &index)
{
    qDebug()<<ui->listWidgetDossiers->item(index.row())->text();
    //recupere l'id dans le data de l'item selectionné
    QListWidgetItem* dossierSelectionne=ui->listWidgetDossiers->currentItem();
    int id=dossierSelectionne->data(32);
    chargeInfosDossier(id);
}

void DialogConsulterDossiers::chargeInfosDossier(int id)
{
    qDebug()<<"DialogConsulterDossiers::chargeInfosDossier()";
    QSqlQuery reqVehicule("select id, immat, modele from Vehicule where id in (select veh_id from Utiliser where dos_id="+id+");");
    while(reqVehicule.next())
    {
        int idVehicule = reqVehicule.value(0).toInt();
        QString immatVehicule = reqVehicule.value(1).toString();
        QString modeleVehicule = reqVehicule.value(2).toString();

        QString immatModeleVeh = immatVehicule + " " + modeleVehicule;
        qDebug()<<immatModeleVeh;
        QListWidget* monVehicule=new QListWidget(immatModeleVeh);
        monVehicule->setData(32,idVehicule);
        ui->listWidgetDemenageurs->addItem(monVehicule);
    }
    QSqlQuery reqDemenageur("select id, nom, prenom from Salarie where typeSalarie = 'D' and id in(select sal_id from Participer where dos_id="+id+");");
    while(reqDemenageur.next())
    {
        int idDemenageur = reqDemenageur.value(0).toInt();
        QString nomDemenageur = reqDemenageur.value(1).toString();
        QString prenomDemenageur = reqDemenageur.value(2).toString();

        QString prenomNomDem = prenomDemenageur + " " + nomDemenageur;
        qDebug()<<prenomNomDem;
        QListWidget* monDemenageur=new QListWidget(prenomNomDem);
        monDemenageur->setData(32,idDemenageur);
        ui->listWidgetDemenageurs->addItem(monDemenageur);
    }

}

void DialogConsulterDossiers::chargeDossiers()
{
    qDebug()<<"DialogConsulterDossiers::chargeDossiers()";
    QSqlQuery reqDossier("select id, dateDebutDem, dateFinDem, volume, adresseChargement, adresseLivraison from DossierDemenagement;");
    while(reqDossier.next())
    {
        int idDossier = reqDossier.value(0).toInt();
        QString dateDebut = reqDossier.value(1).toString();
        QString dateFin = reqDossier.value(2).toString();
        int volume = reqDossier.value(3).toInt();
        QString adresseChargement = reqDossier.value(4).toString();
        QString adresseLivraison = reqDossier.value(5).toString();
        DossierDemenagement nouveauDossier(idDossier,dateDebut,dateFin,volume,adresseChargement,adresseLivraison);
        vectDossiers.push_back(nouveauDossier);
    }
    remplirListDossiers();
}




void DialogConsulterDossiers::remplirListDossiers()
{
    qDebug()<<"MainWindow::remplirList()";
    //efface la liste
    ui->listWidgetDossiers->clear();
    //pour chaque occurence du vecteur
    for(int i=0; i<vectDossiers.size();i++)
    {
        //concatenation dossier + numero
        QString dos = "Dossier n° " + vectDossiers[i].getDosNumero();
        qDebug()<<dos;
        //l'ajoute dans la liste en y associant en data l'id
        QListWidgetItem* unDossier=new QListWidgetItem(dos);
        unDossier->setData(32,vectDossiers[i].getDosNumero());
        ui->listWidgetDossiers->addItem(unDossier);
    }
    //trie la liste
    ui->listWidgetDossiers->sortItems();
}
