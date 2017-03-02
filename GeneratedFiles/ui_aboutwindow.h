/********************************************************************************
** Form generated from reading UI file 'aboutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTWINDOW_H
#define UI_ABOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutwindow
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QFormLayout *formLayout;
    QPushButton *AboutQT;
    QPushButton *AboutClose;

    void setupUi(QDialog *aboutwindow)
    {
        if (aboutwindow->objectName().isEmpty())
            aboutwindow->setObjectName(QStringLiteral("aboutwindow"));
        aboutwindow->resize(457, 435);
        label = new QLabel(aboutwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 391, 291));
        layoutWidget = new QWidget(aboutwindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 360, 237, 56));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout->addLayout(verticalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        AboutQT = new QPushButton(layoutWidget);
        AboutQT->setObjectName(QStringLiteral("AboutQT"));

        formLayout->setWidget(0, QFormLayout::LabelRole, AboutQT);

        AboutClose = new QPushButton(layoutWidget);
        AboutClose->setObjectName(QStringLiteral("AboutClose"));

        formLayout->setWidget(1, QFormLayout::LabelRole, AboutClose);


        horizontalLayout->addLayout(formLayout);


        retranslateUi(aboutwindow);

        QMetaObject::connectSlotsByName(aboutwindow);
    } // setupUi

    void retranslateUi(QDialog *aboutwindow)
    {
        aboutwindow->setWindowTitle(QApplication::translate("aboutwindow", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("aboutwindow", "Powered By ZZS\302\256", Q_NULLPTR));
        label_3->setText(QApplication::translate("aboutwindow", "All Rights Reserved\302\2512017", Q_NULLPTR));
        label_4->setText(QApplication::translate("aboutwindow", "Version:1.0", Q_NULLPTR));
        AboutQT->setText(QApplication::translate("aboutwindow", "About QT", Q_NULLPTR));
        AboutClose->setText(QApplication::translate("aboutwindow", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class aboutwindow: public Ui_aboutwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTWINDOW_H
