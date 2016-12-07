#include "dialogGestionDemenagement.h"
#include "ui_dialogGestionDemenagement.h"

DialogGestionDemenagement::DialogGestionDemenagement(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionDemenagement)
{
    ui->setupUi(this);
}

DialogGestionDemenagement::~DialogGestionDemenagement()
{
    delete ui;
}
