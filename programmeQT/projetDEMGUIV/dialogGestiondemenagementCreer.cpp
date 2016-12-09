#include "dialogGestionDemenagementCreer.h"
#include "ui_dialogGestionDemenagementCreer.h"

DialogGestionDemenagementCreer::DialogGestionDemenagementCreer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogGestionDemenagementCreer)
{
    ui->setupUi(this);
}

DialogGestionDemenagementCreer::~DialogGestionDemenagementCreer()
{
    delete ui;
}
