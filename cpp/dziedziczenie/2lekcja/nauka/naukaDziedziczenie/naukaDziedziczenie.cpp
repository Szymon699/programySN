// naukaDziedziczenie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//


#include <iostream>
#include <ctime>

using namespace std;

class Pracownik {
public:
    string imie, nazwisko;
    virtual void zwrocDane();
};

class Nauczyciel : public Pracownik {
public:
    string przedmiot;
    void zwrocDane();
};

class Wychowawca : public Nauczyciel {
public:
    string klasa;
    void zwrocDane();
};

int main()
{
    Pracownik* w_pracownik;

    Pracownik p1;
    w_pracownik = &p1;
    w_pracownik->imie = "jan";
    w_pracownik->nazwisko = "kowalski";
    w_pracownik->zwrocDane();

    Nauczyciel p2;
    w_pracownik = &p2;
    w_pracownik->imie = "Adam";
    w_pracownik->nazwisko = "Nowak";
    w_pracownik->zwrocDane();

    Wychowawca p3;
    w_pracownik = &p3;
    w_pracownik->imie = "maria";
    w_pracownik->nazwisko = "jakas";
    w_pracownik->zwrocDane();
}

void Pracownik::zwrocDane()
{
    cout << "PRACOWNIIK" << endl;
    cout << imie << " " << nazwisko << endl;
}

void Nauczyciel::zwrocDane()
{
    cout << "NAUCZYCIEL" << endl;
    cout << imie << " " << nazwisko << " " << przedmiot << endl;
}

void Wychowawca::zwrocDane()
{
    cout << "WYCHOWAWCA" << endl;
    cout << imie << " " << nazwisko << " " << przedmiot << " " << klasa << endl;
}



/*#include <iostream>
#include <ctime>

using namespace std;

class A {
public:
    string a = "klasa A";
    void wypisz() {
        cout << a << endl;
    }
};

class B : public A {
public:
    string b="klasa B";
    void wypisz() {
        cout << a << " " << b << endl;
    }
};

class C : public B {
public:
    string c = "klasa C";
    void wypisz() {
        cout << a << " " << b << " " << c << endl;
    }
};

int main()
{
    A a;
    B b;
    C c;
    a.wypisz();
    b.wypisz();
    c.wypisz();
}*/




