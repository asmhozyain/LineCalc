/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_12;
    QPushButton *calculate;
    QLabel *label_10;
    QLabel *label_9;
    QTextEdit *thickness;
    QTextEdit *width1;
    QTextEdit *spacing;
    QTextEdit *height;
    QTextEdit *eg;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_8;
    QLabel *label_7;
    QTextBrowser *textBrowser_4;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_16;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QLabel *textEdit;
    QLabel *label;
    QTextEdit *wdo;
    QTextEdit *hdo;
    QTextEdit *tdo;
    QTextEdit *wpo;
    QTextEdit *hpo;
    QTextEdit *tpo;
    QLabel *otl;
    QLabel *dol;
    QLabel *wag;
    QTextBrowser *textBrowser_3;
    QLabel *label_17;
    QTextBrowser *textBrowser_5;
    QTextBrowser *textBrowser_6;
    QLabel *label_15;
    QLabel *label_18;
    QRadioButton *checkBox;
    QRadioButton *checkBox_2;
    QRadioButton *checkBox_3;
    QCheckBox *checkBox_4;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1341, 1080);
        MainWindow->setAcceptDrops(true);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background-color: rgb(41, 65, 79);\n"
"}\n"
"\n"
"QMessageBox {\n"
"    background-color: rgb(107, 168, 207);\n"
"\n"
"}\n"
"\n"
"QMessageBox QLabel {\n"
"    background-color: rgb(107, 168, 207)\n"
"}\n"
"\n"
"QMessageBox QPushButton {\n"
"\n"
"  background-color: #0095ff;\n"
"  border: 1px solid transparent;\n"
"  border-radius: 3px;\n"
"  box-shadow: rgba(255, 255, 255, .4) 0 1px 0 0 inset;\n"
"  box-sizing: border-box;\n"
"  color: #fff;\n"
"  cursor: pointer;\n"
"  display: inline-block;\n"
"  font-family: -apple-system,system-ui,\"Segoe UI\",\"Liberation Sans\",sans-serif;\n"
"  font-size: 13px;\n"
"  font-weight: 400;\n"
"  line-height: 1.15385;\n"
"  margin: 0;\n"
"  outline: none;\n"
"  padding: 10px 24px;\n"
"  position: relative;\n"
"  text-align: center;\n"
"  text-decoration: none;\n"
"  user-select: none;\n"
"  -webkit-user-select: none;\n"
"  touch-action: manipulation;\n"
"  vertical-align: baseline;\n"
"  white-space: nowrap;\n"
"}\n"
"\n"
"\n"
"QMessageBox QPushButton:pressed {"
                        "\n"
"background-color: #07c;\n"
"}\n"
"\n"
"QMenuBar {\n"
"    background-color: rgb(41, 65, 79);\n"
"}\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(140, 100, 441, 261));
        label_12->setStyleSheet(QString::fromUtf8("image: url(:/img/img/microstrip.png)"));
        calculate = new QPushButton(centralwidget);
        calculate->setObjectName(QString::fromUtf8("calculate"));
        calculate->setGeometry(QRect(130, 385, 311, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Sans Serif"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        calculate->setFont(font);
        calculate->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(107, 168, 207);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(71, 154, 207);\n"
"}\n"
"\n"
""));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(140, 10, 61, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Quicksand"));
        font1.setPointSize(26);
        font1.setBold(true);
        font1.setWeight(75);
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 26pt;\n"
"text-align: right;\n"
"font-family: Quicksand;\n"
"font-weight: bold;"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(790, 220, 61, 51));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 26pt;\n"
"text-align: right;\n"
"font-family: Quicksand;\n"
"font-weight: bold;"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        thickness = new QTextEdit(centralwidget);
        thickness->setObjectName(QString::fromUtf8("thickness"));
        thickness->setGeometry(QRect(860, 230, 124, 31));
        thickness->setStyleSheet(QString::fromUtf8("Background-color:rgb(234, 234, 234);\n"
"border-radius: 10px;\n"
"font-size: 10pt;"));
        width1 = new QTextEdit(centralwidget);
        width1->setObjectName(QString::fromUtf8("width1"));
        width1->setGeometry(QRect(860, 130, 124, 31));
        width1->setStyleSheet(QString::fromUtf8("Background-color:rgb(234, 234, 234);\n"
"border-radius: 10px;\n"
"font-size: 10pt;"));
        spacing = new QTextEdit(centralwidget);
        spacing->setObjectName(QString::fromUtf8("spacing"));
        spacing->setGeometry(QRect(210, 20, 124, 31));
        spacing->setAcceptDrops(false);
        spacing->setStyleSheet(QString::fromUtf8("Background-color:rgb(234, 234, 234);\n"
"border-radius: 10px;\n"
"font-size: 10pt;"));
        spacing->setAutoFormatting(QTextEdit::AutoNone);
        height = new QTextEdit(centralwidget);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(860, 180, 124, 31));
        height->setStyleSheet(QString::fromUtf8("Background-color:rgb(234, 234, 234);\n"
"border-radius: 10px;\n"
"font-size: 10pt;"));
        eg = new QTextEdit(centralwidget);
        eg->setObjectName(QString::fromUtf8("eg"));
        eg->setGeometry(QRect(860, 280, 124, 31));
        eg->setStyleSheet(QString::fromUtf8("Background-color:rgb(234, 234, 234);\n"
"border-radius: 10px;\n"
"font-size: 10pt;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(800, 265, 51, 51));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 26pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 71, 71));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	image: url(:/img/img/1c.png);\n"
"	background-color: rgb(107, 168, 207);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(71, 154, 207);\n"
"}"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 85, 71, 71));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/img/img/2c.png);\n"
"	background-color: rgb(107, 168, 207);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(71, 154, 207);\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 160, 71, 71));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/img/img/3c.png);\n"
"	background-color: rgb(107, 168, 207);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(71, 154, 207);\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 235, 71, 71));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/img/img/4c.png);\n"
"	background-color: rgb(107, 168, 207);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(71, 154, 207);\n"
"}"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 310, 71, 71));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/img/img/5c.png);\n"
"	background-color: rgb(107, 168, 207);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(71, 154, 207);\n"
"}"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 385, 71, 71));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/img/img/6c.png);\n"
"	background-color: rgb(107, 168, 207);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(71, 154, 207);\n"
"}"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 460, 71, 71));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"image: url(:/img/img/7c.png);\n"
"	background-color: rgb(107, 168, 207);\n"
"	border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(71, 154, 207);\n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(790, 170, 61, 51));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 26pt;\n"
"text-align: right;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
""));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(790, 120, 61, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Quicksand"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        font2.setKerning(false);
        label_7->setFont(font2);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 26pt;\n"
"text-align: right;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
"\n"
""));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(850, 450, 251, 41));
        textBrowser_4->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 15pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
