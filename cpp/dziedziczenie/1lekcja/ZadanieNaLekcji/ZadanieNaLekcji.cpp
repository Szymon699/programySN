// ZadanieNaLekcji.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <ctime>
using namespace std;

class Prostokat {
public:
    int a, b;
    Prostokat();
    int pole();
    int obwod();
};

class Prostopadloscian : public Prostokat {
public:
    int h;
    Prostopadloscian();
    int objetosc();
    int ppc();
    void wypisz();
};

class Figura : public Prostopadloscian {
public:
    int ilosc;
    Figura() { ilosc = rand() % 10; }
    void wypisz() {
        cout << a << " " << b << " " << h << " " << ilosc << endl;
    }
};

int main()
{
    srand(time(NULL));
    Prostopadloscian p1;
    Figura f1;
    f1.wypisz();
    p1.wypisz();
    //cout << endl << "pole: " << p1.pole();
    //cout << endl << "obwod: " << p1.obwod();
    ///cout << endl << "objetosc: " << p1.objetosc();
    //cout << endl << "ppc: " << p1.ppc();

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

Prostokat::Prostokat()
{
    a = rand() % 10;
    b = rand() % 10;
}

int Prostokat::pole()
{
    return a*b;
}

int Prostokat::obwod()
{
    return 2*a + 2*b;
}

Prostopadloscian::Prostopadloscian(){
    h = rand() % 10;
}

int Prostopadloscian::objetosc()
{
    return a*a*h;
}

int Prostopadloscian::ppc()
{
    return 2 * a * b + 2 * a * h + 2 * b * h;
}

void Prostopadloscian::wypisz()
{
    cout << a << " " << b << " " << h;
}


/*
// ZadanieNaLekcji.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <ctime>
using namespace std;

class Prostokat {
private:
    int a, b;
public:
    void setA(int pA) {
        a = pA;
    }
    void setB(int pB) {
        b = pB;
    }
    int getA() {
        return a;
    }
    int getB() {
        return b;
    }
    Prostokat();
    int pole();
    int obwod();
};

class Prostopadloscian : public Prostokat {
public:
    int h;
    Prostopadloscian();
    int objetosc();
    int ppc();
    void wypisz();
};

int main()
{
    srand(time(NULL));
    Prostopadloscian p1;
    p1.wypisz();
    cout << endl << "pole: " << p1.pole();
    cout << endl << "obwod: " << p1.obwod();
    cout << endl << "objetosc: " << p1.objetosc();
    cout << endl << "ppc: " << p1.ppc();

}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

Prostokat::Prostokat()
{
    a = rand() % 10;
    b = rand() % 10;
}

int Prostokat::pole()
{
    return a*b;
}

int Prostokat::obwod()
{
    return 2*a + 2*b;
}

Prostopadloscian::Prostopadloscian(){
    h = rand() % 10;
}

int Prostopadloscian::objetosc()
{
    return getA()*getB()*h;
}

int Prostopadloscian::ppc()
{
    return 2 * getA() * getB() + 2 * getA() * h + 2 * getB() * h;
}

void Prostopadloscian::wypisz()
{
    cout << getA() << " " << getB() << " " << h;
}
*/