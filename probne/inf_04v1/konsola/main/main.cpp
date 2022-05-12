#include <iostream>

using namespace std;

class tablica {
public:
    int tab[10];
    tablica(int pV) {
        for (int i = 0; i < 10; i++) tab[i]=pV;  
    }
    void wyswietlDane();
    void Uzupelnij(int, int); 
    void max();    
};

void tablica::wyswietlDane() {
    cout << "Tablica: " << endl;
    for (int i = 0; i < 10; i++) cout << tab[i] << " ";
}

void tablica::Uzupelnij(int pI,int pWartosc) {
    tab[pI] = pWartosc;
}

void tablica::max() {
    int max = 0;
    for (int i = 0; i < 10; i++) {
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    cout << endl << "Najwieksza liczba wynosi: " << max;
}

int main()
{  
    int Wartosc;
    tablica tab1(3);
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczby majace znalezc sie w tablicy: ";
        cin >> Wartosc;
        tab1.Uzupelnij(i, Wartosc);
    }
    
    tab1.wyswietlDane();

    tab1.max();
}



