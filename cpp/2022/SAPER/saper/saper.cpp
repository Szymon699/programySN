#include <iostream>

using namespace std;

class Pole {
public:
    int wartosc;
    bool klik;
    bool czyBomba;

    Pole();
    bool wpiszBombe();
    void dodaj();

};

class Metody : public Pole {
public:
    bool czyTrafiBombe(int);
    void wyswietlBomby();
    void wyswietl();

};
const int n = 5; //wielkosc planszy n x n
const int m = 5; //ilosc bomb
Metody tab[n+2][n+2];

bool calaPlansza() {
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (tab[i][j].klik == false) return true;
    return false;

}
int main()
{
    srand(time(NULL));

    
    int x, y,z, licznik=0;
    bool bomba, koniec = true;

    while (licznik < m) {
        x = rand() % n + 1;
        y = rand() % n + 1;
        bomba = tab[x][y].wpiszBombe();
        if (bomba) {
            licznik++;
            for (int i = x - 1; i <= x + 1; i++)
                for (int j = y - 1; j <= y + 1; j++)
                    tab[i][j].dodaj();
        }
    }
    
    while ((calaPlansza)&&(koniec)) {
        cout << endl << "-----------------------------" << endl;
        cin >> y >> x >> z;
        bomba = tab[x][y].czyTrafiBombe(z);
        if (bomba) {
            for (int i = 1; i <= n; i++, cout << endl)
                for (int j = 1; j <= n; j++)
                    tab[i][j].wyswietlBomby();
            koniec = false;
        }
        else
            for (int i = 1; i <= n; i++, cout << endl)
                for (int j = 1; j <= n; j++)
                    tab[i][j].wyswietl();
    }
   
}

Pole::Pole()
{
    wartosc = 0;
    klik = false;
    czyBomba = false;
}

bool Pole::wpiszBombe()
{
    if (wartosc == 9) return false;
    else {
        wartosc = 9;
        return true;
    }
}

void Pole::dodaj()
{
    if (wartosc != 9) wartosc ++ ;
}

bool Metody::czyTrafiBombe(int z)
{
    if (!klik) {
        if (z == 1)
            if (czyBomba) czyBomba = false;
            else czyBomba = true;
        else {
            klik = true;
            if (wartosc == 9) return true;
        }
        return false;
    }
    return false;
}

void Metody::wyswietlBomby()
{
    if (wartosc == 9)
        if (czyBomba) cout << "!";
        else cout << "X";
    else
        if (czyBomba) cout << "?";
        else cout << wartosc;
}

void Metody::wyswietl()
{
    if (!klik)
        if (czyBomba) cout << "P";
        else cout << "_";
    else
        cout << wartosc;
}
