#include "dialogGestionCommercial.h"
#include "ui_dialogGestionCommercial.h"

DialogGestionCommercial::DialogGestionCommercial(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionCommercial)
{
    ui->setupUi(this);
}

DialogGestionCommercial::~DialogGestionCommercial()
{
    delete ui;
}
