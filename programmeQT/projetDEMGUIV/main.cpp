#include "mainwindow.h"
#include <QApplication>
#include <QtSql/QSqlDatabase>

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
        MainWindow w;
         w.show();
        return a.exec();
    }

    return a.exec();
}
