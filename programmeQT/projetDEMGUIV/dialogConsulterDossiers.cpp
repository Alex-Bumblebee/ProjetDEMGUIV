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
    QString id=dossierSelectionne->data(32).toString();

}

void DialogConsulterDossiers::chargeDossiers()
{
    qDebug()<<"DialogConsulterDossiers::chargeDossiers()";
    QSqlQuery reqContact("select id, dateDebutDem, dateFinDem, volume, adresseChargement, adresseLivraison from DossierDemenagement;");
    while(reqContact.next())
    {
        int idDossier = reqContact.value(0).toInt();
        QString dateDebut = reqContact.value(1).toString();
        QString dateFin = reqContact.value(2).toString();
        int volume = reqContact.value(3).toInt();
        QString adresseChargement = reqContact.value(4).toString();
        QString adresseLivraison = reqContact.value(5).toString();
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
        //concatene le nom avec le prenom
        QString dos = "Dossier n° " + vectDossiers[i].getDosNumero();
        qDebug()<<dos;
        //l'ajoute dans la liste en y associant en data l'id
        QListWidgetItem* unDossier=new QListWidgetItem(dos);
        unDossier->setData(32,QString::number(vectDossiers[i].getDosNumero()));
        ui->listWidgetDossiers->addItem(unDossier);
    }
    //trie la liste
    ui->listWidgetDossiers->sortItems();
}
