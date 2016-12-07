/********************************************************************************
** Form generated from reading UI file 'dialogacceslogiciel.ui'
**
** Created: Mon Dec 5 13:58:58 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGACCESLOGICIEL_H
#define UI_DIALOGACCESLOGICIEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogAccesLogiciel
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditMdp;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *DialogAccesLogiciel)
    {
        if (DialogAccesLogiciel->objectName().isEmpty())
            DialogAccesLogiciel->setObjectName(QString::fromUtf8("DialogAccesLogiciel"));
        DialogAccesLogiciel->resize(451, 225);
        buttonBox = new QDialogButtonBox(DialogAccesLogiciel);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(90, 170, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEditUser = new QLineEdit(DialogAccesLogiciel);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));
        lineEditUser->setGeometry(QRect(150, 70, 281, 31));
        lineEditMdp = new QLineEdit(DialogAccesLogiciel);
        lineEditMdp->setObjectName(QString::fromUtf8("lineEditMdp"));
        lineEditMdp->setGeometry(QRect(150, 120, 281, 31));
        label = new QLabel(DialogAccesLogiciel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 111, 21));
        label_2 = new QLabel(DialogAccesLogiciel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 120, 111, 21));
        label_3 = new QLabel(DialogAccesLogiciel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 10, 101, 41));

        retranslateUi(DialogAccesLogiciel);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAccesLogiciel, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAccesLogiciel, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAccesLogiciel);
    } // setupUi

    void retranslateUi(QDialog *DialogAccesLogiciel)
    {
        DialogAccesLogiciel->setWindowTitle(QApplication::translate("DialogAccesLogiciel", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogAccesLogiciel", "Nom du compte :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogAccesLogiciel", "Mot de passe :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogAccesLogiciel", "<html><head/><body><p><span style=\" font-size:20pt;\">PSDEM</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogAccesLogiciel: public Ui_DialogAccesLogiciel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGACCESLOGICIEL_H