"border-color: rgb(41, 65, 79);\n"
"border-radius: 10px;\n"
""));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(790, 340, 51, 51));
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size: 22pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
""));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(790, 390, 51, 51));
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size: 22pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
"\n"
""));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(790, 440, 61, 51));
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size: 22pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
""));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(850, 350, 251, 41));
        textBrowser->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 15pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
"border-color: rgb(41, 65, 79);\n"
"border-radius: 10px;\n"
"\n"
""));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(850, 400, 251, 41));
        textBrowser_2->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 15pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
"border-color: rgb(41, 65, 79);\n"
"border-radius: 10px;\n"
"\n"
""));
        textEdit = new QLabel(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(140, 10, 440, 81));
        textEdit->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 23pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;"));
        textEdit->setTextFormat(Qt::AutoText);
        textEdit->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 50, 171, 51));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size: 10pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
"\n"
""));
        wdo = new QTextEdit(centralwidget);
        wdo->setObjectName(QString::fromUtf8("wdo"));
        wdo->setGeometry(QRect(1010, 130, 124, 31));
        wdo->setStyleSheet(QString::fromUtf8("Background-color:rgb(234, 234, 234);\n"
"border-radius: 10px;\n"
"font-size: 10pt;"));
        hdo = new QTextEdit(centralwidget);
        hdo->setObjectName(QString::fromUtf8("hdo"));
        hdo->setGeometry(QRect(1010, 180, 124, 31));
        hdo->setStyleSheet(QString::fromUtf8("Background-color:rgb(234, 234, 234);\n"
"border-radius: 10px;\n"
"font-size: 10pt;"));
        tdo = new QTextEdit(centralwidget);
        tdo->setObjectName(QString::fromUtf8("tdo"));
        tdo->setGeometry(QRect(1010, 230, 124, 31));
        tdo->setStyleSheet(QString::fromUtf8("Background-color:rgb(234, 234, 234);\n"
"border-radius: 10px;\n"
"font-size: 10pt;"));
        wpo = new QTextEdit(centralwidget);
        wpo->setObjectName(QString::fromUtf8("wpo"));
        wpo->setGeometry(QRect(1150, 130, 124, 31));
        wpo->setStyleSheet(QString::fromUtf8("Background-color:rgb(234, 234, 234);\n"
"border-radius: 10px;\n"
"font-size: 10pt;"));
        hpo = new QTextEdit(centralwidget);
        hpo->setObjectName(QString::fromUtf8("hpo"));
        hpo->setGeometry(QRect(1150, 180, 124, 31));
        hpo->setStyleSheet(QString::fromUtf8("Background-color:rgb(234, 234, 234);\n"
"border-radius: 10px;\n"
"font-size: 10pt;"));
        tpo = new QTextEdit(centralwidget);
        tpo->setObjectName(QString::fromUtf8("tpo"));
        tpo->setGeometry(QRect(1150, 230, 124, 31));
        tpo->setStyleSheet(QString::fromUtf8("Background-color:rgb(234, 234, 234);\n"
"border-radius: 10px;\n"
"font-size: 10pt;"));
        otl = new QLabel(centralwidget);
        otl->setObjectName(QString::fromUtf8("otl"));
        otl->setGeometry(QRect(860, 90, 81, 21));
        otl->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size: 10pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
