// TabliceWymiaroweWskazniki.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

void quick_sort(int* tab, int pocz, int kon) {
    if (pocz >= kon) {
        return;
    }
    int p = pocz - 1, q = kon + 1, pivot = tab[(pocz + kon) / 2];

    while (true) {
        while (pivot > tab[++p]);
        while (pivot < tab[--q]);
        if (p <= q)
            swap(tab[p], tab[q]);
        else
            break;
    }

    if (q > pocz)
        quick_sort(tab, pocz, q);
    if (p < kon)
        quick_sort(tab, p, kon);
}

int main()
{
    srand(time(NULL));
    int** tab = new int* [5]; //alokacja pamieci
    int licznik=0,roznica=1,sumaW=0;
    vector <int> wektor = {};
    cout  << "----Nie Posortowana tablica:" << endl;
    for (int i = 0; i < 5; ++i) {
        tab[i] = new int[5]; //alokacja pamieci
        for (int j = 0; j < 5; ++j) { //wpisanie wartosci do tablicy
            tab[i][j] = rand() % 25 + 1;
            if (licznik == 5) {
                licznik = 0;
                cout << endl;   
            }
            cout << tab[i][j] << '\t';
            licznik++;
        }
    }  
    // 1 sposób posortowania
    int tablica[25];
    int k = 0;
    
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j) tablica[k++] = tab[i][j];
    quick_sort(tablica, 0, k - 1);
    k=0;
    

    for (int i = 0; i < 5; ++i) 
        for (int j = 0; j < 5; ++j) tab[i][j] = tablica[k++];
        
    


    cout <<  endl << "----Posortowana tablica:";
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) { 
            if (licznik == 5) {
                licznik = 0;
                cout << endl;
            }
            cout << tab[i][j] << '\t';
            licznik++;
        }
    }
    
    for (int i = 0; i < 5; ++i) {
        for (int j =0; j < 5; ++j) {
            wektor.push_back(abs(tab[i][j] - roznica));
            roznica++;
        }
    }
    cout << endl << "wartosci bezwgledne roznic:" << endl;
    for (int element : wektor) cout << element << " ";

    for (int element : wektor)  sumaW += element ;

    cout << endl << "suma wektorow: " << sumaW;


    //zniszcz tab2
    for (int i = 0; i < 5; ++i)
        delete[] tab[i]; //uwolnienie pamieci
    delete[] tab; // uwolnienie pamieci
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

