#include <iostream>

using namespace std;

struct Data {
	int dd, mm, rr;
};

class Pracownik {
public:
	int id;
	string imie, nazwisko;
	Data data_urodzenia;
	Pracownik();
	Pracownik(int, string, string);
	Pracownik(int, string, string, Data);
	void wyswietlDane();
	
};
Pracownik::Pracownik() {
	id = -1;
	imie = "aaa";
	nazwisko = "nnn";
	data_urodzenia = { 1,1,1900 };
}

Pracownik::Pracownik(int pId, string pImie, string pNazwisko) {
	id = pId;
	imie = pImie;
	nazwisko = pNazwisko;
}

Pracownik::Pracownik(int pId, string pImie, string pNazwisko, data pDataUrodzenia){
	id = pId;
	imie = pImie;
	nazwisko = pNazwisko;
	data_urodzenia = pDataUrodzenia;
}

void Pracownik::wyswietlDane() {
	cout << id << " " << imie << " " << nazwisko << endl
		<< data_urodzenia.dd << "." << data_urodzenia.mm << "." << data_urodzenia.rr << endl;
}

int main() {

}

//
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
//	int id{ -1 };
//	string imie, nazwisko;
//	Data data_urodzenia;
//	Pracownik() {
//		id = -1;
//		imie = "aaaa";
//		nazwisko = "nnnn";
//		data_urodzenia = { 31,12,1889 };
//	}
//	Pracownik(int, string, string);
//	void wyswietlDane();
//
//};
//Pracownik::Pracownik(int pId, string pImie, string pNazwisko) {
//	id = pId;
//	imie = pImie;
//	nazwisko = pNazwisko;
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
//	Pracownik pracownik2(1, "adam", "nowak");
//	pracownik2.wyswietlDane();
//
//	Pracownik pracownik3;
//	pracownik3.imie = "jan";
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
//	int id{ -1 };
//	string imie{ "aaaa" }, nazwisko{ "nnnn" };
//	Data data_urodzenia{ 31,12,1899 };
//	void wyswietlDane();
//	
//};
//
//void Pracownik::wyswietlDane() {
//	cout << id << " " << imie << " " << nazwisko << endl
//		<< data_urodzenia.dd << "." << data_urodzenia.mm << "." << data_urodzenia.rr << endl;
//}
//
//int main() {
//	Pracownik pracownik;
//	pracownik.wyswietlDane();
//}

//#include <iostream>
//
//using namespace std;
//
//class Pracownik {
//public:
//	string imie, nazwisko;
//	void wyswietlDane();
//};
//
//void Pracownik::wyswietlDane() {
//	cout << imie << " " << nazwisko << endl;
//}
//
//Pracownik& pobierzDane(Pracownik&);
//void wyswietlDane(const Pracownik&);
//
//int main() {
//	Pracownik pracownik;
//	pracownik = pobierzDane(pracownik);
//	wyswietlDane(pracownik);
//}
//
//Pracownik& pobierzDane(Pracownik& p) {
//	cin >> p.imie;
//	cin >> p.nazwisko;
//	return p;
//}
//
//void wyswietlDane(const Pracownik& p) {
//	cout << p.imie << " " << p.nazwisko << endl;
//}

//#include <iostream>
//
//using namespace std;
//
//class Pracownik {
//public:
//	string imie, nazwisko;
//	void wyswietlDane();
//};
//
//void Pracownik::wyswietlDane() {
//	cout << imie << " " << nazwisko << endl;
//}
//
//int main() {
//	Pracownik pracownik;
//	Pracownik* w_pracownik = &pracownik;
//	w_pracownik->imie = "jan";
//	w_pracownik->nazwisko = "kowalski";
//	w_pracownik->wyswietlDane();
//
//	Pracownik* w_pracownik1 = new Pracownik();
//	w_pracownik->imie = "jan";
//	w_pracownik->nazwisko = "kowalski";
//	w_pracownik->wyswietlDane();
//	delete w_pracownik1;
//}

//#include <iostream>
//
//using namespace std;
//
//class Pracownik {
//public:
//	static string szkola;
//	static string stanowisko;
//	string imie, nazwisko;
//	
//	static void ustawStanowisko(string pStanowisko) {
//		stanowisko = pStanowisko;
//	}
//	void wyswietlDane();
//};
//
//string Pracownik::szkola = "TKKOM";
//string Pracownik::stanowisko = "nauczyciel";
//
//
//void Pracownik::wyswietlDane() {
//	cout << imie << " " << nazwisko << endl << szkola << endl << stanowisko << endl << " " << endl;
//}
//
//int main() {
//
//	Pracownik p1;
//	p1.imie = "jan";
//	p1.nazwisko = "kowalski";
//	p1.wyswietlDane();
//	Pracownik::ustawStanowisko("portier");
//	Pracownik p2;
//	p2.imie = "adam";
//	p2.nazwisko = "nowak";
//	p2.wyswietlDane();
//	p1.wyswietlDane();
//}

//#include <iostream>
//
//using namespace std;
//
//class Pracownik {
//public:
//	static string szkola;
//	static string stanowisko;
//	string imie, nazwisko;
//	void wyswietlDane();
//};
//
//string Pracownik::szkola = "TKKOM";
//string Pracownik::stanowisko = "nauczyciel";
//
//void Pracownik::wyswietlDane() {
//	cout << imie << " " << nazwisko << endl << szkola << endl << stanowisko << endl;
//}
//
//int main() {
//
//	Pracownik p1;
//	p1.imie = "jan";
//	p1.nazwisko = "kowalski";
//	p1.wyswietlDane();
//	Pracownik::stanowisko = "portrier";
//	Pracownik p2;
//	p2.imie = "adam";
//	p2.nazwisko = "nowak";
//	p2.wyswietlDane();
//	p1.wyswietlDane();
//}

//#include <iostream>
//
//using namespace std;
//
//class Prostokat {
//public:
//	float bok1, bok2;
//	float pole();
//	float obwod();
//};
//
//float Prostokat::pole(){
//	return bok1 * bok2;
//}
//
//float Prostokat::obwod() {
//	return 2 * bok1 + 2 * bok2;
//}
//
//int main() {
//	Prostokat p1;
//	p1.bok1 = 5;
//	p1.bok2 = 2.5;
//	cout << p1.pole() << " " << p1.obwod();
//}

//#include <iostream>
//
//using namespace std;
//
//class Pracownik { //definowanie klasy
//public:
//	string imie, nazwisko;
//	void ustawImie(string); //protytypy
//	void ustawNazwisko(string);
//	void wyswietlDane() {
//		cout << imie << " " << nazwisko << endl;;
//	}
//};
//
//void Pracownik::ustawImie(string pImie) {
//	imie = pImie;
//}
//
//void Pracownik::ustawNazwisko(string pNazwisko) {
//	nazwisko = pNazwisko;
//}
//int main()
//{
//	Pracownik p1;
//	p1.imie = "jan";
//	p1.nazwisko = "kowalski";
//	p1.wyswietlDane();
//
//	Pracownik p2;
//	p2.ustawImie("Adam");
//	p2.ustawNazwisko("Nowak");
//	p2.wyswietlDane();
//}


