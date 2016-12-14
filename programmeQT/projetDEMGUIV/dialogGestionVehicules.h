#ifndef DIALOGGESTIONVEHICULES_H
#define DIALOGGESTIONVEHICULES_H

#include <QDialog>

namespace Ui {
class DialogGestionVehicules;
}

class DialogGestionVehicules : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGestionVehicules(QWidget *parent = 0);
    ~DialogGestionVehicules();
    void chargeLesVehicules();
    
private slots:
    void on_pushButtonAjoutVehicule_clicked();

    void on_pushButtonSupprimerVehicule_clicked();

    void on_tableWidgetVehicules_cellClicked(int row, int column);

private:
    Ui::DialogGestionVehicules *ui;
};

#endif // DIALOGGESTIONVEHICULES_H
