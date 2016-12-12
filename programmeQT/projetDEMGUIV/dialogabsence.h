#ifndef DIALOGABSENCE_H
#define DIALOGABSENCE_H

#include <QDialog>

namespace Ui {
class DialogAbsence;
}

class DialogAbsence : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogAbsence(QWidget *parent = 0);
    ~DialogAbsence();
    
private slots:
    void on_pushButtonAccepter_clicked();

    void on_pushButtonRefuser_clicked();

private:
    Ui::DialogAbsence *ui;
    void chargerLesAbsences();
};

#endif // DIALOGABSENCE_H
