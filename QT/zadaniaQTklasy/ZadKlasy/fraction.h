#ifndef FRACTION_H
#define FRACTION_H

#include<QString>


class fraction
{
private:
    int m_Numerator, m_Denominator;
public:
    void set(int,int);
    QString toString();
    double toDouble();
    fraction add(const fraction& );
    fraction subtract(const fraction& );
    fraction multiply(const fraction& );
    fraction divide(const fraction& );
};

#endif // FRACTION_H
