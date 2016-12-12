#ifndef DIALOGCREERAGENCE_H
#define DIALOGCREERAGENCE_H

#include <QDialog>
#include <QVector>

namespace Ui {
class DialogCreerAgence;
}

class DialogCreerAgence : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogCreerAgence(QWidget *parent = 0);
    ~DialogCreerAgence();

private slots:
    void on_pushButtonCreerAgence_clicked();

private:
    Ui::DialogCreerAgence *ui;
    QVector<QString> vectAgence;
};

#endif // DIALOGCREERAGENCE_H