"\n"
""));
        dol = new QLabel(centralwidget);
        dol->setObjectName(QString::fromUtf8("dol"));
        dol->setGeometry(QRect(1010, 90, 81, 21));
        dol->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size: 10pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
"\n"
""));
        wag = new QLabel(centralwidget);
        wag->setObjectName(QString::fromUtf8("wag"));
        wag->setGeometry(QRect(1150, 90, 81, 21));
        wag->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size: 10pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
"\n"
""));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(130, 550, 300, 410));
        textBrowser_3->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 10pt;\n"
"text-align: center;\n"
"border-radius: 10px;\n"
"\n"
"font-weight: bold;\n"
"border-color: rgb(41, 65, 79);\n"
""));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(130, 490, 61, 51));
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size: 22pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
""));
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(530, 550, 300, 410));
        textBrowser_5->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 10pt;\n"
"text-align: center;\n"
"border-radius: 10px;\n"
"\n"
"font-weight: bold;\n"
"border-color: rgb(41, 65, 79);\n"
""));
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(920, 550, 300, 410));
        textBrowser_6->setStyleSheet(QString::fromUtf8("color: rgb(176, 200, 215);\n"
"font-size: 10pt;\n"
"text-align: center;\n"
"border-radius: 10px;\n"
"\n"
"font-weight: bold;\n"
"border-color: rgb(41, 65, 79);\n"
""));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(510, 490, 51, 51));
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size: 22pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
""));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(900, 490, 51, 51));
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size: 22pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
"\n"
""));
        checkBox = new QRadioButton(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(770, 140, 21, 20));
        checkBox_2 = new QRadioButton(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(770, 190, 21, 20));
        checkBox_3 = new QRadioButton(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(770, 240, 21, 20));
        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(680, 80, 81, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1080, 10, 161, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font-size: 10pt;\n"
"text-align: center;\n"
"font-family: Quicksand;\n"
"font-weight: bold;\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        label_12->raise();
        calculate->raise();
        label_10->raise();
        label_9->raise();
        thickness->raise();
        spacing->raise();
        eg->raise();
        label_2->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        label_8->raise();
        label_7->raise();
        label_14->raise();
        label_16->raise();
        textBrowser_2->raise();
        height->raise();
        width1->raise();
        textBrowser_4->raise();
        label_13->raise();
        textBrowser->raise();
        textEdit->raise();
        wdo->raise();
        hdo->raise();
        tdo->raise();
        wpo->raise();
        hpo->raise();
        tpo->raise();
        otl->raise();
        dol->raise();
        wag->raise();
        textBrowser_3->raise();
        label_17->raise();
        textBrowser_5->raise();
        textBrowser_6->raise();
        label_15->raise();
        label_18->raise();
        checkBox_2->raise();
        checkBox_3->raise();
        checkBox_4->raise();
        checkBox->raise();
        label_3->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1341, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_12->setText(QString());
        calculate->setText(QApplication::translate("MainWindow", "Calculate", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" color:#b0c8d7;\">S</span></p></body></html>", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" color:#b0c8d7;\">T</span></p></body></html>", nullptr));
        eg->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:7.8pt;\"><br /></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:28pt; color:#b0c8d7;\">\316\265</span><span style=\" font-size:28pt; color:#b0c8d7; vertical-align:sub;\">r</span></p></body></html>", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b0c8d7;\">H</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b0c8d7;\">W</span></p></body></html>", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:26pt; color:#b0c8d7;\">C</span></p></body></html>", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:26pt; color:#b0c8d7;\">L</span></p></body></html>", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:26pt; color:#b0c8d7;\">Z</span><span style=\" font-size:26pt; color:#b0c8d7; vertical-align:sub;\">0</span></p></body></html>", nullptr));
        textEdit->setText(QString());
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b0c8d7;\">multivariate<br/>analysis</span></p></body></html>", nullptr));
        otl->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b0c8d7;\">first</span></p></body></html>", nullptr));
        dol->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b0c8d7;\">last</span></p></body></html>", nullptr));
        wag->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" color:#b0c8d7;\">step</span></p></body></html>", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:26pt; color:#b0c8d7;\">Z</span><span style=\" font-size:26pt; color:#b0c8d7; vertical-align:sub;\">0</span></p></body></html>", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:26pt; color:#b0c8d7;\">C</span></p></body></html>", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"right\"><span style=\" font-size:26pt; color:#b0c8d7;\">L</span></p></body></html>", nullptr));
        checkBox->setText(QString());
        checkBox_2->setText(QString());
        checkBox_3->setText(QString());
        checkBox_4->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
