#include <iostream>
using namespace std;

class Araba {
public:                 // erişim belirteci
    string marka;
    string model;
    int yil;

    void bilgileriGoster() {
        cout << "Marka: " << marka << ", Model: " << model << ", Yil: " << yil << endl;
    }
};

int main() {
    Araba araba1;  // araba1 nesnesi oluşturduk
    araba1.marka = "Toyota";
    araba1.model = "Corolla";
    araba1.yil = 2020;

    araba1.bilgileriGoster();  // Nesnenin fonksiyonunu çağırdık
    return 0;

    /* 

    public: Her yerden erişilebilir.
    private: Sadece sınıf içinden erişilebilir (varsayılan).
    protected: Sınıfın kendisi ve türetilmiş sınıflar erişebilir.

    */

}
