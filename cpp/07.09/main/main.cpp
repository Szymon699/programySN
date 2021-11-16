// main.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

    int main()
    {
        int liczba,liczbaa, i = 0, tab[8];
        int licznik = 0, m = 0, ilosc = 0; 
        int dzielnik[100] , o=0,NWD=0,pierwsza = 1;
        
        for (int j = 0; j < 8; j++) tab[j] = 0;
        cin >> liczba >> liczbaa;
        while (liczba) {
            tab[i++] = liczba % 2;
            liczba /= 2;
        }
        for (int j = 7; j >= 0; j--) {
            cout << tab[j];
            if (tab[j] == 1) licznik++;
        }
  
        cout << endl << "jedynki:" << licznik << " " << "zero:" << 8 - licznik;
    
        for (int k = 0; k <= 8; k++) {
            if (tab[k] == 1 && tab[k + 1] == 1) {
                cout << endl << "T";
                break;
            }
            if (k==8) {
                cout << endl << "N";
            }

        }

        
        
    
        for (int j = 2; j <= liczba - 1; j++) {
            if (liczba % j == 0) {
                pierwsza = 0;
            }
        }

        if (pierwsza == 1) {
            cout << endl << "TAK";
        }
        else {
            cout << endl << "NIE";
        }
        
        
        
        
        /*if (liczba > liczbaa) {
            ilosc = liczba;
        }
        else {
            ilosc = liczbaa;
        }

        for (int j = ilosc; j >= 0; j--) {
            if (liczba % j = 0 && liczbaa % j = 0) {
                dzielnik[0] = j;
                o++;
            }
        }

        for (int j = o; j > 0; j--) {
            if (dzielnik[j]>dzielnik[j-1]) {
                NWD = dzielnik[j];
            }
        }
        cout << endl << NWD;
        while (liczba != liczbaa) {
            if (liczba > liczbaa) {
                liczba -= liczbaa;
            }
            else {
                liczbaa -= liczba;
            }
        }
        */
   
    
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
