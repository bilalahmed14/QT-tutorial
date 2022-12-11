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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *u;
    QLineEdit *username_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *p;
    QLineEdit *password_2;
    QPushButton *login;
    QLabel *labelpic;
    QLabel *label;
    QProgressBar *progressBar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1073, 581);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(780, 180, 228, 154));
        groupBox->setMinimumSize(QSize(228, 154));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        u = new QLabel(groupBox);
        u->setObjectName("u");

        horizontalLayout->addWidget(u);

        username_2 = new QLineEdit(groupBox);
        username_2->setObjectName("username_2");

        horizontalLayout->addWidget(username_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        p = new QLabel(groupBox);
        p->setObjectName("p");

        horizontalLayout_2->addWidget(p);

        password_2 = new QLineEdit(groupBox);
        password_2->setObjectName("password_2");
        password_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(password_2);


        verticalLayout->addLayout(horizontalLayout_2);

        login = new QPushButton(groupBox);
        login->setObjectName("login");

        verticalLayout->addWidget(login);

        labelpic = new QLabel(centralwidget);
        labelpic->setObjectName("labelpic");
        labelpic->setGeometry(QRect(280, 90, 441, 351));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(780, 420, 63, 20));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(550, 430, 118, 23));
        progressBar->setValue(24);
        MainWindow->setCentralWidget(centralwidget);
        labelpic->raise();
        groupBox->raise();
        label->raise();
        progressBar->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1073, 25));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        u->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        p->setText(QCoreApplication::translate("MainWindow", "Password ", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        labelpic->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
