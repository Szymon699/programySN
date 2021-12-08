#include<iostream>
using namespace std;

class komputer {
public:
    string marka{ "" };
    string model{ "" };
};

class PC : public komputer {
public:
    string Robudowy{ "" };
    void setPC(string pM, string pMo, string pRo) {
        marka = pM;
        model = pMo;
        Robudowy = pRo;
    }
    string zwrocDane() {
        return marka + ", " + model + ", " + Robudowy;
    }
};

class laptop : public komputer {
public:
    string przekatna{ "" };
    string kolor{ "" };
    void setLaptop(string pM, string pMo, string pP, string pK) {
        marka = pM;
        model = pM;
        przekatna = pP;
        kolor = pK;
    }
    string zwrocDane() {
        return marka + ", " + model + ", " + przekatna + "," + kolor;
    }
};

int main() {
    PC pc1;
    laptop l1;
    string marka, model, przekatna, kolor;
    cout << "Podaj marke laptopa: ";
    cin >> marka;

    cout << endl << "Podaj model laptopa: ";
    cin >> model;

    cout << endl << "Podaj przekatna laptopa: ";
    cin >> przekatna;

    cout << endl << "Podaj kolor laptopa: ";
    cin >> kolor;

    pc1.setPC("lenovo", "D434", "pelny");
    l1.setLaptop(marka, model, przekatna, kolor);
    cout << "Dane jednostki: " << pc1.zwrocDane() << endl << "Dane laptopa:" << l1.zwrocDane();
}