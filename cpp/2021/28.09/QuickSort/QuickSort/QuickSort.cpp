// QuickSort.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include<time.h>
#include<Windows.h>


using namespace std;

    void los(int* tab, int n) {
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            tab[i] = rand() % 100 + 1;
            cout << tab[i] << " ";
        }
    }
    void quick_sort(int* tab, int pocz, int kon) {
        if (pocz >= kon) {
            return;
        }
        int p = pocz - 1, q = kon + 1 , pivot = tab[(pocz + kon) / 2];

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
        int n, *tab;

        cout << "Podaj wielkosc tablicy:";
        cin >> n;
        tab = new int[n];
        cout << "----------" << "wylosowane liczby" << endl;      
        los(tab, n);
        cout  << endl << "----------" << "Posotrowane liczby" << endl;
        quick_sort(tab, 0, n - 1);
        for (int i = 0; i < n; i++) cout << tab[i] << " ";

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
