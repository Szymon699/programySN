#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>

using namespace std;

bool wejscieFormat(string sDana) {
    for (int i = 0; i < sDana.length(); i++)
        if (isdigit(sDana[i]) == false) //isdigit sprawdza czy liczba jestr całkowita
            return false;
    return true;
}

bool wejscieZakres(int iDana) {
    if ((iDana >= 1) && (iDana <= 6)) return true;
    else return false;
}


bool liczbyczyzero(int il) {
    if (il == 0) return false;
    else return true;
}


int main()
{
    try {
        string sx, sy;
        cout << "Podaj liczbe x:" << endl;
        cin >> sx;
        cout << "Podaj liczbe y:" << endl;
        cin >> sy;

        if (wejscieFormat(sx) == false)
            throw sx;
        if (wejscieFormat(sy) == false)
            throw sy;
        int x = stoi(sx);
        int y = stoi(sy);
        if (liczbyczyzero(y) == false)
            throw y;
        cout << endl << "Wynik:" << double(x) / double(y);
    }
    catch (int y) {
        cout << endl << "UWAGA BLAD!" << endl
            << "druga liczba wynosi zero";
    }
    try {
        string sOcena = "5";
        if (wejscieFormat(sOcena) == false)
            throw sOcena;
        int ocena = stoi(sOcena);
        if (wejscieZakres(ocena) == false)
            throw ocena;
        if (ocena == 1) cout << endl << "uczen nie otrzymuje promocji";
        else cout << endl << "uczen otrzymuje promocje";
    }
    catch(string){
        cout << endl << "UWAGA BLAD!" << endl 
            << "Format danej wejsciowej nie odpowiada liczbie calkowitej" << endl;
    }
    catch(int ocena){
       cout << endl << "UWAGA BLAD!" << endl
           << "Wartosc danej wejsciowej nie miesci sie w zakresie <1,6>" << endl;
    
    }
}


