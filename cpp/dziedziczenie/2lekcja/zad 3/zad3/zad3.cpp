
#include <iostream>
#include <ctime>

using namespace std;

class Lekarz {
public:
    string imie, nazwisko,specjalizacja;
    virtual void zwrocDane();
};

class Ordynator : protected Lekarz {
public:
    string oddzial;
    void zwrocDane();
    void setImie(string pI) {
        imie = pI;
    }
    void setNazwisko(string pN) {
        nazwisko = pN;
    }
    void setSpecjalizacja(string pS) {
        specjalizacja = pS;
    }
};

int main()
{
    Ordynator* o1 = new Ordynator;
    o1->setImie("Jan");
    o1->setNazwisko("kowalski");
    o1->setSpecjalizacja("chirurgia");
    o1->oddzial = "dzieciecy";
    o1->zwrocDane();

    Lekarz* l1 = new Lekarz;
    l1->imie = "Adam";
    l1->nazwisko = "fajny";
    l1->specjalizacja = "kardiolog";
    l1->zwrocDane();

   
}

void Lekarz::zwrocDane()
{
    cout << "LEKARZ" << endl;
    cout << imie << " " << nazwisko << " " << specjalizacja << endl;
}

void Ordynator::zwrocDane()
{
    cout << "ORDYNATOR" << endl;
    cout << imie << " " << nazwisko << " " << specjalizacja << " " << oddzial << endl;
}

/*

#include <iostream>
#include <ctime>

using namespace std;

class Lekarz {
public:
    string imie, nazwisko,specjalizacja;
    virtual void zwrocDane();
};

class Ordynator : public Lekarz {
public:
    string oddzial;
    void zwrocDane();
};

int main()
{
    Lekarz* w_pracownik;

    Lekarz p1;
    w_pracownik = &p1;
    w_pracownik->imie = "jan";
    w_pracownik->nazwisko = "kowalski";
    w_pracownik->specjalizacja = "chirurgia";
    w_pracownik->zwrocDane();

    Ordynator p2;
    w_pracownik = &p2;
    w_pracownik->imie = "Adam";
    w_pracownik->nazwisko = "Nowak";
    w_pracownik->specjalizacja = "kardiologia";
    p2.oddzial = "wewnetrzny dzieciecy";
    w_pracownik->zwrocDane();
}

void Lekarz::zwrocDane()
{
    cout << "LEKARZ" << endl;
    cout << imie << " " << nazwisko << " " << specjalizacja << endl;
}

void Ordynator::zwrocDane()
{
    cout << "ORDYNATOR" << endl;
    cout << imie << " " << nazwisko << " " << specjalizacja << " " << oddzial << endl;
}*/