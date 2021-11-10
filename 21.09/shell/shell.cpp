// shell.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

void sortowanieWstawianie(int tab[], int n) {
    int j = 1, k;
    while (j <= n) {
        for (k = j; k > 0; k--)
            if (tab[k] > tab[k - 1]) swap(tab[k], tab[k - 1]);
            else break;
        j++;
    }
}



int main() {
    srand(time(NULL));
    int j, h, k, n, ile;
    cin >> n;
    int* tab = new int[n];
   

    for (int i = 0; i < n; i++) *tab++ = rand() % 100;
    tab -= n;
    for (int i = 0; i < n; i++) cout << *tab++ << " ";
    tab -= n;
    cout << "\n";

    for (int h = n / 2; h > 1; h--) {
        int *tabp = new int[n/2]
        for (int i = 0; i < h; i++) {
            
        }
    }
}

/*
int main() {
    srand(time(NULL));
    const int n = 8;
    int tab[n], tabp[n / 2],j,k;

    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 100;
        cout << tab[i] << " ";
    }
    cout << "\n";

    for (int h = n / 2; h > 1; h--) {
        for (int i = 0; i < h; i++) {
            j = i;
            k = 0;
            while (j < n) {
                tabp[k++] = tab[j];
                j += h;

            }
            sortowanieWstawianie(tabp, k);
            while (j >= 0) {
                tab[j - h] = tabp[--k];
                j -= h;
            }
        }
    }
    sortowanieWstawianie(tabp, k);
    for (int i = 0; i < n; i++) cout << tab[i] << " ";


}
*/

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
