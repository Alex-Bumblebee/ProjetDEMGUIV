#ifndef DIALOGACCESLOGICIEL_H
#define DIALOGACCESLOGICIEL_H

#include <QDialog>

namespace Ui {
class DialogAccesLogiciel;
}

class DialogAccesLogiciel : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogAccesLogiciel(QWidget *parent = 0);
    ~DialogAccesLogiciel();
    
private:
    Ui::DialogAccesLogiciel *ui;
};

#endif // DIALOGACCESLOGICIEL_H
