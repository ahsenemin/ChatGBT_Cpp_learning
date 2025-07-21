#include <iostream>
#include <string>

using namespace std;

class Kitap
{

public:
    string kitapAd;
    string KitapYazar;
    int sayfaSayisi;

    Kitap (string ad, string yazar, int sayfa){
        kitapAd = ad;
        KitapYazar = yazar;
        sayfaSayisi = sayfa;

    }

    void bilgileriGoster(){
        cout << "Kitabın Adı: " << kitapAd << endl << " Kitap Yazarı: " << KitapYazar << endl <<" Sayfa Sayısı: " << sayfaSayisi;
    }
    

};


int main(int argc, char const *argv[])
{
    /* 
    Kitap adında bir sınıf oluşturun. Özellikleri: ad, yazar, sayfa.
    Constructor yazın ve bilgileriGoster() fonksiyonuyla bilgileri ekrana yazdırın. 
    */

    Kitap kitap1("Araba Sevdası","Sait Faik Abasıyanık",200);
    Kitap kitap2("Eylül", "Recaizade Mahmut Ekrem", 300);

    kitap1.bilgileriGoster();
    cout << "\n";
    kitap2.bilgileriGoster();




    return 0;
}