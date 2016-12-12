#ifndef DIALOGGESTIONMODIFIER_H
#define DIALOGGESTIONMODIFIER_H
#include <QVector>
#include "demenageur.h"

#include <QDialog>

namespace Ui {
class DialogGestionModifier;
}

class DialogGestionModifier : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGestionModifier(QWidget *parent = 0);
    ~DialogGestionModifier();
    void chargerDemenageur();
    void chargerVehicule();
private slots:
    void on_pushButtonAddVehicule_clicked();

    void on_pushButtonDelVehicule_clicked();

private:
    Ui::DialogGestionModifier *ui;

    QVector <Demenageur> vectDemenageurAjouter;
    QVector <Demenageur> vectDemenageur;
    QVector <Vehicule> vectVehiculeAjouter;
    QVector <Vehicule> vectVehicule;
};

#endif // DIALOGGESTIONMODIFIER_H
