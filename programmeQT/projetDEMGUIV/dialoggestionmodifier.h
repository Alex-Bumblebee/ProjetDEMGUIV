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
private:
    Ui::DialogGestionModifier *ui;

    QVector <Demenageur> vectDemenageur;
};

#endif // DIALOGGESTIONMODIFIER_H
