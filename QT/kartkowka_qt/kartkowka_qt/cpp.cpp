#include "cpp.h"

#include<QString>

trojkat::trojkat(int pA, int pH){
    a = pA;
    h = pH;
}

int trojkat::pole(){
    return (a*h)/2;
}

void trojkat::gettery(int &pA, int &pH){
    pA = a;
    pH = h;
}

QString trojkat::toString(){
    return QString().arg(a).arg(h);
}


graniastoslup::graniastoslup(int pHH){
    hh=pHH;
}

int graniastoslup::objetosc(){
    return hh;
}

QString graniastoslup::toString(){
    return QString().arg(hh);
}



