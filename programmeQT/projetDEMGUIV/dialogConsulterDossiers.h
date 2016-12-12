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
    void on_listWidget_clicked(const QModelIndex &index);
    void chargeDossiers();
    void remplirListDossiers();
    void chargeInfosDossier(int id);

private:
    Ui::DialogConsulterDossiers *ui;
    QVector<DossierDemenagement> vectDossiers;
};

#endif // DIALOGCONSULTERDOSSIERS_H
