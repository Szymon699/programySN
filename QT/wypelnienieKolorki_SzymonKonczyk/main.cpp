#include "widget.h"
#include <QPushButton>
#include <QGridLayout>
#include <QApplication>
#include <QMessageBox>

using namespace std;

QPushButton *button[7][5];
QGridLayout *layout = new QGridLayout;

void wpisz(int i, int j){
    if(button[i][j]->text() == "1"){
        button[i][j]->setStyleSheet("background-color:yellow; color: yellow;");
        button[i][j]->setText("2");
    }
    else if(button[i][j]->text() == "2"){
        button[i][j]->setStyleSheet("background-color:green; color: green;");
        button[i][j]->setText("3");
    }
    else if(button[i][j]->text() == "3"){
        button[i][j]->setStyleSheet("background-color:red; color: red;");
        button[i][j]->setText("4");
    }else if(button[i][j]->text() == "4"){
        button[i][j]->setStyleSheet("background-color:yellow; color: yellow;");
        button[i][j]->setText("2");
    }

}

void win(int c){
    int licznik=0;
    for(int i=1; i<6; i++)
        for(int j=1; j<4; j++){
            if(button[i][j]->text()==c)
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
            button[i][j]->setText("1");
            button[i][j]->setStyleSheet("color: white;");
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

                win(2);
                win(3);
                win(4);
            });
        }


    Widget w;
    w.setFixedSize(515,315);
    w.setLayout(layout);
    w.show();
    return a.exec();
}
