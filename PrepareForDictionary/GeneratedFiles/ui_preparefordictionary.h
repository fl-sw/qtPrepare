/********************************************************************************
** Form generated from reading UI file 'preparefordictionary.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREPAREFORDICTIONARY_H
#define UI_PREPAREFORDICTIONARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PrepareForDictionaryClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *PrepareForDictionaryClass)
    {
        if (PrepareForDictionaryClass->objectName().isEmpty())
            PrepareForDictionaryClass->setObjectName(QStringLiteral("PrepareForDictionaryClass"));
        PrepareForDictionaryClass->resize(600, 400);
        menuBar = new QMenuBar(PrepareForDictionaryClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        PrepareForDictionaryClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(PrepareForDictionaryClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        PrepareForDictionaryClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(PrepareForDictionaryClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PrepareForDictionaryClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(PrepareForDictionaryClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        PrepareForDictionaryClass->setStatusBar(statusBar);

        retranslateUi(PrepareForDictionaryClass);

        QMetaObject::connectSlotsByName(PrepareForDictionaryClass);
    } // setupUi

    void retranslateUi(QMainWindow *PrepareForDictionaryClass)
    {
        PrepareForDictionaryClass->setWindowTitle(QApplication::translate("PrepareForDictionaryClass", "PrepareForDictionary", 0));
    } // retranslateUi

};

namespace Ui {
    class PrepareForDictionaryClass: public Ui_PrepareForDictionaryClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREPAREFORDICTIONARY_H
