#include "dialogacceslogiciel.h"
#include "ui_dialogacceslogiciel.h"
#include <QSqlQuery>

DialogAccesLogiciel::DialogAccesLogiciel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAccesLogiciel)
{
    ui->setupUi(this);
}

DialogAccesLogiciel::~DialogAccesLogiciel()
{
    delete ui;
}

QString DialogAccesLogiciel::getLogin()
{
    return ui->lineEditUser->text();
}

QString DialogAccesLogiciel::getMdp()
{
    return ui->lineEditMdp->text();
}

