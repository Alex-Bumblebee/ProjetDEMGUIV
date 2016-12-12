#ifndef DIALOGCONSULTERDOSSIERS_H
#define DIALOGCONSULTERDOSSIERS_H

#include <QDialog>
#include "dossierDemenagement.h"
#include <QVector>
#include <QDebug>
#include <QListWidget>
#include <QListWidgetItem>

namespace Ui {
class DialogConsulterDossiers;
}

class DialogConsulterDossiers : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogConsulterDossiers(QWidget *parent = 0);
    ~DialogConsulterDossiers();
    
private slots:
    void chargeDossiers();
    void remplirListDossiers();
    void chargeInfosDossier(int id);
    void on_pushButton_clicked();
    void on_listWidgetDossiers_itemClicked(QListWidgetItem *item);

private:
    Ui::DialogConsulterDossiers *ui;
    QVector<DossierDemenagement> vectDossiers;
};

#endif // DIALOGCONSULTERDOSSIERS_H
