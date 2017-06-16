/********************************************************************************
** Form generated from reading UI file 'filesearch.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESEARCH_H
#define UI_FILESEARCH_H

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

class Ui_FileSearchClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FileSearchClass)
    {
        if (FileSearchClass->objectName().isEmpty())
            FileSearchClass->setObjectName(QStringLiteral("FileSearchClass"));
        FileSearchClass->resize(600, 400);
        menuBar = new QMenuBar(FileSearchClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        FileSearchClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(FileSearchClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        FileSearchClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(FileSearchClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        FileSearchClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(FileSearchClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        FileSearchClass->setStatusBar(statusBar);

        retranslateUi(FileSearchClass);

        QMetaObject::connectSlotsByName(FileSearchClass);
    } // setupUi

    void retranslateUi(QMainWindow *FileSearchClass)
    {
        FileSearchClass->setWindowTitle(QApplication::translate("FileSearchClass", "FileSearch", 0));
    } // retranslateUi

};

namespace Ui {
    class FileSearchClass: public Ui_FileSearchClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESEARCH_H
