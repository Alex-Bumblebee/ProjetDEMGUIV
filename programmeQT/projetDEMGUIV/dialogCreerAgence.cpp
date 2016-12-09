#include "dialogCreerAgence.h"
#include "ui_dialogCreerAgence.h"

DialogCreerAgence::DialogCreerAgence(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCreerAgence)
{
    ui->setupUi(this);
}

DialogCreerAgence::~DialogCreerAgence()
{
    delete ui;
}
