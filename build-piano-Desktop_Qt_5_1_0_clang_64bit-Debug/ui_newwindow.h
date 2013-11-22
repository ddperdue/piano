/********************************************************************************
** Form generated from reading UI file 'newwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWWINDOW_H
#define UI_NEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *NewWindow)
    {
        if (NewWindow->objectName().isEmpty())
            NewWindow->setObjectName(QStringLiteral("NewWindow"));
        NewWindow->resize(624, 428);
        centralwidget = new QWidget(NewWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 30, 541, 331));
        NewWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(NewWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 624, 22));
        NewWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(NewWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        NewWindow->setStatusBar(statusbar);

        retranslateUi(NewWindow);

        QMetaObject::connectSlotsByName(NewWindow);
    } // setupUi

    void retranslateUi(QMainWindow *NewWindow)
    {
        NewWindow->setWindowTitle(QApplication::translate("NewWindow", "MainWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class NewWindow: public Ui_NewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWWINDOW_H
