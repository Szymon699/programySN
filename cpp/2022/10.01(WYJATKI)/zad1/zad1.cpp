#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

struct Wyjatek {
	virtual string komunikat() = 0;
};

class Format : public Wyjatek {
	string sa,sb;
public:
	Format(string sa) : sa(sa) {};
	Format(string sb) : sb(sb) {};
	string komunikat() {
		stringstream sTemp;
		sTemp << "UWAGA BLAD! Format danej wejsciowej" <<
			sOcena <<
			"nie odpowiada liczbie calkowietej" << endl;
		return sTemp.str();
	}
};

class Zakres : public Wyjatek {
	int a,b;
public:
	Zakres(int a) : a(a) {};
	Zakres(int b) : b(b) {};
	string komunikat() {
		stringstream sTemp;
		sTemp << "UWAGA BLAD! Wartosc danej wejsciowej" <<
			ocena <<
			"nie miesci sie w zakresie <1,6>" << endl;
		return sTemp.str();
	}
};

bool wejscieFormat(string sDana) {
	for (int i = 0; i < sDana.length(); i++)
		if (isdigit(sDana[i]) == false) //isdigit sprawdza czy liczba jestr całkowita
			return false;
	return true;
}

bool liczbyczyzero(int il) {
	if (il == 0) return false;
	else return true;
}

void zamien(string va) {
	for (int i = 0; i < va.length(); i++)
		if (isdigit(va[i]) == ",") va[i] = ".";
}

void pole(int a, int b) {
	cout << a * b;
}
void obwod(int a, int b) {
	cout << a + b;
}



int main()
{
	try {
		string sa,sb;
		cout << "Podaj liczby: ";
		cin >> sa, sb;
		zamien(sa);
		zamien(sb);
		if (wejscieFormat(sa) == false)
			throw Format(sa);
		if (wejscieFormat(sb) == false)
			throw Format(sb);
		int a = stoi(sa);
		int b = stoi(sb);
		if (wejscieZakres(sa) == false)
			throw Zakres(sa);
		if (wejscieZakres(sb) == false)
			throw Zakres(sb);
		pole(a, b);
		obwod(a, b);
	}
}

