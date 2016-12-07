#ifndef DIALOGGESTIONDEMENAGEMENTCREER_H
#define DIALOGGESTIONDEMENAGEMENTCREER_H

#include <QDialog>

namespace Ui {
class DialoggestiondemenagementCreer;
}

class DialoggestiondemenagementCreer : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialoggestiondemenagementCreer(QWidget *parent = 0);
    ~DialoggestiondemenagementCreer();
    
private:
    Ui::DialoggestiondemenagementCreer *ui;
};

#endif // DIALOGGESTIONDEMENAGEMENTCREER_H
