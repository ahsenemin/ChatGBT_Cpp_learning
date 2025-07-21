#include <iostream>
using namespace std;

class Personel {
public:
    int gun;
    int gunlukMaas;
    virtual int maasHesapla() = 0;  // Pure virtual
};

class Mudur : public Personel {
private:
    double carpan = 1.32;

public:
    Mudur(int day, int wage) {
        gun = day;
        gunlukMaas = wage;
    }

    int maasHesapla() override {
        return gun * gunlukMaas * carpan;
    }
};

class Memur : public Personel {
private:
    double carpan = 1.18;

public:
    Memur(int day, int wage) {
        gun = day;
        gunlukMaas = wage;
    }

    int maasHesapla() override {
        return gun * gunlukMaas * carpan;
    }
};

int main() {
    Personel* mudur1 = new Mudur(18, 300);
    Personel* memur1 = new Memur(20, 250);

    cout << "Müdür maaş: " << mudur1->maasHesapla() << endl;
    cout << "Memur maaş: " << memur1->maasHesapla() << endl;



    return 0;

}
