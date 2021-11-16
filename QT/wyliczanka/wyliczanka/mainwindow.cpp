#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ctime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand(time(NULL));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_startBTN_clicked()
{
    komputer = rand()% ui->slider_2->value();
    //ui->info->setText(QString::number(komputer)); //zamiana int na string
    ui->confirmBTN->setEnabled(1); //uruchamiamy przycisk
    ui->startBTN->setDisabled(1); //wylaczamy przycisk
    ui->info->setText("liczba wylosowana");
    start = ui->slider->value();
    ileprob = 0;
    ui->progressBar->setMaximum(start); //ustawiamy maksymalna wartosc
    ui->spinBox->setMaximum(ui->slider_2->value());
}


void MainWindow::on_confirmBTN_clicked()
{
    ileprob++;
    ui->progressBar->setValue(ileprob);
    int uzytkownik = ui->spinBox->value();
    if(uzytkownik < komputer)
        ui->info->setText("za mała liczba");
    else if(uzytkownik > komputer)
        ui->info->setText("za duża liczba");
    else{
        ui->info->setText("WYGRANA!!!");
        ui->startBTN->setEnabled(1); //uruchamiamy przycisk
        ui->confirmBTN->setDisabled(1); //wylaczamy przycisk
        ileprob = 0;
    }

    if(ileprob==start){
        ui->info->setText("PRZEGRANA!!");
        ui->startBTN->setEnabled(1); //uruchamiamy przycisk
        ui->confirmBTN->setDisabled(1); //wylaczamy przycisk

    }
}

