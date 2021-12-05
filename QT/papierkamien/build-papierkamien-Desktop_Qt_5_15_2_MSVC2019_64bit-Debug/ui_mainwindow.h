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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *u1;
    QPushButton *u2;
    QPushButton *u3;
    QPushButton *k1;
    QPushButton *k2;
    QPushButton *k3;
    QPushButton *reset;
    QLabel *ul;
    QLabel *kl;
    QSlider *horizontalSlider;
    QLabel *label;
    QPushButton *ustaw;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        u1 = new QPushButton(centralwidget);
        u1->setObjectName(QString::fromUtf8("u1"));
        u1->setGeometry(QRect(80, 110, 141, 41));
        QFont font;
        font.setPointSize(20);
        u1->setFont(font);
        u2 = new QPushButton(centralwidget);
        u2->setObjectName(QString::fromUtf8("u2"));
        u2->setGeometry(QRect(80, 180, 141, 41));
        u2->setFont(font);
        u3 = new QPushButton(centralwidget);
        u3->setObjectName(QString::fromUtf8("u3"));
        u3->setGeometry(QRect(80, 250, 141, 41));
        u3->setFont(font);
        k1 = new QPushButton(centralwidget);
        k1->setObjectName(QString::fromUtf8("k1"));
        k1->setEnabled(false);
        k1->setGeometry(QRect(320, 110, 141, 41));
        k1->setFont(font);
        k2 = new QPushButton(centralwidget);
        k2->setObjectName(QString::fromUtf8("k2"));
        k2->setEnabled(false);
        k2->setGeometry(QRect(320, 180, 141, 41));
        k2->setFont(font);
        k3 = new QPushButton(centralwidget);
        k3->setObjectName(QString::fromUtf8("k3"));
        k3->setEnabled(false);
        k3->setGeometry(QRect(320, 250, 141, 41));
        k3->setFont(font);
        reset = new QPushButton(centralwidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(230, 70, 91, 21));
        QFont font1;
        font1.setPointSize(10);
        reset->setFont(font1);
        ul = new QLabel(centralwidget);
        ul->setObjectName(QString::fromUtf8("ul"));
        ul->setGeometry(QRect(90, 40, 121, 51));
        QFont font2;
        font2.setPointSize(15);
        ul->setFont(font2);
        ul->setAlignment(Qt::AlignCenter);
        kl = new QLabel(centralwidget);
        kl->setObjectName(QString::fromUtf8("kl"));
        kl->setGeometry(QRect(340, 40, 121, 51));
        kl->setFont(font2);
        kl->setAlignment(Qt::AlignCenter);
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(100, 330, 211, 21));
        horizontalSlider->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 350, 21, 21));
        label->setAlignment(Qt::AlignCenter);
        ustaw = new QPushButton(centralwidget);
        ustaw->setObjectName(QString::fromUtf8("ustaw"));
        ustaw->setGeometry(QRect(330, 330, 80, 21));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        u1->setText(QCoreApplication::translate("MainWindow", "papier", nullptr));
        u2->setText(QCoreApplication::translate("MainWindow", "kamien", nullptr));
        u3->setText(QCoreApplication::translate("MainWindow", "nozyce", nullptr));
        k1->setText(QCoreApplication::translate("MainWindow", "papier", nullptr));
        k2->setText(QCoreApplication::translate("MainWindow", "kamien", nullptr));
        k3->setText(QCoreApplication::translate("MainWindow", "nozyce", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "reset", nullptr));
        ul->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        kl->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "  0", nullptr));
        ustaw->setText(QCoreApplication::translate("MainWindow", "Ustaw", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
