#ifndef DIALOGGESTIONDEMENAGEMENT_H
#define DIALOGGESTIONDEMENAGEMENT_H

#include <QDialog>

namespace Ui {
class DialogGestionDemenagement;
}

class DialogGestionDemenagement : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGestionDemenagement(QWidget *parent = 0);
    ~DialogGestionDemenagement();
    
private:
    Ui::DialogGestionDemenagement *ui;
};

#endif // DIALOGGESTIONDEMENAGEMENT_H
