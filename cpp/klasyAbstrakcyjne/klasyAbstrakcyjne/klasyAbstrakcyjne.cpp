// klasyAbstrakcyjne.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

class Info {
public:
    virtual void wyswietlDane() = 0;
};

class Osoba {
public:
    string imie, nazwisko;
};

class Stanowisko {
public:
    string stanowisko;
};

class Klasa {
public:
    string klasa;
};

class Pracownik : public Osoba, public Stanowisko, public Info {
public:
    void wyswietlDane() {
        cout << imie << " " << nazwisko << stanowisko << endl;
    }
};


class Uczen : public Osoba, public Klasa, public Info {
public:
    void wyswietlDane() {
        cout << imie << " " << nazwisko << " " << klasa << endl;
    }
};

int main()
{
    Pracownik* p1 = new Pracownik;
    p1->imie = "jan";
    p1->nazwisko = "taki";
    p1->stanowisko = "nauczyciel";
    p1->wyswietlDane();

    Uczen* u1 = new Uczen;
    u1->imie = "jan";
    u1->nazwisko = "waki";
    u1->klasa = "3e";
    u1->wyswietlDane();

}

/*
// klasyAbstrakcyjne.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

class Osoba {
public:
    string imie, nazwisko;
    virtual void wyswietlDane() = 0;
};

class Stanowisko {
public:
    string stanowisko;
    virtual void wyswietlDane() = 0;
};

class Klasa {
public:
    string klasa;
    virtual void wyswietlDane() = 0;
};

class Pracownik : public Osoba, public Stanowisko{
public:
    void wyswietlDane() {
        cout << imie << " " << nazwisko << stanowisko << endl;
    }
};


class Uczen : public Osoba, public Klasa {
public:
    void wyswietlDane() {
        cout << imie << " " << nazwisko << klasa << endl;
    }
};

int main()
{
    Pracownik* p1 = new Pracownik;
    p1->imie = "jan";
    p1->nazwisko = "taki";
    p1->stanowisko = "nauczyciel";
    p1->wyswietlDane();

    Uczen* u1 = new Uczen;
    u1->imie = "jan";
    u1->nazwisko = "waki";
    u1->klasa = "3e";
    u1->wyswietlDane();

}

*/
