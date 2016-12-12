#include "dialogabsence.h"
#include "ui_dialogabsence.h"
#include <QSqlQuery>
#include <QDebug>
#include <QDateTime>
DialogAbsence::DialogAbsence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAbsence)
{
    ui->setupUi(this);
    chargerLesAbsences();
}

DialogAbsence::~DialogAbsence()
{
    delete ui;
}

void DialogAbsence::chargerLesAbsences()
{
    int nbLigne = 0;
    QString typeAbsence = "Congé";
    QSqlQuery reqConge("SELECT Conge.id, Salarie.nom, Salarie.prenom, MotifConge.libelle, Conge.dateDebut, Conge.dateFin FROM Salarie INNER JOIN Concerner ON Salarie.id = Concerner.sal_id INNER JOIN Conge ON Concerner.con_id = Conge.id INNER JOIN MotifConge ON Conge.idMotif = MotifConge.id");
    while(reqConge.next())
    {
        QString id = reqConge.value(0).toString();
        QString nom = reqConge.value(1).toString();
        QString prenom = reqConge.value(2).toString();
        QString motif = reqConge.value(3).toString();
        QString debut = reqConge.value(4).toString();
        QString fin = reqConge.value(5).toString();
        nbLigne = ui->tableWidgetAbsence->rowCount();
        nbLigne++;
        ui->tableWidgetAbsence->setRowCount(nbLigne);
        ui->tableWidgetAbsence->setItem(nbLigne-1,0,new QTableWidgetItem(id));
        ui->tableWidgetAbsence->setItem(nbLigne-1,1,new QTableWidgetItem(nom));
        ui->tableWidgetAbsence->setItem(nbLigne-1,2,new QTableWidgetItem(prenom));
        ui->tableWidgetAbsence->setItem(nbLigne-1,3,new QTableWidgetItem(typeAbsence));
        ui->tableWidgetAbsence->setItem(nbLigne-1,4,new QTableWidgetItem(motif));
        ui->tableWidgetAbsence->setItem(nbLigne-1,5,new QTableWidgetItem(debut));
        ui->tableWidgetAbsence->setItem(nbLigne-1,6,new QTableWidgetItem(fin));
     }

    typeAbsence = "Arret";
    QSqlQuery reqArret("SELECT Arret.id, Salarie.nom, Salarie.prenom, MotifArret.libelle, Arret.dateDebut, Arret.dateFin FROM Salarie INNER JOIN Arret ON Salarie.id = Arret.idSalarie INNER JOIN MotifArret ON Arret.idMotif = MotifArret.id WHERE etatDemande ='A'");
    while(reqArret.next())
    {
        QString id = reqArret.value(0).toString();
        QString nom = reqArret.value(1).toString();
        QString prenom = reqArret.value(2).toString();
        QString motif = reqArret.value(3).toString();
        QString debut = reqArret.value(4).toString();
        QString fin = reqArret.value(5).toString();
        nbLigne = ui->tableWidgetAbsence->rowCount();
        nbLigne++;
        ui->tableWidgetAbsence->setRowCount(nbLigne);
        ui->tableWidgetAbsence->setItem(nbLigne-1,0,new QTableWidgetItem(id));
        ui->tableWidgetAbsence->setItem(nbLigne-1,1,new QTableWidgetItem(nom));
        ui->tableWidgetAbsence->setItem(nbLigne-1,2,new QTableWidgetItem(prenom));
        ui->tableWidgetAbsence->setItem(nbLigne-1,3,new QTableWidgetItem(typeAbsence));
        ui->tableWidgetAbsence->setItem(nbLigne-1,4,new QTableWidgetItem(motif));
        ui->tableWidgetAbsence->setItem(nbLigne-1,5,new QTableWidgetItem(debut));
        ui->tableWidgetAbsence->setItem(nbLigne-1,6,new QTableWidgetItem(fin));
    }
}

void DialogAbsence::on_pushButtonAccepter_clicked()
{
    int ligne = ui->tableWidgetAbsence->currentRow();
    qDebug()<<ligne<<endl;
    QString id = ui->tableWidgetAbsence->item(ligne,0)->text();
    QString nom = ui->tableWidgetAbsence->item(ligne,1)->text();
    QString prenom = ui->tableWidgetAbsence->item(ligne,2)->text();
    QString typeAbsence = ui->tableWidgetAbsence->item(ligne,3)->text();
    QString motif = ui->tableWidgetAbsence->item(ligne,4)->text();
    QString debut = ui->tableWidgetAbsence->item(ligne,5)->text();
    QString fin = ui->tableWidgetAbsence->item(ligne,6)->text();
    ui->tableWidgetAbsence->removeRow(ligne);
    QString time = QDateTime::currentDateTime().toString("dd MM yy");
    qDebug()<<time<<endl;
    QSqlQuery reqAccepter("INSERT INTO Conge (etatDemande, dateReponse) VALUES ('ACC', '"+time+"') WHERE id = "+id+"");
}

void DialogAbsence::on_pushButtonRefuser_clicked()
{
    int ligne = ui->tableWidgetAbsence->currentRow();
    qDebug()<<ligne<<endl;
    QString id = ui->tableWidgetAbsence->item(ligne,0)->text();
    QString nom = ui->tableWidgetAbsence->item(ligne,1)->text();
    QString prenom = ui->tableWidgetAbsence->item(ligne,2)->text();
    QString typeAbsence = ui->tableWidgetAbsence->item(ligne,3)->text();
    QString motif = ui->tableWidgetAbsence->item(ligne,4)->text();
    QString debut = ui->tableWidgetAbsence->item(ligne,5)->text();
    QString fin = ui->tableWidgetAbsence->item(ligne,6)->text();
    ui->tableWidgetAbsence->removeRow(ligne);
    QString time = QDateTime::currentDateTime().toString("dd MM yy");
    qDebug()<<time<<endl;
    QSqlQuery reqAccepter("INSERT INTO Conge (etatDemande, dateReponse) VALUES ('REF', '"+time+"') WHERE id = "+id+"");
}
