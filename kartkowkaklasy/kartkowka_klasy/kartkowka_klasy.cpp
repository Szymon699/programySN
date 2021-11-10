// kartkowka_klasy.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <ctime>
#include <time.h>
#include <string>

using namespace std;

class pokoj {
private:
    int a, b, p;
    string color;
public:
    pokoj();
    pokoj(int, int);
    pokoj(const pokoj&);
    void OP();
    void Pobieranie(int&, int&, int&, string&);
    int Getpole();
};

pokoj::pokoj() {
    color = "czarny";
}
pokoj::pokoj(int pa, int pb) {
    a = pa;
    b = pb;
}

pokoj::pokoj(const pokoj& x) {
    a = x.a;
    b = x.b;
}

void pokoj::OP() {
    p = a * b;
}

int pokoj::Getpole() {
    return p;
}

void pokoj::Pobieranie(int& pa, int& pb, int& pp, string& pcolor) {
    pa = a;
    pb = b;
    pp = p;
    pcolor = color;
}

int main()
{
    srand(time(NULL));
    int suma = 0;

    pokoj p1(rand() % 10, rand() % 10);
    pokoj p2(rand() % 10, rand() % 10);
    pokoj p3(rand() % 10, rand() % 10);
    pokoj p4(rand() % 10, rand() % 10);
    pokoj p5(rand() % 10, rand() % 10);
    pokoj p6(rand() % 10, rand() % 10);
    pokoj p7(rand() % 10, rand() % 10);
    pokoj p8(rand() % 10, rand() % 10);
    pokoj p9(rand() % 10, rand() % 10);
    pokoj p10(rand() % 10, rand() % 10);

    p1.OP();
    p2.OP();
    p3.OP();
    p4.OP();
    p5.OP();
    p6.OP();
    p7.OP();
    p8.OP();
    p9.OP();
    p10.OP();

    suma = p1.Getpole() + p2.Getpole() + p3.Getpole() + p4.Getpole() + p5.Getpole() + p6.Getpole() + p7.Getpole() + p8.Getpole() + p9.Getpole() + p10.Getpole();

    cout << p1.Getpole() << endl;
    cout << p2.Getpole() << endl;
    cout << suma << endl;




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
