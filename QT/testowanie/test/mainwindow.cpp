#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
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


void MainWindow::on_ok_clicked()
{
    imie = ui->imie->text();
    nazwisko = ui->nazwisko->text();
    miasto = ui->miasto->text();

    if(imie =="" || nazwisko=="" || miasto=="") Error("uzupelnij wszystkie pola");

    wynik = wynik + "<br>" +(imie + " " + nazwisko + " " + miasto);
    ui->wynik->setText(wynik);
}

void MainWindow::Error(QString komunikat){
    QMessageBox::information(this,"ERROR",komunikat);
}
