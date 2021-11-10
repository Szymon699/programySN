// wskazniki.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    /*int bok1 = 10;
    int* w_bok1;
    w_bok1 = &bok1;
    int bok2 = 10;
    int* w_bok2;
    w_bok2 = &bok2;
    int pole;
    int* w_pole;
    w_pole = &pole;
    
    *w_pole = *w_bok1 * *w_bok2;

    cout << *w_pole << " " << w_pole << endl;
    cout << pole << " " << &pole;

    int* ocena = new int(4);
    cout << *ocena;
    delete ocena;

    const int n = 5;
    int tab[n];
    int* wsk = tab;

    for (int i = 0; i < n; i++) {
        *(wsk - 1) = rand() % 10;
        cout << *(wsk - 1) << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        *wsk = rand() % 10;
        cout << *wsk++ << " ";
    }

    int n;
    cin >> n;
    int* tab = new int[n];
    for (int i = 0; i < n; i++) {
        *tab++ = rand() % 10;
        
    }
    tab -= n;
    for (int i = 0; i < n; i++) {
        cout << *tab++ << " "; //*tab++ wskaznik wpisuje rand do miesjce 0 po czym po ++ przeskakuje na miejsce 1 mozna tez *(tab+i) by chodzic po miejsach ale wskaznik dalej jest na 0 
    }
    tab -= n;
    delete[] tab;

    */
    
    int n; // 1 sposob min i max z tablicy
    cin >> n;
    int* tab = new int[n];
    int* max = new int;
    int* min = new int;
    *max = 0;
    *min = 100;
    for (int i = 0; i < n; i++) *tab++ = rand() % 100 + 1;
    tab -= n;
    for (int i = 0; i < n; i++) {
        if (*(tab + i) > *max) {
            *max = *(tab + i);
        }
        else if (*(tab + i) < *min) {
            *min = *(tab + i);
        }
    }
    for (int i = 0; i < n; i++) cout << *tab++ << " ";
    cout << endl << "max: " << *max << " " << "komorka pamieci: " << max;
    cout << endl << "min:" << *min << " " << "komorka pamieci: " << min;
 

   /* int n, min = 100, max = 0; // 2 sposob min i max z tablicy
    cin >> n;
    int* tab = new int[n];
    for (int i = 0; i < n; i++) *tab++ = rand() % 100 + 1;
    tab -= n;
    for (int i = 0; i < n; i++) {
        if (*tab++ > max) {
            max = *tab;
        }
        else if (*tab < min) {
            min = *tab;
        }
    }
    tab -= n;
    for (int i = 0; i < n; i++) cout << *tab++ << " ";
    cout << endl << "max: " << max << " " << "komorka pamieci: " << tab[max];
    cout << endl << "min:" << min;*/
    

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
