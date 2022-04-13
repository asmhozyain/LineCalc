/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;
    QTextBrowser *ztab;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(748, 585);
        Form->setStyleSheet(QString::fromUtf8("background-color: rgb(41, 65, 79);"));
        label = new QLabel(Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 61, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size: 22pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
""));
        ztab = new QTextBrowser(Form);
        ztab->setObjectName(QString::fromUtf8("ztab"));
        ztab->setGeometry(QRect(20, 70, 281, 411));
        ztab->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 10pt;\n"
"text-align: left;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
"border-color: rgb(41, 65, 79);\n"
"border-radius: 10px;\n"
""));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        label->setText(QApplication::translate("Form", "<html><head/><body><p><span style=\" color:#b0c8d7;\">Z0</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
