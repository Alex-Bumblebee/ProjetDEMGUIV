#include "dialogGestionVehiculesAjout.h"
#include "ui_dialogGestionVehiculesAjout.h"
#include <QDebug>
#include <QSqlQuery>

DialogGestionVehiculesAjout::DialogGestionVehiculesAjout(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionVehiculesAjout)
{
    ui->setupUi(this);
}

DialogGestionVehiculesAjout::~DialogGestionVehiculesAjout()
{
    delete ui;
}


void DialogGestionVehiculesAjout::on_buttonBox_accepted()
{
    int hayon=0;
    int couchette=0;
    int permis=0;

    QSqlQuery queryAjoutVehicule;
    //On récupère le max id de Vehicule et on ajoute +1
    QString requeteRecupMaxIdVehicule("SELECT ifnull(max(id)+1,1) FROM Vehicule");
    queryAjoutVehicule.exec(requeteRecupMaxIdVehicule);
    queryAjoutVehicule.first();

    QSqlQuery queryAjoutTypeVehicule;
    //On récupère le max id de typeVehicule et on ajoute +1
    QString requeteRecupMaxIdTypeVehicule("SELECT ifnull (max(id)+1,1) FROM TypeVehicule");
    queryAjoutTypeVehicule.exec(requeteRecupMaxIdTypeVehicule);
    queryAjoutTypeVehicule.first();

    //On récupère les informations pour véhicule
    QString idVehicule = queryAjoutVehicule.value(0).toString();
    QString immatVehicule = ui->lineEditAjoutImmatriculation->text();
    QString modeleVehicule = ui->lineEditAjoutModele->text();
    QString dateMiseEnCirculationVehicule = ui->dateEditAjoutMEC->text();
    QString volumeUtileVehicule = ui->lineEditAjoutVolume->text();
    QString hayonVehicule = ui->comboBoxAjoutHayon->currentText();
    if(hayonVehicule == "Oui")
    {
        hayon=1;
    }
    else
    {
        hayon=0;
    }

    QString couchetteVehicule = ui->comboBoxAjoutCouchette->currentText();
    if(couchetteVehicule == "Oui")
    {
        couchette=1;
    }
    else
    {
        couchette=0;
    }

    QString etatVehicule = "disponible";

    QString nombrePlaceCabineVehicule = ui->lineEditAjoutPlacesCabine->text();
    QString agenceIdVehicule = ui->lineEditAjoutIdAgence->text();
    QString permisIdVehicule = ui->comboBoxAjoutPermis->currentText();
    if(permisIdVehicule == "B1")
    {
        permis=1;
    }
    else if(permisIdVehicule == "C1")
    {
        permis=2;
    }
    else if(permisIdVehicule == "C")
    {
        permis=3;
    }
    else if(permisIdVehicule == "C1")
    {
        permis=4;
    }
    else if(permisIdVehicule == "CE")
    {
        permis=5;
    }
    else if(permisIdVehicule == "B")
    {
        permis=6;
    }

    //On récupère les informations pour TypeVehicule
    QString idTypeVehicule = queryAjoutTypeVehicule.value(0).toString();
    QString ptacVehicule = ui->lineEditAjoutPTAC->text();
    QString frequenceEntretienVehicule = ui->lineEditAjoutEntretien->text();

    //Requête pour injecter les informations récupérer juste avant
    QString requeteInjectSQLVehicule = "INSERT INTO Vehicule VALUES('"+idVehicule+"','"+immatVehicule+"','"+modeleVehicule+"','"+dateMiseEnCirculationVehicule+"','"+volumeUtileVehicule+"','"+QString::number(hayon)+"','"+QString::number(couchette)+"','"+nombrePlaceCabineVehicule+"','"+etatVehicule+"','"+agenceIdVehicule+"','"+QString::number(permis)+"','"+idTypeVehicule+"')";
    QString requeteInjectSQLTypeVehicule = "INSERT INTO TypeVehicule VALUES ('"+idTypeVehicule+"','"+ptacVehicule+"','"+frequenceEntretienVehicule+"')";

    //On éxécute les requetes
    queryAjoutVehicule.exec(requeteInjectSQLVehicule);
    queryAjoutTypeVehicule.exec(requeteInjectSQLTypeVehicule);

    //Affiche la requete
    qDebug () << requeteInjectSQLVehicule;
    qDebug () << requeteInjectSQLTypeVehicule;
}
