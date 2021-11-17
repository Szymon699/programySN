/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pB;
    QPushButton *pB_2;
    QPushButton *pB_3;
    QPushButton *pB_4;
    QPushButton *pB_5;
    QPushButton *pB_6;
    QPushButton *pB_7;
    QPushButton *pB_8;
    QPushButton *pB_9;
    QPushButton *start;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(708, 577);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(158, 158, 158);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pB = new QPushButton(centralwidget);
        pB->setObjectName(QString::fromUtf8("pB"));
        pB->setGeometry(QRect(120, 40, 150, 150));
        QFont font;
        font.setPointSize(30);
        pB->setFont(font);
        pB->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(53, 53, 53);"));
        pB_2 = new QPushButton(centralwidget);
        pB_2->setObjectName(QString::fromUtf8("pB_2"));
        pB_2->setGeometry(QRect(270, 40, 150, 150));
        pB_2->setFont(font);
        pB_2->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(53, 53, 53);"));
        pB_3 = new QPushButton(centralwidget);
        pB_3->setObjectName(QString::fromUtf8("pB_3"));
        pB_3->setGeometry(QRect(420, 40, 150, 150));
        pB_3->setFont(font);
        pB_3->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(53, 53, 53);"));
        pB_4 = new QPushButton(centralwidget);
        pB_4->setObjectName(QString::fromUtf8("pB_4"));
        pB_4->setGeometry(QRect(120, 190, 150, 150));
        pB_4->setFont(font);
        pB_4->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(53, 53, 53);"));
        pB_5 = new QPushButton(centralwidget);
        pB_5->setObjectName(QString::fromUtf8("pB_5"));
        pB_5->setGeometry(QRect(270, 190, 150, 150));
        pB_5->setFont(font);
        pB_5->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(53, 53, 53);"));
        pB_6 = new QPushButton(centralwidget);
        pB_6->setObjectName(QString::fromUtf8("pB_6"));
        pB_6->setGeometry(QRect(420, 190, 150, 150));
        pB_6->setFont(font);
        pB_6->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(53, 53, 53);"));
        pB_7 = new QPushButton(centralwidget);
        pB_7->setObjectName(QString::fromUtf8("pB_7"));
        pB_7->setGeometry(QRect(120, 340, 150, 150));
        pB_7->setFont(font);
        pB_7->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(53, 53, 53);"));
        pB_8 = new QPushButton(centralwidget);
        pB_8->setObjectName(QString::fromUtf8("pB_8"));
        pB_8->setGeometry(QRect(270, 340, 150, 150));
        pB_8->setFont(font);
        pB_8->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(53, 53, 53);"));
        pB_9 = new QPushButton(centralwidget);
        pB_9->setObjectName(QString::fromUtf8("pB_9"));
        pB_9->setGeometry(QRect(420, 340, 150, 150));
        pB_9->setFont(font);
        pB_9->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(53, 53, 53);\n"
""));
        start = new QPushButton(centralwidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(310, 10, 80, 21));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pB->setText(QString());
        pB_2->setText(QString());
        pB_3->setText(QString());
        pB_4->setText(QString());
        pB_5->setText(QString());
        pB_6->setText(QString());
        pB_7->setText(QString());
        pB_8->setText(QString());
        pB_9->setText(QString());
        start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
