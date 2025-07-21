#include <iostream>

using namespace std;

class Ogrenci {
public:
    string ad;
    Ogrenci& setAd(string ad) {
        this->ad = ad;
        return *this;
    }
    void bilgi(){
        cout << ad << endl;
    }
};

int main(int argc, char const *argv[])
{
    Ogrenci* ogrenci = new Ogrenci();
    ogrenci->setAd("Ahsen");
    ogrenci->bilgi();
    return 0;
}