#include "dialogCreerAgence.h"
#include "ui_dialogCreerAgence.h"

DialogCreerAgence::DialogCreerAgence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCreerAgence)
{
    ui->setupUi(this);
}

DialogCreerAgence::~DialogCreerAgence()
{
    delete ui;
}


void DialogCreerAgence::on_pushButtonCreerAgence_clicked()
{
    QSqlQuery queryAjoutAgence;
    QString requeteRecupMaxId("SELECT ifnull(max(ageId)+1,1) FROM agence");
    queryAjoutAgence.exec(requeteRecupMaxId);
    queryAjoutAgence.first();

    //On récupère les informations
    QString idAgence = queryAjoutAgence.value(0).toString();
    QString nomAgence = ui->lineEditNomAgence->text();
    QString adresseAgence = ui->lineEditAdresseAgence->text();
    QString telAgence = ui->lineEditTelephoneAgence->text();
    QString faxAgence = ui->lineEditFaxAgence->text();
    QString mailAgence = ui->lineEditMailAgence->text();
    queryAjoutAgence.clear();

    //Requête pour injecter les informations recuperer juste avant
    QString requeteInjectSQL = "INSERT INTO contact VALUES('"+idAgence+"','"+nomAgence+"','"+adresseAgence+"','"+telAgence+"','"+faxAgence+"','"+mailAgence+"')";
    queryAjoutAgence.exec(requeteInjectSQL);
    //Affiche la requete
    qDebug () << requeteInjectSQL;
}
