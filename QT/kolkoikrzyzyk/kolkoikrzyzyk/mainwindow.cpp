#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    xo=true;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::wcisnij(QPointer<QPushButton> p,int tab[3][3],int x,int y){
    if(xo){
        p->setText("X");
        xo=false;
        tab[x][y] = 2;
    }else{
        p->setText("O");
        xo=true;
        tab[x][y] = 5;
    }
    p->setDisabled(1);
}

int MainWindow::sprawdz(int tab[3][3]){
    int wynik=0;
    int suma;
    for(int x=0;x<3;x++){
       suma=0;
        for(int y=0;y<3;y++){
            suma+=tab[x][y];
            if(suma==6) return wynik=2;
            if(suma==15) return wynik=1;
        }
    }
    for(int x=0;x<3;x++){
        suma=0;
        for(int y=0;y<3;y++){
            suma+=tab[y][x];
            if(suma==6) return wynik=2;
            if(suma==15) return wynik=1;
        }
    }
    suma = tab[0][0] + tab[1][1] + tab[2][2];
    if(suma==6) return wynik=2;
    if(suma==15) return wynik=1;

    suma = tab[0][2] + tab[1][1] + tab[2][0];
    if(suma==6) return wynik=2;
    if(suma==15) return wynik=1;

    return wynik;
}

void MainWindow::zwyciezca(int w){
    if(w!=0) blokuj();
    if(w==2) QMessageBox::information(this, "WYGRANA","wygral X",QMessageBox::Ok);
    if(w==1) QMessageBox::information(this, "WYGRANA","wygralo O",QMessageBox::Ok);
}

void::MainWindow::blokuj(){
    ui->pB->setDisabled(1);
    ui->pB_2->setDisabled(1);
    ui->pB_3->setDisabled(1);
    ui->pB_4->setDisabled(1);
    ui->pB_5->setDisabled(1);
    ui->pB_6->setDisabled(1);
    ui->pB_7->setDisabled(1);
    ui->pB_8->setDisabled(1);
    ui->pB_9->setDisabled(1);
}

void MainWindow::on_pB_clicked()
{
    wcisnij(ui->pB,tab,0,0);
    zwyciezca(sprawdz(tab));

}


void MainWindow::on_pB_2_clicked()
{
    wcisnij(ui->pB_2,tab,0,1);
    zwyciezca(sprawdz(tab));
}


void MainWindow::on_pB_3_clicked()
{
    wcisnij(ui->pB_3,tab,0,2);
    zwyciezca(sprawdz(tab));
}


void MainWindow::on_pB_4_clicked()
{
    wcisnij(ui->pB_4,tab,1,0);
    zwyciezca(sprawdz(tab));
}


void MainWindow::on_pB_5_clicked()
{
    wcisnij(ui->pB_5,tab,1,1);
    zwyciezca(sprawdz(tab));
}


void MainWindow::on_pB_6_clicked()
{
    wcisnij(ui->pB_6,tab,1,2);
    zwyciezca(sprawdz(tab));
}


void MainWindow::on_pB_7_clicked()
{
    wcisnij(ui->pB_7,tab,2,0);
    zwyciezca(sprawdz(tab));
}


void MainWindow::on_pB_8_clicked()
{
    wcisnij(ui->pB_8,tab,2,1);
    zwyciezca(sprawdz(tab));
}


void MainWindow::on_pB_9_clicked()
{
    wcisnij(ui->pB_9,tab,2,2);
    zwyciezca(sprawdz(tab));
}


void MainWindow::on_start_clicked()
{
    ui->pB->setText("");
    ui->pB->setEnabled(1);

    ui->pB_2->setText("");
    ui->pB_2->setEnabled(1);

    ui->pB_3->setText("");
    ui->pB_3->setEnabled(1);

    ui->pB_4->setText("");
    ui->pB_4->setEnabled(1);

    ui->pB_5->setText("");
    ui->pB_5->setEnabled(1);

    ui->pB_6->setText("");
    ui->pB_6->setEnabled(1);

    ui->pB_7->setText("");
    ui->pB_7->setEnabled(1);

    ui->pB_8->setText("");
    ui->pB_8->setEnabled(1);

    ui->pB_9->setText("");
    ui->pB_9->setEnabled(1);

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++) tab[i][j] = 0;

    xo=true;

}

