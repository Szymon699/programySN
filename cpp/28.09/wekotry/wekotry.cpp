// wekotry.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

// insert - dodaje cos do wektora
// begin() - poczatek wektora
// push_back - koniec wektora
// size() - sprawdza wielkość wektora

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    vector <int> wektor = { 0,20,30,40,50 }; //tworzenie wektora

    wektor[0] = 10; //nadpisanie do indeksu 0

    wektor.insert(wektor.begin(), 0); //dodaje na poczatek wektora wartość "0"
    wektor.push_back(60); //dodaje na koniec wektora wartość "60"

    for (int i = 0; i < wektor.size(); i++) cout << wektor[i] << " "; //wyswietlenie wektoru
    cout << endl << "------foreach" << endl;
    for (int element : wektor) cout << element << " "; // petla foreach nie patrzy na indeksy tablicy

    //zadanie 1
    cout << endl << "------zadanie 1" << endl;
    int pivot = rand() % 100 + 1;
    vector <int> wektorZ1 = {};
    int n=-1;
    cout << pivot;
    while (n != pivot) {
        cout << "liczby, ktore juz podales: ";
        for (int element : wektorZ1) cout << element << " ";
        cout << endl <<"Podaj liczbe(od 1 do 100): " << endl;
        cin >> n;
        if (n > pivot) wektorZ1.push_back(n);
        if (n < pivot) wektorZ1.insert(wektorZ1.begin(), n);
    }
    
    cout << "Brawo trafiles, szukana liczba to:" << n;
    cout << endl << "Wszystkie liczby, ktore podales: ";
    for (int element : wektorZ1) cout << element << " ";
   
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
