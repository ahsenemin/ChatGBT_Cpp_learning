#include <iostream>

using namespace std;

class Dikdortgen
{

public:
    float genislik;
    float yukseklik;


    Dikdortgen (float g, float y){
        genislik = g;
        yukseklik = y;

    }

    void alanHesapla (){
        int alan = genislik * yukseklik;
        cout << "Dikdörtgenin alanı: " << alan;

    }

    void cevreHesapla (){
        int cevre = (genislik + yukseklik) * 2;
        cout << "Dikdörtgenin çevresş: " << cevre;
    }
};



int main()
{

    /* 
    Dikdortgen sınıfı oluşturun. Özellikler: genislik, yukseklik.

    Alan ve çevre hesaplayan fonksiyonlar ekleyin.
    */

    Dikdortgen ddg1 (12,12);
    ddg1.alanHesapla();
    cout << endl;
    ddg1.cevreHesapla();




    return 0;
}
