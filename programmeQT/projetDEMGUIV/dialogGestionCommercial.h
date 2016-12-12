#ifndef DIALOGGESTIONCOMMERCIAL_H
#define DIALOGGESTIONCOMMERCIAL_H

#include <QDialog>

namespace Ui {
class DialogGestionCommercial;
}

class DialogGestionCommercial : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGestionCommercial(QWidget *parent = 0);
    ~DialogGestionCommercial();
    void chargeLesVehiculesDispo();
    void chargeLesDemenageursDispo();
private slots:

    void on_buttonBox_accepted();

private:
    Ui::DialogGestionCommercial *ui;
};

#endif // DIALOGGESTIONCOMMERCIAL_H
