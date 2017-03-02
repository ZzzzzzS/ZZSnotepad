/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *start_new;
    QAction *exit;
    QAction *start_Save_As;
    QAction *actionAbout;
    QAction *start_open;
    QAction *start_Save;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actioncut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSelect_All;
    QAction *actionDelete;
    QAction *actiontypeface;
    QAction *actioncolor;
    QAction *actionprint;
    QAction *actionGet_time;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menuhelp_H;
    QMenu *menuedit;
    QMenu *menuformat;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(581, 403);
        start_new = new QAction(MainWindow);
        start_new->setObjectName(QStringLiteral("start_new"));
        exit = new QAction(MainWindow);
        exit->setObjectName(QStringLiteral("exit"));
        start_Save_As = new QAction(MainWindow);
        start_Save_As->setObjectName(QStringLiteral("start_Save_As"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        start_open = new QAction(MainWindow);
        start_open->setObjectName(QStringLiteral("start_open"));
        start_Save = new QAction(MainWindow);
        start_Save->setObjectName(QStringLiteral("start_Save"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actioncut = new QAction(MainWindow);
        actioncut->setObjectName(QStringLiteral("actioncut"));
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionPaste->setCheckable(false);
        actionSelect_All = new QAction(MainWindow);
        actionSelect_All->setObjectName(QStringLiteral("actionSelect_All"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QStringLiteral("actionDelete"));
        actiontypeface = new QAction(MainWindow);
        actiontypeface->setObjectName(QStringLiteral("actiontypeface"));
        actioncolor = new QAction(MainWindow);
        actioncolor->setObjectName(QStringLiteral("actioncolor"));
        actionprint = new QAction(MainWindow);
        actionprint->setObjectName(QStringLiteral("actionprint"));
        actionGet_time = new QAction(MainWindow);
        actionGet_time->setObjectName(QStringLiteral("actionGet_time"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        textEdit->setAutoFillBackground(true);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 581, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menuhelp_H = new QMenu(menuBar);
        menuhelp_H->setObjectName(QStringLiteral("menuhelp_H"));
        menuedit = new QMenu(menuBar);
        menuedit->setObjectName(QStringLiteral("menuedit"));
        menuformat = new QMenu(menuBar);
        menuformat->setObjectName(QStringLiteral("menuformat"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menuedit->menuAction());
        menuBar->addAction(menuformat->menuAction());
        menuBar->addAction(menuhelp_H->menuAction());
        menu->addAction(start_open);
        menu->addAction(start_Save);
        menu->addAction(start_Save_As);
        menu->addSeparator();
        menu->addAction(actionprint);
        menu->addSeparator();
        menu->addAction(exit);
        menuhelp_H->addAction(actionAbout);
        menuedit->addAction(actionUndo);
        menuedit->addAction(actionRedo);
        menuedit->addSeparator();
        menuedit->addAction(actioncut);
        menuedit->addAction(actionCopy);
        menuedit->addAction(actionPaste);
        menuedit->addAction(actionSelect_All);
        menuedit->addAction(actionDelete);
        menuedit->addSeparator();
        menuedit->addAction(actionGet_time);
        menuformat->addAction(actiontypeface);
        menuformat->addAction(actioncolor);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        start_new->setText(QApplication::translate("MainWindow", "New(&N)", Q_NULLPTR));
        exit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        start_Save_As->setText(QApplication::translate("MainWindow", "Save As", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        start_open->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        start_Save->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", Q_NULLPTR));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", Q_NULLPTR));
        actioncut->setText(QApplication::translate("MainWindow", "Cut", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", Q_NULLPTR));
        actionSelect_All->setText(QApplication::translate("MainWindow", "Select All", Q_NULLPTR));
        actionDelete->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        actiontypeface->setText(QApplication::translate("MainWindow", "Typeface", Q_NULLPTR));
        actioncolor->setText(QApplication::translate("MainWindow", "Color", Q_NULLPTR));
        actionprint->setText(QApplication::translate("MainWindow", "Print", Q_NULLPTR));
        actionGet_time->setText(QApplication::translate("MainWindow", "Get time", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "start", Q_NULLPTR));
        menuhelp_H->setTitle(QApplication::translate("MainWindow", "help", Q_NULLPTR));
        menuedit->setTitle(QApplication::translate("MainWindow", "edit", Q_NULLPTR));
        menuformat->setTitle(QApplication::translate("MainWindow", "format", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
