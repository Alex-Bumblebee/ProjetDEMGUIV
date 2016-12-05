#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase maBase=QSqlDatabase::addDatabase("QMYSQL");
    maBase.setHostName("");
    maBase.setUserName("");
    maBase.setPassword("");
    maBase.setDatabaseName("");
    if(maBase.open())
    {
        MainWindow w;
         w.show();
        return a.exec();
    }
    w.show();

    return a.exec();
}
