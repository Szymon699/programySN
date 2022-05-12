#include <iostream>
#include <ctime>

using namespace std;

class I {
    virtual int oblicz_pp() = 0;
    virtual void wypisywanie() = 0;
};

class Kwadrat : public I{
public:
    int a, h;
    Kwadrat() {
        a = 0;
        h = 0;
    };
    Kwadrat(int pA, int pH) {
        a = pA;
        h = pH;
    };
    int oblicz_pp() {
        return a * h;
    };
    void wypisywanie() {
        cout << a << " " << h << " " << oblicz_pp() << endl;
    };
};

class Prostokat : public Kwadrat {
public:
    int grubosc_linii;
    Prostokat() {
        a = 0;
        h = 0;
        grubosc_linii = 0;
    };
    Prostokat(int pA, int pH, int pG) {
        a = pA;
        h = pH;
        grubosc_linii = pG;
    };
    int oblicz_pp() {
        return a * h;
    };
    void wypisywanie() {
        cout << a << " " << h << " " << grubosc_linii << " " << oblicz_pp() << endl;
    };
};


class Romb : public Kwadrat {
public:
    int kat_ostry;
    Romb() {
        a = 0;
        h = 0;
        kat_ostry = 0;
    };
    Romb(int pA, int pH, int pK) {
        a = pA;
        h = pH;
        kat_ostry = pK;
    };
    Romb(Romb& cop) {
        a = cop.a;
        h = cop.h;
        kat_ostry = cop.kat_ostry;
    };
    int oblicz_pp() {
        return a * h;
    };
    void wypisywanie() {
        cout << a << " " << h << " " << kat_ostry << " " << oblicz_pp() << endl;
    };
};
template<typename T>
T suma(T s, T pp) {
    return s + pp;
};
int main()
{
    srand(time(NULL));
    int liczba, a, h, grubosc_linii,kat_ostry,s=0;
    string rodzaj_figury;
    cout << "Podaj liczbe od 1 do 100 oraz rodzaj figury: ";
    cin >> liczba >> rodzaj_figury;
    
    while (liczba < 1 || liczba > 100) {
        cout << "Podaj liczbe OD 1 DO 100: ";
        cin >> liczba;
    }
    while (rodzaj_figury != "kwadrat" && rodzaj_figury != "prostokat" && rodzaj_figury != "romb") {
        cout << "Podaj poprawna figure(kwadrat, prostokat, romb): ";
        cin >> rodzaj_figury;
    }

    if (rodzaj_figury == "kwadrat") {
        Kwadrat* k = new Kwadrat[liczba];
        for (int i = 0; i < liczba; i++) {
            a = rand() % 10 + 1;
            k[i].a = a;
            k[i].h = a;

            k[i].wypisywanie();

            s = suma<int>(s, k[i].oblicz_pp());
        }
    }

    if (rodzaj_figury == "prostokat") {
        Prostokat* p = new Prostokat[liczba];
        for (int i = 0; i < liczba; i++) {
            a = rand() % 10 + 1;
            h = rand() % 10 + 1;
            grubosc_linii = rand() % 5 + 1;
            p[i].a = a;
            p[i].h = h;
            p[i].grubosc_linii = grubosc_linii;

            p[i].wypisywanie();

            s = suma<int>(s, p[i].oblicz_pp());
        }
    }
    if (rodzaj_figury == "romb") {
        Romb* r = new Romb[liczba];
        for (int i = 0; i < liczba; i++) {
            a = rand() % 10 + 1;
            h = rand() % 10 + 1;
            kat_ostry = rand() % 89 + 1;
            r[i].a = a;
            r[i].h = h;
            r[i].kat_ostry = kat_ostry;

            r[i].wypisywanie();

            s = suma<int>(s, r[i].oblicz_pp());
        }
    }
    cout << s;
}


