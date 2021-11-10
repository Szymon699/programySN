#include "fraction.h"

#include<QString>

void fraction::set(int numerator, int denominator){
    m_Numerator = numerator;
    m_Denominator = denominator;
}

QString fraction::toString(){
    return QString("%1 / %2 \n").arg(m_Numerator).arg(m_Denominator);
}

double fraction::toDouble(){
    return 1.0 * m_Numerator / m_Denominator;
}
fraction fraction::add(const fraction& other){
    fraction f;
    f.m_Numerator = m_Numerator * other.m_Denominator + m_Denominator * other.m_Numerator;
    f.m_Denominator = m_Denominator * other.m_Denominator;
    return f;
}

fraction fraction::subtract(const fraction& other){
    fraction f;
    f.m_Numerator = m_Numerator * other.m_Denominator - m_Denominator * other.m_Numerator;
    f.m_Denominator = m_Denominator * other.m_Denominator;
    return f;
}

fraction fraction::multiply(const fraction& other){
    fraction f;
    f.m_Numerator = m_Numerator * other.m_Numerator;
    f.m_Denominator = m_Denominator * other.m_Denominator;
    return f;
}

fraction fraction::divide(const fraction & other){
    fraction f;
    f.m_Numerator = m_Numerator * other.m_Denominator;
    f.m_Denominator = m_Denominator * other.m_Numerator;
    return f;
}
