#include "dialoggestiondemenagement.h"
#include "ui_dialoggestiondemenagement.h"

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
