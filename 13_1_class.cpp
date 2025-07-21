#include <iostream>

using namespace std;

// constructor
class Araba {
public:
    string marka;
    int yil;

    Araba(string m, int y) {  // constructor
        marka = m;
        yil = y;
    }

    void goster() {
        cout << "Marka: " << marka << ", Yil: " << yil << endl;
    }
};

int main() {
    Araba araba1("Honda", 2018);
    araba1.goster();
}