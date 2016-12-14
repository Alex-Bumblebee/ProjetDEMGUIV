#include "dialogGestionSalarie.h"
#include "ui_dialogGestionSalarie.h"

DialogGestionSalarie::DialogGestionSalarie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionSalarie)
{
    ui->setupUi(this);
}

DialogGestionSalarie::~DialogGestionSalarie()
{
    delete ui;
}
