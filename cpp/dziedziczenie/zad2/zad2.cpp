#include<iostream>
using namespace std;

class komputer {
public:
    string marka{ "" };
    string model{ "" };
};

class PC : public komputer {
private:
    string Robudowy{ "" };
public:
    string getPC();
    void setPC(string, string, string);
    string zwrocDane() {
        return marka + ", " + model + ", " + Robudowy;
    }
};

class laptop : public komputer {
private:
    string przekatna{ "" };
    string kolor{ "" };
public:
    string getLaptop();
    void setLaptop(string, string, string, string);
    string zwrocDane() {
        return marka + ", " + model + ", " + przekatna + "," + kolor;
    }
};

string PC::getPC() {
    return marka,model,Robudowy;
}

void PC::setPC(string pM, string pMo, string pRo) {
    marka = pM;
    model = pMo;
    Robudowy = pRo;
}

string laptop::getLaptop() {
    return marka, model, przekatna, kolor;
}

void laptop::setLaptop(string pM, string pMo,string pP, string pK) {
    marka = pM;
    model = pMo;
    przekatna = pP;
    kolor = pK;
}




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