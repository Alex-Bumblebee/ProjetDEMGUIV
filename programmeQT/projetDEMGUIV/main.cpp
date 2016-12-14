#include "mainwindow.h"
#include <QApplication>
#include <QtSql/QSqlDatabase>
#include <dialogacceslogiciel.h>
#include <QSqlQuery>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase maBase=QSqlDatabase::addDatabase("QMYSQL");
    maBase.setHostName("172.29.56.11");
    maBase.setUserName("userDemenagement");
    maBase.setPassword("Zmcub03");
    maBase.setDatabaseName("Demenagement");
    if(maBase.open())
    {        

            DialogAccesLogiciel boiteDeCo;
            bool ok = false;
            int resultat;
            do
            {
                resultat = boiteDeCo.exec();
                QString login = boiteDeCo.getLogin();
                QString mdp = boiteDeCo.getMdp();
                QString texteReq="SELECT * FROM User WHERE login = '"+login+"'and mdp = '"+mdp+"'";
                qDebug()<<texteReq;
                QSqlQuery reqConnexion(texteReq);
                if(reqConnexion.numRowsAffected()==1)
                {
                    ok=true;
                }

            }//fin de boucle
            while(!(ok || resultat == 0));
            if(ok)
            {
                MainWindow w;
                QString login = boiteDeCo.getLogin();
                QString mdp = boiteDeCo.getMdp();
                QString texteReq = "SELECT idTypeUser FROM User WHERE login = '"+login+"' AND mdp = '"+mdp+"'";
                QSqlQuery reqVerif(texteReq);
                qDebug()<<texteReq<<endl;
                reqVerif.first();
                int leType = reqVerif.value(0).toInt();
                w.setTypeUtilisateur(leType);
                w.show();
                return a.exec();
            }
            else
            {
                return 0;
            }
     }
}



