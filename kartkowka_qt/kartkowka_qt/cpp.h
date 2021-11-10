#ifndef CPP_H
#define CPP_H

#include<QString>

class trojkat
{
private:
    int a,h;
public:
    trojkat(int, int);
    int pole();
    void gettery(int&,int&);
    QString toString();
};

class graniastoslup{
private:
    int hh;
public:
    graniastoslup(int);
    int objetosc();
    QString toString();
};

#endif // CPP_H
