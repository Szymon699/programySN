#include <fraction.h>
#include<QTextStream>
//#include <QDebug>

int main()
{
    QTextStream cout(stdout);
    fraction f1;
    f1.set(1,3); //1/3
    fraction f2;
    f2.set(1,2); // 1/2
    fraction f3;

    f3 = f1.add(f2);
    f3.toString();
    cout << f3.toString();

    f3 = f1.subtract(f2);
    f3.toString();
    cout << f3.toString();

    f3 = f1.multiply(f2);
    f3.toString();
    cout << f3.toString();

    f3 = f1.divide(f2);
    f3.toString();
    cout << f3.toString();
    //qDebug()<< f3.toString();
}
