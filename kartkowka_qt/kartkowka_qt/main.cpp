#include <cpp.h>
#include <ctime>
#include <iostream>
#include<QTextStream>

using namespace std;


int main()
{
    QTextStream cout(stdout);
    srand(time(NULL));
    int a,h;

    trojkat t1(rand()%9+1,rand()%9+1);
    t1.gettery(a,h);

    graniastoslup g1(rand()%9+1);
    graniastoslup g2(rand()%9+1);
    graniastoslup g3(rand()%9+1);
    graniastoslup g4(rand()%9+1);
    graniastoslup g5(rand()%9+1);

    g1.toString();
    cout << g1.toString();

    g2.toString();
    cout << g2.toString();

    g3.toString();
    cout << g3.toString();

    g4.toString();
    cout << g4.toString();

    g5.toString();
    cout << g5.toString();




}
