#include "prost.h"

#include<QString>

prostokat::prostokat(int pA, int pB){
    a = pA;
    b = pB;
}

void prostokat::pobierz(int &pA, int &pB){
     pA = a;
     pB = b;
}

prostopadloscian::prostopadloscian(int pA, int pB){
    a = pA;
    b = pB;
}

int prostopadloscian::objetosc(){
    return a*b*h;
}

int prostopadloscian::pole(){
    return 2*a*b + 2*a*b + 2*b*h;
}

