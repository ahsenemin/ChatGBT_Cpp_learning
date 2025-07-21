#include <iostream>
#include <string>

using namespace std;

/*

struct Ogrenci {
    string ad;
    string soyad;
    int yas;
    double ortalama;
};

using Kisi = struct {
    string ad;
    int yas;
};



struct Kitap
{
    string kitap_adi;
    string  << endlkitap_yazari;
    int sayfa_sayisi;

};
*/

struct Araba
{
    string marka;
    int model;
    float fiyat;

};



int main(int argc, char const *argv[])
{
    /*
    Ogrenci ogr1;

    ogr1.ad = "Ahsen";
    ogr1.soyad = "Yılmaz";
    ogr1.yas = 20;
    ogr1.ortalama = 3.5;

    cout << "Ad: " << ogr1.ad << ", Soyad: " << ogr1.soyad << ", Yas: " << ogr1.yas << ", Ortalama: " << ogr1.ortalama << endl;

    Ogrenci ogrenciler[3];

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". ogrencinin adını giriniz: ";
        cin >> ogrenciler[i].ad;
        cout << "Soyad: ";
        cin >> ogrenciler[i].soyad;
        cout << "Yaş: ";
        cin >> ogrenciler[i].yas;
        cout << "Ortalama: ";
        cin >> ogrenciler[i].ortalama;

    }

    for (int i = 0; i < 3; i++)
    {
        cout << ogrenciler[i].ad << endl;
        cout << ogrenciler[i].soyad << endl;
        cout << ogrenciler[i].yas << endl;
        cout << ogrenciler[i].ortalama << endl;
    }
    

    // pointer

    Ogrenci ogr = {"Ayşe", "Demir", 21, 3.7};
    Ogrenci *ptr = &ogr;

    cout << ptr->ad << endl;

    

    // Bir Kitap struct’ı oluşturun: ad, yazar, sayfaSayisi. 3 kitaplık bir dizi oluşturup kullanıcıdan bilgileri alıp ekrana yazdırın.

    Kitap kitaplar[3];
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". kitabın adı: ";
        cin >> kitaplar[i].kitap_adi;
        cout << i + 1 << ". kitabın yazarı: ";
        cin >> kitaplar[i].kitap_yazari;
        cout << i + 1 << ". kitabın sayfa sayısı: ";
        cin >> kitaplar[i].sayfa_sayisi;
        cout << " " << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 <<". kitabın adı: " << kitaplar[i].kitap_adi << endl;
        cout << i + 1 <<". kitabın yazarı: " << kitaplar[i].kitap_yazari << endl; 
        cout << i + 1 <<". kitabın sayfa sayısı: " << kitaplar[i].sayfa_sayisi << endl;
        
    }

    */

    Araba arabalar[3];

    for (int i = 0; i < 3; i++)
    {
        cout <<i + 1 <<". arabanın markası: ";
        cin >> arabalar[i].marka;
        cout <<i + 1 <<". arabanın modeli: ";
        cin >> arabalar[i].model;
        cout <<i + 1 <<". arabanın fiyati: ";
        cin >> arabalar[i].fiyat;
    }

    float enPahali = arabalar[0].fiyat;
    string enPahaliAraba;
    for (int i = 0; i < 3; i++)
    {
        if (enPahali < arabalar[i].fiyat)
        {
            enPahali = arabalar[i].fiyat;
            enPahaliAraba = arabalar[i].marka;

        }
        

    }
    cout << "En pahalı araba: " << enPahaliAraba;

    
    


    
    
    


    return 0;
}