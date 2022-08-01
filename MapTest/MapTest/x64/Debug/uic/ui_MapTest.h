/********************************************************************************
** Form generated from reading UI file 'MapTest.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_MapTestClass
{
public:
    QLabel *label;
    QLabel *main_windows_label;
    QPushButton *read_pushButton;
    QPushButton *change_pushButton;
    QWidget *paintWidget;
    QPushButton *sure_pushButton;
    MyLabel *small_label;
    QLabel *x_pos_label;
    QLabel *y_pos_label;
    QLabel *x_position_label_3;
    QPushButton *rotate;
    QSpinBox *x_spinBox;
    QSpinBox *y_spinBox;
    QLabel *red_label;
    QLabel *blue_label;
    QLabel *gray_label;
    QLineEdit *red_lineEdit;
    QLineEdit *blue_lineEdit;
    QLineEdit *gray_lineEdit;

    void setupUi(QWidget *MapTestClass)
    {
        if (MapTestClass->objectName().isEmpty())
            MapTestClass->setObjectName(QString::fromUtf8("MapTestClass"));
        MapTestClass->setEnabled(true);
        MapTestClass->resize(1600, 900);
        MapTestClass->setMinimumSize(QSize(0, 0));
        MapTestClass->setMaximumSize(QSize(1920, 1040));
        MapTestClass->setStyleSheet(QString::fromUtf8("QWidget{background-color: qlineargradient(spread:pad, x1:0, y1:0.006, x2:1, y2:1, stop:0 rgba(0, 81, 171, 255), stop:1 rgba(100, 207, 252, 255));}"));
        label = new QLabel(MapTestClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1120, 40, 331, 111));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(20);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 255, 0);"));
        label->setAlignment(Qt::AlignCenter);
        main_windows_label = new QLabel(MapTestClass);
        main_windows_label->setObjectName(QString::fromUtf8("main_windows_label"));
        main_windows_label->setGeometry(QRect(200, 60, 801, 801));
        main_windows_label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 0, 0);"));
        main_windows_label->setFrameShape(QFrame::NoFrame);
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
        paintWidget = new QWidget(MapTestClass);
        paintWidget->setObjectName(QString::fromUtf8("paintWidget"));
        paintWidget->setGeometry(QRect(0, 0, 1, 1));
        paintWidget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
""));
        sure_pushButton = new QPushButton(MapTestClass);
        sure_pushButton->setObjectName(QString::fromUtf8("sure_pushButton"));
        sure_pushButton->setGeometry(QRect(1520, 400, 61, 41));
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
        small_label = new MyLabel(MapTestClass);
        small_label->setObjectName(QString::fromUtf8("small_label"));
        small_label->setGeometry(QRect(1140, 490, 360, 360));
        small_label->setStyleSheet(QString::fromUtf8(""));
        x_pos_label = new QLabel(MapTestClass);
        x_pos_label->setObjectName(QString::fromUtf8("x_pos_label"));
        x_pos_label->setGeometry(QRect(1160, 330, 191, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(16);
        x_pos_label->setFont(font2);
        x_pos_label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 255, 0);"));
        y_pos_label = new QLabel(MapTestClass);
        y_pos_label->setObjectName(QString::fromUtf8("y_pos_label"));
        y_pos_label->setGeometry(QRect(1360, 330, 191, 41));
        y_pos_label->setFont(font2);
        y_pos_label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 255, 0);"));
        x_position_label_3 = new QLabel(MapTestClass);
        x_position_label_3->setObjectName(QString::fromUtf8("x_position_label_3"));
        x_position_label_3->setGeometry(QRect(1360, 1310, 191, 41));
        x_position_label_3->setFont(font2);
        x_position_label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);\n"
"color: rgb(255, 0, 0);"));
        rotate = new QPushButton(MapTestClass);
        rotate->setObjectName(QString::fromUtf8("rotate"));
        rotate->setGeometry(QRect(1470, 240, 111, 41));
        rotate->setFont(font1);
        rotate->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        x_spinBox = new QSpinBox(MapTestClass);
        x_spinBox->setObjectName(QString::fromUtf8("x_spinBox"));
        x_spinBox->setGeometry(QRect(1160, 410, 121, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(20);
        x_spinBox->setFont(font3);
        x_spinBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        x_spinBox->setAlignment(Qt::AlignCenter);
        x_spinBox->setMaximum(265);
        y_spinBox = new QSpinBox(MapTestClass);
        y_spinBox->setObjectName(QString::fromUtf8("y_spinBox"));
        y_spinBox->setGeometry(QRect(1360, 410, 121, 31));
        y_spinBox->setFont(font3);
        y_spinBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));
        y_spinBox->setAlignment(Qt::AlignCenter);
        y_spinBox->setMaximum(223);
        red_label = new QLabel(MapTestClass);
        red_label->setObjectName(QString::fromUtf8("red_label"));
        red_label->setGeometry(QRect(10, 240, 41, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(12);
        red_label->setFont(font4);
        red_label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 0);"));
        blue_label = new QLabel(MapTestClass);
        blue_label->setObjectName(QString::fromUtf8("blue_label"));
        blue_label->setGeometry(QRect(10, 300, 41, 31));
        blue_label->setFont(font4);
        blue_label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"color: rgb(255, 255, 0);"));
        gray_label = new QLabel(MapTestClass);
        gray_label->setObjectName(QString::fromUtf8("gray_label"));
        gray_label->setGeometry(QRect(10, 360, 41, 31));
        gray_label->setFont(font4);
        gray_label->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 184, 184);\n"
"color: rgb(255, 255, 0);"));
        red_lineEdit = new QLineEdit(MapTestClass);
        red_lineEdit->setObjectName(QString::fromUtf8("red_lineEdit"));
        red_lineEdit->setGeometry(QRect(70, 240, 113, 31));
        red_lineEdit->setFont(font4);
        red_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 0);"));
        blue_lineEdit = new QLineEdit(MapTestClass);
        blue_lineEdit->setObjectName(QString::fromUtf8("blue_lineEdit"));
        blue_lineEdit->setGeometry(QRect(70, 300, 113, 31));
        blue_lineEdit->setFont(font4);
        blue_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);\n"
"color: rgb(255, 255, 0);"));
        gray_lineEdit = new QLineEdit(MapTestClass);
        gray_lineEdit->setObjectName(QString::fromUtf8("gray_lineEdit"));
        gray_lineEdit->setGeometry(QRect(70, 360, 113, 31));
        gray_lineEdit->setFont(font4);
        gray_lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(184, 184, 184);\n"
"color: rgb(255, 255, 0);"));
        main_windows_label->raise();
        label->raise();
        read_pushButton->raise();
        change_pushButton->raise();
        paintWidget->raise();
        sure_pushButton->raise();
        small_label->raise();
        x_pos_label->raise();
        y_pos_label->raise();
        x_position_label_3->raise();
        rotate->raise();
        x_spinBox->raise();
        y_spinBox->raise();
        red_label->raise();
        blue_label->raise();
        gray_label->raise();
        red_lineEdit->raise();
        blue_lineEdit->raise();
        gray_lineEdit->raise();

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
        sure_pushButton->setText(QCoreApplication::translate("MapTestClass", "\347\241\256\345\256\232", nullptr));
        small_label->setText(QString());
        x_pos_label->setText(QCoreApplication::translate("MapTestClass", "X\344\275\215\347\275\256:", nullptr));
        y_pos_label->setText(QCoreApplication::translate("MapTestClass", "Y\344\275\215\347\275\256\357\274\232", nullptr));
        x_position_label_3->setText(QCoreApplication::translate("MapTestClass", "X\344\275\215\347\275\256:", nullptr));
        rotate->setText(QCoreApplication::translate("MapTestClass", "\346\227\213\350\275\25490\302\260", nullptr));
        red_label->setText(QCoreApplication::translate("MapTestClass", "\347\272\242\350\211\262", nullptr));
        blue_label->setText(QCoreApplication::translate("MapTestClass", "\350\223\235\350\211\262", nullptr));
        gray_label->setText(QCoreApplication::translate("MapTestClass", "\347\201\260\350\211\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapTestClass: public Ui_MapTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPTEST_H
