#ifndef PROST_H
#define PROST_H

#include<QString>


class prostokat
{
private:
    int a,b;
public:
    prostokat(int,int);
    void pobierz(int&,int&);
};

class prostopadloscian{
private:
    int h=5,a,b;
public:
    prostopadloscian(int,int);
    int objetosc();
    int pole();

};

#endif // PROST_H
