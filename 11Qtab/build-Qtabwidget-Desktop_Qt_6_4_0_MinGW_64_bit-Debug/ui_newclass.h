/********************************************************************************
** Form generated from reading UI file 'newclass.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCLASS_H
#define UI_NEWCLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newclass
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *newclass)
    {
        if (newclass->objectName().isEmpty())
            newclass->setObjectName("newclass");
        newclass->resize(600, 389);
        verticalLayout_2 = new QVBoxLayout(newclass);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(newclass);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        label = new QLabel(newclass);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(newclass);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(newclass);

        QMetaObject::connectSlotsByName(newclass);
    } // setupUi

    void retranslateUi(QWidget *newclass)
    {
        newclass->setWindowTitle(QCoreApplication::translate("newclass", "Form", nullptr));
        label->setText(QCoreApplication::translate("newclass", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("newclass", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newclass: public Ui_newclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCLASS_H
