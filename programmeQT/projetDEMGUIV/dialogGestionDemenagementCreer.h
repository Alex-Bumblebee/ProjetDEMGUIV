#ifndef DIALOGGESTIONDEMENAGEMENTCREER_H
#define DIALOGGESTIONDEMENAGEMENTCREER_H

#include <QDialog>

namespace Ui {
class DialogGestionDemenagementCreer;
}

class DialogGestionDemenagementCreer : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGestionDemenagementCreer(QWidget *parent = 0);
    ~DialogGestionDemenagementCreer();
    
private:
    Ui::DialogGestionDemenagementCreer *ui;
};

#endif // DIALOGGESTIONDEMENAGEMENTCREER_H
