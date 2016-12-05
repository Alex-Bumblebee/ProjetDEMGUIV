#include "dialogacceslogiciel.h"
#include "ui_dialogacceslogiciel.h"

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
