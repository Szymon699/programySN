// zapisywanie i odczytywanie.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <sstream>
#include <fstream>
#include<cstdlib>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <algorithm>


using namespace std;

int main()
{
	srand(time(NULL));
	int  liczba, max = 0, tab[101], lider=0;
	int los,od,doo;
	string linia;
	fstream plik;
	cout << "Podaj ilosc losowanych liczb(od 0 do 15):";
	cin >> los;
	cout << endl << "Podaj zakres (od ilu)";
	cin >> od;
	cout << endl << "Podaj zakres (do ilu)";
	cin >> doo;
	for (int i = 0; i < 101; i++) tab[i] = 0;

	plik.open("plik.txt", ios::out | ios::trunc);
	if (plik.good() == true) {
		for(int i = 0; i <= los; i++) plik << rand() % (od - doo + 1) << endl;
		plik.close();
	}

	plik.open("plik.txt", ios::in);
	if (plik.good() == true) {
		while (!plik.eof()) {
			getline(plik, linia);
			cout << linia << endl;
		}
		plik.close();
	}
	
	plik.open("plik.txt", ios::in);
	if (plik.good() == true) {
		while (!plik.eof()) {
			getline(plik, linia);
			if (linia.size() > 0) istringstream(linia) >> liczba;
			else break; 
			if (liczba > max) max = liczba;
			tab[liczba]++;
			
		}
		plik.close();
	}
	cout << max;
	max = 0;
	for (int i = 0; i < 101; i++) {
		if (tab[i] > max) {
			max = tab[i];
			lider = i;
		}
	}
	cout << ":" << lider << ":" << max;
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
