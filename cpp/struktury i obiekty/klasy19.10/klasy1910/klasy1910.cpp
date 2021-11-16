// #include <iostream>

// using namespace std;

// class Prostokat { 
// private:
// 	double bok1;
// 	double bok2;
// 	string kolor;
// 	int obramowanie;
// public:
// 	~Prostokat() {
// 		cout << "-------DESTRUKTOR------" << endl;
// 	};
// 	Prostokat();
// 	Prostokat(double, double);
// 	void wyswietlDane();
// };

// Prostokat::Prostokat() {
// 	bok1 = 2;
// 	bok2 = 1;
// }

// Prostokat::Prostokat(double pBok1, double pBok2) :Prostokat::Prostokat() {
// 	bok1 = pBok1;
// 	bok2 = pBok2;
// }

// void Prostokat::wyswietlDane() {
// 	cout << bok1 << " " << bok2 << endl;
// }

// int main() {
// 	{
// 		Prostokat p1;
// 		p1.wyswietlDane();

// 	}

// 	Prostokat* w_p2 = new Prostokat(3, 5);
// 	w_p2->wyswietlDane();

// 	Prostokat p3(11, 15);
// 	delete w_p2;
// 	p3.wyswietlDane();
// }

#include <iostream>

using namespace std;

class Prostokat {
private:
	double bok1;
	double bok2;
	string kolor;
	int obramowanie;
public:
	Prostokat();
	Prostokat(double, double);
	void ustaw(string, int);
	void wyswietlDane();

};

Prostokat::Prostokat() {
	bok1 = 1;
	bok2 = 1;
	ustaw("bialy", 5);
}

Prostokat::Prostokat(double pBok1, double pBok2) {
	bok1 = pBok1;
	bok2 = pBok2;
	ustaw("bialy", 5);
}

void Prostokat::ustaw(string pKolor, int pObramowanie) {
	kolor = pKolor;
	obramowanie = pObramowanie;
}

void Prostokat::wyswietlDane() {
	cout << bok1 << " " << bok2 << " " << kolor << " " << obramowanie << endl;
}

int main() {
	Prostokat p1;
	p1.wyswietlDane();

	Prostokat p2(5, 7);
	p2.wyswietlDane();
	p2.ustaw("czarny", 2);
	p2.wyswietlDane();
}
//#include <iostream>
//
//using namespace std;
//
//class Prostokat {
//private:
//	double bok1;
//	double bok2;
//public:
//	Prostokat();
//	Prostokat(double, double);
//	Prostokat(const Prostokat&);
//	void pobierzBoki(double&, double&);
//	void ustawBoki(double, double);
//};
//
//Prostokat::Prostokat() {
//	bok1 = 1;
//	bok2 = 1;
//}
//
//Prostokat::Prostokat(double pBok1, double pBok2) {
//	bok1 = pBok1;
//	bok2 = pBok2;
//}
//
//Prostokat::Prostokat(const Prostokat& wzorzec) { //definicja
//	bok1 = wzorzec.bok1;
//	bok2 = wzorzec.bok2;
//}
//
//void Prostokat::pobierzBoki(double& pBok1, double& pBok2) {
//	pBok1 = bok1;
//	pBok2 = bok2;
//}
//
//void Prostokat::ustawBoki(double pBok1, double pBok2) {
//	bok1 = pBok1;
//	bok2 = pBok2;
//}
//
//Prostokat kopujProstokat(Prostokat prostokat) {
//	return prostokat;
//}
//
//
//int main() {
//	double b1, b2;
//	Prostokat p1(5, 7);
//	p1.pobierzBoki(b1, b2);
//	cout << b1 << " " << b2 << endl;
//
//	Prostokat p2 = p1;
//	p1.pobierzBoki(b1, b2);
//	cout << b1 << " " << b2 << endl;
//
//	Prostokat p3(p1);
//	p1.pobierzBoki(b1, b2);
//	cout << b1 << " " << b2 << endl;
//
//	Prostokat p4;
//	p4 = kopujProstokat(p1);
//	p4.pobierzBoki(b1, b2);
//	cout << b1 << " " << b2 << endl;
//	p4.ustawBoki(11, 13);
//	p4.pobierzBoki(b1, b2);
//	cout << b1 << " " << b2 << endl;
//
//}

//#include <iostream>
//
//using namespace std;
//
//struct Data {
//	int dd, mm, rr;
//};
//
//class Pracownik {
//public:
//	int id;
//	string imie, nazwisko;
//	Data data_urodzenia;
//	Pracownik();
//	Pracownik(int, string, string);
//	Pracownik(int, string, string, Data);
//	void wyswietlDane();
//
//};
//Pracownik::Pracownik() {
//	id = -1;
//	imie = "aaa";
//	nazwisko = "nnn";
//	data_urodzenia = { 1,1,1900 };
//}
//
//Pracownik::Pracownik(int pId, string pImie, string pNazwisko) {
//	id = pId;
//	imie = pImie;
//	nazwisko = pNazwisko;
//}
//
//Pracownik::Pracownik(int pId, string pImie, string pNazwisko, Data pDataUrodzenia) {
//	id = pId;
//	imie = pImie;
//	nazwisko = pNazwisko;
//	data_urodzenia = pDataUrodzenia;
//}
//
//void Pracownik::wyswietlDane() {
//	cout << id << " " << imie << " " << nazwisko << endl
//		<< data_urodzenia.dd << "." << data_urodzenia.mm << "." << data_urodzenia.rr << endl;
//}
//
//int main() {
//	Pracownik pracownik;
//	pracownik.wyswietlDane();
//
//	Pracownik pracownik2(1, "jan", "kowalski");
//	pracownik2.wyswietlDane();
//
//	Pracownik pracownik3(2, "adam", "nowak", { 10,10,2000 });
//	pracownik3.wyswietlDane();
//}

//#include <iostream>
//
//using namespace std;
//
//struct Data {
//	int dd, mm, rr;
//};
//
//class Pracownik {
//public:
//	int id;
//	string imie, nazwisko;
//	Data data_urodzenia;
//	void wyswietlDane();
//
//};
//
//
//void Pracownik::wyswietlDane() {
//	cout << id << " " << imie << " " << nazwisko << endl
//		<< data_urodzenia.dd << "." << data_urodzenia.mm << "." << data_urodzenia.rr << endl;
//}
//
//int main() {
//	Pracownik pracownik{ 2,"adam","nowak",{10,12,2000} };
//	pracownik.wyswietlDane();
//}
