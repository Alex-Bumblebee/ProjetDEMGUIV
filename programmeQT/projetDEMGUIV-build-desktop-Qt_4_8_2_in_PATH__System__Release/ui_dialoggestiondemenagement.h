/********************************************************************************
** Form generated from reading UI file 'dialoggestiondemenagement.ui'
**
** Created: Mon Dec 5 14:52:03 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGESTIONDEMENAGEMENT_H
#define UI_DIALOGGESTIONDEMENAGEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogGestionDemenagement
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QComboBox *comboBox;
    QPushButton *pushButtonModifier;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *DialogGestionDemenagement)
    {
        if (DialogGestionDemenagement->objectName().isEmpty())
            DialogGestionDemenagement->setObjectName(QString::fromUtf8("DialogGestionDemenagement"));
        DialogGestionDemenagement->resize(599, 298);
        pushButton = new QPushButton(DialogGestionDemenagement);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 80, 161, 31));
        pushButton_2 = new QPushButton(DialogGestionDemenagement);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 140, 161, 31));
        widget = new QWidget(DialogGestionDemenagement);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 200, 535, 33));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(211, 31));

        horizontalLayout->addWidget(comboBox);

        pushButtonModifier = new QPushButton(widget);
        pushButtonModifier->setObjectName(QString::fromUtf8("pushButtonModifier"));

        horizontalLayout->addWidget(pushButtonModifier);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(DialogGestionDemenagement);

        QMetaObject::connectSlotsByName(DialogGestionDemenagement);
    } // setupUi

    void retranslateUi(QDialog *DialogGestionDemenagement)
    {
        DialogGestionDemenagement->setWindowTitle(QApplication::translate("DialogGestionDemenagement", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DialogGestionDemenagement", "Cr\303\251er un dossier", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DialogGestionDemenagement", "Supprimer un dossier", 0, QApplication::UnicodeUTF8));
        pushButtonModifier->setText(QApplication::translate("DialogGestionDemenagement", "Modifier un dossier", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogGestionDemenagement: public Ui_DialogGestionDemenagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGESTIONDEMENAGEMENT_H
