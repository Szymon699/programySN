// struktury i obiekty.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

using namespace std;

//zadanie 1

struct Telefon{ 
    string marka;
    string model;
    int cena;
    float przekatnaEkranu;
};

int main()
{
    Telefon Tel { "Samsung","galaxy s8",1600,2 };

    cout << "Telefon: " << Tel.marka << " " << Tel.model << " Cena: " << Tel.cena << " zl" << " przekatna ekranu: " << Tel.przekatnaEkranu;
}


//#include <iostream>
//
//using namespace std;
//
//
//
//union Ocena { //union w jednym czasie przetrzymuje wartosc tylko  jednej zmiennej 
//    short ocena_c;
//    float ocena_r;
//};
//
//int main()
//{
//    Ocena ocena = { ocena.ocena_c = 4 };
//    cout << ocena.ocena_c <<endl;
//
//    ocena.ocena_r = 3.5;
//    cout << ocena.ocena_r << endl;
//    cout << ocena.ocena_c << endl;
//}

//#include <iostream>
//
//using namespace std;
//
//
//
//struct Uczen { //struktura
//    string imie;
//    string nazwisko;
//    int nr;
//   
//};
//
//int main()
//{
//    //struktury dynamiczne
//    Uczen* wsk = new Uczen;
//    wsk->imie = "jan";
//    wsk->nazwisko = "Kowalski";
//    wsk->nr = 15;
//    cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->nr;
//    delete wsk;
//}

//#include <iostream>
//
//using namespace std;
//
//struct Data {
//    int dd, mm, rr;
//};
//
//struct Uczen { //struktura
//    string imie;
//    string nazwisko;
//    int nr;
//    Data data_urodzenia; //struktura w strukturze
//    int oceny[3];
//};
//
//int main()
//{
//    Uczen u1{ "adam","nowak",13,{30,10,2000},{1,1,2} };
//    
//    Uczen* wsk = &u1; //wskaznik
//
//    cout << u1.imie << " " << u1.nazwisko << " " << u1.nr << endl
//        << u1.data_urodzenia.dd << "." << u1.data_urodzenia.mm << "." << u1.data_urodzenia.rr << endl
//        << u1.oceny[0] << " " << u1.oceny[1] << " " << u1.oceny[2]; //wyswietlanie struktur
//
//        cout << endl;
//
//    cout << wsk->imie << " " << wsk->nazwisko << " " << wsk->nr << endl
//        << wsk->data_urodzenia.dd << "." << wsk->data_urodzenia.mm << "." << wsk->data_urodzenia.rr << endl
//        << wsk->oceny[0] << " " << wsk->oceny[1] << " " << wsk->oceny[2]; //wyswietlanie struktur na wskaznikach
//}

//struct Pracownik { //struktura
//    string imie;
//    string nazwisko;
//    int nr;
//};

/* Pracownik pracownik1  { "Jan","Kowalski",1234 };
    cout << pracownik1.imie << " " << pracownik1.nazwisko << " " << pracownik1.nr_ewidencyjny << endl;
    Pracownik pracownik2{};
    pracownik2.imie = "adam";
    cout << pracownik2.imie << " " << pracownik2.nazwisko << " " << pracownik2.nr_ewidencyjny << endl;*/
