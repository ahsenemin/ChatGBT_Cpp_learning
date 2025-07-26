#include <iostream>

using namespace std;

class Car { // sınıf
public:
    string brand;
    int speed;

    Car() { // constructor
        brand = "Unknown";
        speed = 0;
        cout << "Constructor çağrıldı!" << endl;
    }

    void showInfo() {
        cout << "Marka: " << brand << ", Hız: " << speed << endl;
    }
};

int main(int argc, char const *argv[])
{
    /* 
    Bir sınıftan nesne oluşturulduğunda otomatik olarak çağrılan özel bir fonksiyondur.
    Sınıf adıyla aynı isimde olur.
    Geri dönüş tipi yoktur, void bile yazılmaz.
    Aşırı yüklenebilir (Overloading yapılabilir).
    */

    Car myCar;
    myCar.speed = 120;
    myCar.showInfo();
    


    return 0;
}