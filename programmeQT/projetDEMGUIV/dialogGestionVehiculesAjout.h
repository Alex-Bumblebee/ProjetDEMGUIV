#ifndef DIALOGGESTIONVEHICULESAJOUT_H
#define DIALOGGESTIONVEHICULESAJOUT_H

#include <QDialog>

namespace Ui {
class DialogGestionVehiculesAjout;
}

class DialogGestionVehiculesAjout : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGestionVehiculesAjout(QWidget *parent = 0);
    ~DialogGestionVehiculesAjout();
    
private slots:


    void on_buttonBox_accepted();

private:
    Ui::DialogGestionVehiculesAjout *ui;
};

#endif // DIALOGGESTIONVEHICULESAJOUT_H
