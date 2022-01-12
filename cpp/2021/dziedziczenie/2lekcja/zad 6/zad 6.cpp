
#include <iostream>
#include <ctime>

using namespace std;

class Policjant {
public:
    string imie, nazwisko, stopien;
    virtual void zwrocDane();
};

class Naczelnik : protected Policjant {
public:
    string wydzial;
    void zwrocDane();
    void setImie(string pI) {
        imie = pI;
    }
    void setNazwisko(string pN) {
        nazwisko = pN;
    }
    void setStopien(string pS) {
        stopien = pS;
    }
};

int main()
{
    Naczelnik* o1 = new Naczelnik;
    o1->setImie("Jan");
    o1->setNazwisko("kowalski");
    o1->setStopien("komisarz");
    o1->wydzial = "wydzial prewencji";
    o1->zwrocDane();

    Policjant* l1 = new Policjant;
    l1->imie = "Adam";
    l1->nazwisko = "gadzet";
    l1->stopien = "inspektor";
    l1->zwrocDane();


}

void Policjant::zwrocDane()
{
    cout << "POLICJANT" << endl;
    cout << imie << " " << nazwisko << " " << stopien << endl;
}

void Naczelnik::zwrocDane()
{
    cout << "NACZELNIK" << endl;
    cout << imie << " " << nazwisko << " " << stopien << " " << wydzial << endl;
}
