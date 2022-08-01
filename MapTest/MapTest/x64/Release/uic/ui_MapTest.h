/********************************************************************************
** Form generated from reading UI file 'MapTest.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPTEST_H
#define UI_MAPTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_MapTestClass
{
public:
    QLabel *label;
    MyLabel *main_windows_label;
    QPushButton *read_pushButton;
    QPushButton *change_pushButton;
    QLabel *x_position_label;
    QLabel *y_position_label;
    QWidget *paintWidget;
    QLineEdit *x_lineEdit;
    QLineEdit *y_lineEdit;
    QPushButton *sure_pushButton;
    QLabel *small_label;

    void setupUi(QWidget *MapTestClass)
    {
        if (MapTestClass->objectName().isEmpty())
            MapTestClass->setObjectName(QString::fromUtf8("MapTestClass"));
        MapTestClass->setEnabled(true);
        MapTestClass->resize(1600, 902);
        MapTestClass->setMinimumSize(QSize(0, 0));
        MapTestClass->setMaximumSize(QSize(1920, 1040));
        MapTestClass->setStyleSheet(QString::fromUtf8("QWidget{background-color: qlineargradient(spread:pad, x1:0, y1:0.006, x2:1, y2:1, stop:0 rgba(0, 81, 171, 255), stop:1 rgba(0, 207, 252, 255));}"));
        label = new QLabel(MapTestClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1140, 30, 321, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 0, 0);"));
        label->setAlignment(Qt::AlignCenter);
        main_windows_label = new MyLabel(MapTestClass);
        main_windows_label->setObjectName(QString::fromUtf8("main_windows_label"));
        main_windows_label->setGeometry(QRect(60, 0, 1068, 896));
        main_windows_label->setStyleSheet(QString::fromUtf8(""));
        main_windows_label->setFrameShape(QFrame::Box);
        main_windows_label->setScaledContents(false);
        read_pushButton = new QPushButton(MapTestClass);
        read_pushButton->setObjectName(QString::fromUtf8("read_pushButton"));
        read_pushButton->setGeometry(QRect(1470, 60, 111, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(14);
        read_pushButton->setFont(font1);
        read_pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    color: rgb(255, 255, 255);\n"
"    background-color: rgb(46, 204, 113);\n"
"	border-radius:8px;\n"
"    border: 1px solid rgb(183 , 183 , 183);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    color:red;\n"
"    background-color:rgb(228 , 240 , 250);\n"
"    border: 1px solid rgb(15 , 150 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    color:red;\n"
"    background-color:rgb(204 , 228 , 247);\n"
"    border: 1px solid rgb(1 , 84 , 153);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}"));
        change_pushButton = new QPushButton(MapTestClass);
        change_pushButton->setObjectName(QString::fromUtf8("change_pushButton"));
        change_pushButton->setGeometry(QRect(1470, 150, 111, 41));
        change_pushButton->setFont(font1);
        change_pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    color: rgb(255, 255, 255);\n"
"    background-color: rgb(46, 204, 113);\n"
"	border-radius:8px;\n"
"    border: 1px solid rgb(183 , 183 , 183);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    color:red;\n"
"    background-color:rgb(228 , 240 , 250);\n"
"    border: 1px solid rgb(15 , 150 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    color:red;\n"
"    background-color:rgb(204 , 228 , 247);\n"
"    border: 1px solid rgb(1 , 84 , 153);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}"));
        x_position_label = new QLabel(MapTestClass);
        x_position_label->setObjectName(QString::fromUtf8("x_position_label"));
        x_position_label->setGeometry(QRect(1150, 350, 191, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(16);
        x_position_label->setFont(font2);
        x_position_label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 0, 0);"));
        y_position_label = new QLabel(MapTestClass);
        y_position_label->setObjectName(QString::fromUtf8("y_position_label"));
        y_position_label->setGeometry(QRect(1150, 410, 191, 41));
        y_position_label->setFont(font2);
        y_position_label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 0, 0);"));
        paintWidget = new QWidget(MapTestClass);
        paintWidget->setObjectName(QString::fromUtf8("paintWidget"));
        paintWidget->setGeometry(QRect(0, 0, 51, 891));
        paintWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
""));
        x_lineEdit = new QLineEdit(MapTestClass);
        x_lineEdit->setObjectName(QString::fromUtf8("x_lineEdit"));
        x_lineEdit->setGeometry(QRect(1390, 360, 121, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(14);
        x_lineEdit->setFont(font3);
        x_lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        x_lineEdit->setAlignment(Qt::AlignCenter);
        y_lineEdit = new QLineEdit(MapTestClass);
        y_lineEdit->setObjectName(QString::fromUtf8("y_lineEdit"));
        y_lineEdit->setGeometry(QRect(1390, 420, 121, 31));
        y_lineEdit->setFont(font3);
        y_lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        y_lineEdit->setAlignment(Qt::AlignCenter);
        sure_pushButton = new QPushButton(MapTestClass);
        sure_pushButton->setObjectName(QString::fromUtf8("sure_pushButton"));
        sure_pushButton->setGeometry(QRect(1530, 380, 61, 41));
        sure_pushButton->setFont(font1);
        sure_pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"    color: rgb(255, 255, 255);\n"
"    background-color: rgb(46, 204, 113);\n"
"	border-radius:8px;\n"
"    border: 1px solid rgb(183 , 183 , 183);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    color:red;\n"
"    background-color:rgb(228 , 240 , 250);\n"
"    border: 1px solid rgb(15 , 150 , 255);\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    color:red;\n"
"    background-color:rgb(204 , 228 , 247);\n"
"    border: 1px solid rgb(1 , 84 , 153);\n"
"    padding-left:3px;\n"
"    padding-top:3px;\n"
"}"));
        small_label = new QLabel(MapTestClass);
        small_label->setObjectName(QString::fromUtf8("small_label"));
        small_label->setGeometry(QRect(1190, 490, 360, 360));
        main_windows_label->raise();
        label->raise();
        read_pushButton->raise();
        change_pushButton->raise();
        x_position_label->raise();
        y_position_label->raise();
        paintWidget->raise();
        x_lineEdit->raise();
        y_lineEdit->raise();
        sure_pushButton->raise();
        small_label->raise();

        retranslateUi(MapTestClass);

        QMetaObject::connectSlotsByName(MapTestClass);
    } // setupUi

    void retranslateUi(QWidget *MapTestClass)
    {
        MapTestClass->setWindowTitle(QCoreApplication::translate("MapTestClass", "MapTest", nullptr));
        label->setText(QCoreApplication::translate("MapTestClass", "\350\277\220\350\241\214\346\227\266\351\227\264", nullptr));
        main_windows_label->setText(QString());
        read_pushButton->setText(QCoreApplication::translate("MapTestClass", "\350\257\273\345\217\226txt", nullptr));
        change_pushButton->setText(QCoreApplication::translate("MapTestClass", "\350\275\254\346\231\266\345\205\203\345\233\276", nullptr));
        x_position_label->setText(QCoreApplication::translate("MapTestClass", "X\344\275\215\347\275\256:", nullptr));
        y_position_label->setText(QCoreApplication::translate("MapTestClass", "Y\344\275\215\347\275\256\357\274\232", nullptr));
        sure_pushButton->setText(QCoreApplication::translate("MapTestClass", "\347\241\256\345\256\232", nullptr));
        small_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MapTestClass: public Ui_MapTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPTEST_H
