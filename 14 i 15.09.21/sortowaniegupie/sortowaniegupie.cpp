#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

//Sortowanie przez wybór
    void sortowanieWybor(int tab[],int n) {
        cout << "SORTOWANIE PRZEZ WYBOR" << endl;
        int i = 0, min, p;
        for (int i = 0; i < n; i++) tab[i] = rand() % n;
        cout << "Liczby nie posortowane: ";
        for (int i = 0; i < n; i++) cout << tab[i];
        
        while (i != n - 1) {
            min = n;
            for (int j = i; j < n; j++) {
                if (tab[j] < min) {
                    min = tab[j];
                    p = j;
                }
            }
            swap(tab[i], tab[p]);
            i++;
        }
        cout << endl;
        cout << "Liczby posortowane: ";
        for (int i = 0; i < n; i++) cout << tab[i];
    }

    void sortowanieWstawianie(int tab[],int n) {
        cout << endl << "SORTOWANIE PRZEZ WSTAWIANIE" << endl;
        int j = 1, k;
        for (int i = 0; i < n; i++) tab[i] = rand() % 100;
        cout << "Liczby nie posortowane:";
        for (int i = 0; i < n; i++) cout << " " << tab[i];

        while (j <= n) {
            for (k = j; k > 0; k--)
                if (tab[k] > tab[k - 1]) swap(tab[k], tab[k - 1]);
                else break;
            j++;



        }
        cout << endl;
        cout << "Liczby posortowane:";
        for (int i = 0; i < n; i++) cout << " " << tab[i];
    }


int main() {
    srand(time(NULL));
    int tab[10];
   
    sortowanieWybor(tab, 10);

    sortowanieWstawianie(tab, 10);

}
//Sortowanie przez wstawianie
/*
    srand(time(NULL));
    int tab[5], n = 5, j = 1, k;
    for (int i = 0; i < n; i++) tab[i] = rand() % 100;
    for (int i = 0; i < n; i++) cout << " " << tab[i];

    while (j <= n) {
        for (k = j; k > 0; k--) 
            if (tab[k] > tab[k-1]) swap(tab[k], tab[k - 1]);
            else break;
        j++;
        

        
    }
    cout << endl;
    for (int i = 0; i < n; i++) cout << " " << tab[i];*/


/*int main() {
    srand(time(NULL));
    int tab[10],n = 10, licznik = 0;
    bool posartowanie = false;

    for (int i = 0; i < n; i++) tab[i] = rand() % 5 + 1;
    for (int i = 0; i < n; i++) cout << tab[i];
}
*/

//sortowanie naiwne
/*
int main() {
    srand(time(NULL));
    int n=10, i = 0;
    int tab[10];
    for (int i = 0; i < n; i++) tab[i] = rand() % 5 + 1;
    for (int i = 0; i < n; i++) cout << tab[i];

    while (i < n - 1) {
        if (tab[i] > tab[i + 1]) {
            swap(tab[i], tab[i + 1]);
            i = 0;
        }
        else {
            i++;
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++) cout << tab[i];
}*/