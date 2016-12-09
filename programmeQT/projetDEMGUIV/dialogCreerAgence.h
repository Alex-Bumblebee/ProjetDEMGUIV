#ifndef DIALOGCREERAGENCE_H
#define DIALOGCREERAGENCE_H

#include <QDialog>

namespace Ui {
class DialogCreerAgence;
}

class DialogCreerAgence : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogCreerAgence(QWidget *parent = 0);
    ~DialogCreerAgence();
    
private:
    Ui::DialogCreerAgence *ui;
};

#endif // DIALOGCREERAGENCE_H
