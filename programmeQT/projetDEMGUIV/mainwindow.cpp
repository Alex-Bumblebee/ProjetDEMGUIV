#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //chargeLesVehicules();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonGestionDemenagements_clicked()
{

}

void MainWindow::on_pushButtonGererVehicules_clicked()
{

}
