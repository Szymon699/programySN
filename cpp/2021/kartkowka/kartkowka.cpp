#include<iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;

void sortowanie_przez_wstawianie(int tab[][5], int n) {
    int j = 1, k;
    while (j <= n) {
        for (k = j; k > 0; k--)
            if (tab[k][0] > tab[k - 1][0]) {
                swap(tab[k][0], tab[k - 1][0]);
                swap(tab[k][1], tab[k - 1][1]);
            }
            else break;
        j++;
    }
}

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


int main() {
    srand(time(NULL));
    //zadanie1
    cout << "---zadanie1:" << endl;
    vector <int> wektorZ1 = { };
    int liczba = 0, suma = 0;

    while (suma <= 100) {
        cout << "Podaj liczbe: ";
        cin >> liczba;
        suma += liczba;
        if (liczba % 2 == 0) wektorZ1.push_back(liczba);
        else wektorZ1.insert(wektorZ1.begin(), liczba);
    }
    for (int element : wektorZ1) cout << element << " ";
    cout << endl << "suma:" << suma;

    //zadanie2
    cout << endl << "---zadanie2:" << endl;
    int tabz2[10][5];
    int licznikz2=0;
    cout << "----Nie Posortowana tablica:" << endl;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            tabz2[i][j] = rand() % 1000 + 1;
            if (licznikz2 == 5) {
                licznikz2 = 0;
                cout << endl;
            }
            cout << tabz2[i][j] << '\t';
            licznikz2++;
        }
    }
    //najw wartosc i jej indeksy
    int najw = 0,najwX,najwY;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (tabz2[i][j] > najw) {
                najw = tabz2[i][j];
                najwX = i;
                najwY = j;
            }
        }
    }
  
    sortowanie_przez_wstawianie(tabz2,10);
    

    cout << endl << "----Posortowana tablica:" << endl;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (licznikz2 == 5) {
                licznikz2 = 0;
                cout << endl;
            }
            cout << tabz2[i][j] << '\t';
            licznikz2++;
        }
    }

    cout << endl << "najw wartosc: " << najw << " X: " << najwX << " Y: " << najwY;

    //zadanie 3
    cout << endl << "---zadanie3:" << endl;
    int* tab = new int[10];
    double S=0, Sr;
    for (int i = 0; i < 10; i++) tab[i] = rand() % 10;
    for (int i = 0; i < 10; i++) S += tab[i];
    Sr = S / 10;
    for (int i = 0; i < 10; i++) cout << tab[i] << " ";

    cout << endl << "srednia: " << Sr << " suma: " << S;

    delete[] tab;

    //zadanie 4
    cout << endl << "---zadanie4:" << endl;
    int tabz4[10],wartosc;
    for (int i = 0; i < 10; i++) tabz4[i] = rand() % 10;
    for (int i = 0; i < 10; i++) {
        wartosc = tabz4[i];
        int* tabD = new int[wartosc];
        for (int i = 0; i < wartosc; i++) {
            tabD[i] = rand() % 10;
            quick_sort(tabD, 0, wartosc - 1);
            for (int i = 0; i < wartosc; i++) cout << i << " tablica dynamiczna: " << tabD[i];
        }
    }
    for (int i = 0; i < 10; i++) cout << endl << "statyczna: " << tabz4[i];
    
    




}