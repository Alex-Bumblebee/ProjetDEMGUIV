#ifndef DIALOGGESTIONSALARIE_H
#define DIALOGGESTIONSALARIE_H

#include <QDialog>

namespace Ui {
class DialogGestionSalarie;
}

class DialogGestionSalarie : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogGestionSalarie(QWidget *parent = 0);
    ~DialogGestionSalarie();
    
private:
    Ui::DialogGestionSalarie *ui;
};

#endif // DIALOGGESTIONSALARIE_H
