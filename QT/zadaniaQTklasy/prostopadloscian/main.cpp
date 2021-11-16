#include <prost.h>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
     srand(time(NULL));
     int a,b;

     prostokat p1(rand()%9+1,rand()%9+1);
     p1.pobierz(a,b);

     prostopadloscian pp1(a,b);
     cout<<pp1.objetosc() << endl;
     cout<<pp1.pole();

}
