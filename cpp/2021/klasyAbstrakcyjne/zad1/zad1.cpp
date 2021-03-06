#include <iostream>
using namespace std;

class Osoba {
public:
    string imie, nazwisko;
    virtual void wyswietlDane() = 0;
};

class Lekarz : public Osoba {
public:
    string specjalizacja;
    void wyswietlDane() {
        cout << imie << " " << nazwisko << " " << specjalizacja << endl;
    }
};

class Ordynator : public Lekarz {
public:
    string oddzial;
    void wyswietlDane() {
        cout << imie << " " << nazwisko << " " << specjalizacja << " " << oddzial << endl;
    }
};

int main()
{
    Lekarz* p1 = new Lekarz;
    p1->imie = "jan";
    p1->nazwisko = "taki";
    p1->specjalizacja = "kardiolog";
    p1->wyswietlDane();

    Ordynator* o1 = new Ordynator;
    o1->imie = "jan";
    o1->nazwisko = "taki";
    o1->specjalizacja = "kardiolog";
    o1->oddzial = "dzieciecy";
    o1->wyswietlDane();
}

