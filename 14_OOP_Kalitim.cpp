#include <iostream>
using namespace std;

class Arac {
public:
    string marka;
    void bilgi() {
        cout << "Marka: " << marka << endl;
    }

};

// Araba sınıfı Arac sınıfından türetildi
class Araba : public Arac {
public:
    int kapiSayisi;
};

int main() {
    Araba a1;
    a1.marka = "BMW";
    a1.kapiSayisi = 4;

    a1.bilgi();  // Arac sınıfının fonksiyonu
    cout << "Kapı Sayısı: " << a1.kapiSayisi << endl;
}