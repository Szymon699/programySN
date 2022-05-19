#include "widget.h"
#include <QPushButton>
#include <QGridLayout>
#include <QApplication>
#include <QMessageBox>

using namespace std;

QPushButton *button[7][5];
QGridLayout *layout = new QGridLayout;

void wpisz(int i, int j){
    if(button[i][j]->text() == "X"){
        button[i][j]->setText(" ");
    }else{
        button[i][j]->setText("X");
    }
}

void win(){
    int licznik=0;
    for(int i=1; i<6; i++)
        for(int j=1; j<4; j++){
            if(button[i][j]->text()=="X")
                licznik++;
        }
    if(licznik == 15){
        QMessageBox mb;
        mb.setWindowTitle("wynik");
        mb.setText("WYGRANA");
        mb.exec();
        for(int i = 0; i < 7; i++)
            for(int j = 0; j < 5; j++)
                button[i][j]->setText(" ");
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    for(int i = 0; i < 7; i++)
        for(int j = 0; j < 5; j++){
            button[i][j] = new QPushButton;
            button[i][j]->setText(" ");
            button[i][j]->setFixedSize(100,100);
        }
    for(int i=1; i<6; i++)
        for(int j=1; j<4; j++){
            layout->addWidget(button[i][j],j,i,1,1);
            QObject::connect(button[i][j],&QPushButton::clicked,[=](){
                wpisz(i,j);
                wpisz(i-1,j);
                wpisz(i+1,j);
                wpisz(i,j-1);
                wpisz(i,j+1);

                win();
            });
        }


    Widget w;
    w.setFixedSize(515,315);
    w.setLayout(layout);
    w.show();
    return a.exec();
}
