/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(913, 510);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_3, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);


        gridLayout->addLayout(formLayout, 0, 1, 2, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_4, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName("pushButton_5");
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton_5, 4, 0, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 913, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "name", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "address", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "mail", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
