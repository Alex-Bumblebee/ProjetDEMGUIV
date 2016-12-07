/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon Dec 5 14:56:46 2016
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonGestionDemenagements;
    QPushButton *pushButtonConsultDossier;
    QPushButton *pushButtonAbsenceSalarie;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButtonFicheSuivi;
    QPushButton *pushButtonConge;
    QPushButton *pushButtonGestionRapport;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1006, 918);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        formLayout = new QFormLayout(centralWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButtonGestionDemenagements = new QPushButton(centralWidget);
        pushButtonGestionDemenagements->setObjectName(QString::fromUtf8("pushButtonGestionDemenagements"));
        pushButtonGestionDemenagements->setMinimumSize(QSize(291, 31));

        horizontalLayout->addWidget(pushButtonGestionDemenagements);

        pushButtonConsultDossier = new QPushButton(centralWidget);
        pushButtonConsultDossier->setObjectName(QString::fromUtf8("pushButtonConsultDossier"));
        pushButtonConsultDossier->setMinimumSize(QSize(291, 31));

        horizontalLayout->addWidget(pushButtonConsultDossier);

        pushButtonAbsenceSalarie = new QPushButton(centralWidget);
        pushButtonAbsenceSalarie->setObjectName(QString::fromUtf8("pushButtonAbsenceSalarie"));
        pushButtonAbsenceSalarie->setMinimumSize(QSize(291, 31));

        horizontalLayout->addWidget(pushButtonAbsenceSalarie);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButtonFicheSuivi = new QPushButton(centralWidget);
        pushButtonFicheSuivi->setObjectName(QString::fromUtf8("pushButtonFicheSuivi"));
        pushButtonFicheSuivi->setMinimumSize(QSize(291, 31));

        horizontalLayout_2->addWidget(pushButtonFicheSuivi);

        pushButtonConge = new QPushButton(centralWidget);
        pushButtonConge->setObjectName(QString::fromUtf8("pushButtonConge"));
        pushButtonConge->setMinimumSize(QSize(291, 31));

        horizontalLayout_2->addWidget(pushButtonConge);

        pushButtonGestionRapport = new QPushButton(centralWidget);
        pushButtonGestionRapport->setObjectName(QString::fromUtf8("pushButtonGestionRapport"));
        pushButtonGestionRapport->setMinimumSize(QSize(291, 0));

        horizontalLayout_2->addWidget(pushButtonGestionRapport);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        pushButtonGestionDemenagements->raise();
        pushButtonAbsenceSalarie->raise();
        pushButtonFicheSuivi->raise();
        pushButtonConge->raise();
        pushButtonGestionRapport->raise();
        pushButtonConsultDossier->raise();
        pushButtonGestionDemenagements->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1006, 29));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButtonGestionDemenagements->setText(QApplication::translate("MainWindow", "Gestion des dossiers de d\303\251m\303\251nagements", 0, QApplication::UnicodeUTF8));
        pushButtonConsultDossier->setText(QApplication::translate("MainWindow", "Consulter les dossiers", 0, QApplication::UnicodeUTF8));
        pushButtonAbsenceSalarie->setText(QApplication::translate("MainWindow", "Gestion des absences des salari\303\251s", 0, QApplication::UnicodeUTF8));
        pushButtonFicheSuivi->setText(QApplication::translate("MainWindow", "Fiche de suivi des v\303\251hicules", 0, QApplication::UnicodeUTF8));
        pushButtonConge->setText(QApplication::translate("MainWindow", "Demande de cong\303\251s", 0, QApplication::UnicodeUTF8));
        pushButtonGestionRapport->setText(QApplication::translate("MainWindow", "Gestion de rapport", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
