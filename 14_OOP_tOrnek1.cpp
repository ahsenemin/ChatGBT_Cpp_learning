
#include <iostream>

using namespace std;

class Hayvan
{

public:
    virtual void sesCikar(){
        cout << "hayvalnlar ses çıkarır.";
    }
};

class Kedi : public Hayvan
{

public:
    void sesCikar() override{
        cout << "Miyav!";
    }

};

class Kopek : public Hayvan
{

public:
    void sesCikar() override{
        cout << "Hav Hav!";
    }

};


int main(int argc, char const *argv[])
{
    /* Hayvan (ses çıkarır) sınıfını base class olarak yazın. Kedi ve Köpek sınıfları türetin, sesCikar() fonksiyonunu override edin. */
    Hayvan* h1 = new Kedi();
    h1 ->sesCikar();
    cout << endl;
    Hayvan* h2 = new Kopek();
    h2 ->sesCikar();
    cout << endl;
    return 0;
}