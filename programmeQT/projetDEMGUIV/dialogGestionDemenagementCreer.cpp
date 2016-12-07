#include "dialoggestiondemenagementcreer.h"
#include "ui_dialoggestiondemenagementcreer.h"

DialoggestiondemenagementCreer::DialoggestiondemenagementCreer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialoggestiondemenagementCreer)
{
    ui->setupUi(this);
}

DialoggestiondemenagementCreer::~DialoggestiondemenagementCreer()
{
    delete ui;
}
