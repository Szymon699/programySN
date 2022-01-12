#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->pushButton->setEnabled(1);
    ui->pushButton_2->setEnabled(1);
    ui->pushButton_3->setEnabled(1);
    ui->pushButton_4->setEnabled(1);

    ui->spinBox->setValue(0);
    ui->spinBox_2->setValue(0);

    ui->label_3->clear();

    ui->max->setMinimum(ui->min->value());




}


void MainWindow::on_pushButton_clicked()
{
    ui->pushButton_2->setEnabled(0);
    ui->pushButton_3->setEnabled(0);
    ui->pushButton_4->setEnabled(0);
    int a = ui->spinBox->value();
    int b = ui->spinBox_2->value();
    wynik = a + b;
    ui->label_3->setText(QString::number(wynik));
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->pushButton->setEnabled(0);
    ui->pushButton_3->setEnabled(0);
    ui->pushButton_4->setEnabled(0);
    int a = ui->spinBox->value();
    int b = ui->spinBox_2->value();
    wynik = a - b;
    ui->label_3->setText(QString::number(wynik));
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->pushButton_2->setEnabled(0);
    ui->pushButton->setEnabled(0);
    ui->pushButton_4->setEnabled(0);
    int a = ui->spinBox->value();
    int b = ui->spinBox_2->value();
    wynik = a * b;
    ui->label_3->setText(QString::number(wynik));
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->pushButton_2->setEnabled(0);
    ui->pushButton_3->setEnabled(0);
    ui->pushButton->setEnabled(0);
    int a = ui->spinBox->value();
    int b = ui->spinBox_2->value();
    if(b==0){
       QMessageBox::information(this, "blad","Proba dzielenia przez zero",QMessageBox::Ok);
    }else{
       wynik = a / b;
       ui->label_3->setText(QString::number(wynik));
    }

}

