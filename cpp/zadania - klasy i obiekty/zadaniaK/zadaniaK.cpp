// zadaniaK.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//



//ZADANIE 1
/*#include <iostream>

using namespace std;

class Uczen {
public:
    string imie;
    string nazwisko;
    string klasa;
    int grupa;
    int nr;
    Uczen(string,string,string,int,int);
    void wyswietlDane();
};

Uczen::Uczen(string pImie, string pNazwisko, string pKlasa, int pGrupa, int pNr) {
    imie = pImie;
    nazwisko = pNazwisko;
    klasa = pKlasa;
    grupa = pGrupa;
    nr = pNr;
}

void Uczen::wyswietlDane() {
    cout << imie << " " << nazwisko << " " << klasa << " " << grupa << " " << nr;
}

int main()
{
    Uczen u1("adam", "nowak", "8c", 1, 16);
    u1.wyswietlDane();
}*/

//ZADANIE 2
/*#include <iostream>

using namespace std;

class Prostopadloscian {
public:
    int a;
    int b;
    int h;
    void UstawDane();
    void wyswietlDane();
};

void Prostopadloscian::UstawDane() {
    cout << "Podaj a:";
    cin >> a;
    cout << "Podaj b:";
    cin >> b;
    cout << "Podaj h:";
    cin >> h;
}

void Prostopadloscian::wyswietlDane() {
    int v = a * b*h;
    cout << "V= " << v << endl;
    int pb = a * b;
    cout << "Pb= " << pb << endl;
    cout << "a:" << a << " b:" << b;

}

int main()
{
    Prostopadloscian p1;
    p1.UstawDane();
    p1.wyswietlDane();
}*/

//zadanie3

//zadanie 4
#include <iostream>

using namespace std;

class Przeliczanie_dlugosci{
public:
    int dl;
    string je;
    string j_pr;
    Przeliczanie_dlugosci() {
        dl = 5;
        je = "jardow";
        j_pr = "Docelowa jednostka miary jest metr";
    }
    void jednostka();
};

void Przeliczanie_dlugosci::jednostka() {
    cout << j_pr << endl;
}


int main() {
    Przeliczanie_dlugosci dl1;
    dl1.jednostka();
   
}