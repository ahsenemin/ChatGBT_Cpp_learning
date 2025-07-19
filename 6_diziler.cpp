#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    int notlar[5]; // 5 elemanlı int dizisi

    int nots[3] = {80, 90, 70}; // 3 elemanlı dizi

    cout << nots[0];  // İlk eleman (80)
    notlar[1] = 95;     // 2. elemanı güncelle

    // ÖRNEK

    int sayilar[5];

    // Kullanıcıdan 5 sayı al
    for (int i = 0; i < 5; i++) {
        cout << "Sayi giriniz [" << i + 1 << "]: ";
        cin >> sayilar[i];
    }

    // Sayıları yazdır
    cout << "Girdiginiz sayilar: ";
    for (int i = 0; i < 5; i++) {
        cout << sayilar[i] << " ";
    }

    // ÖRNEK

    int sayilar1[5];
    int toplam = 0;

    for (int i = 0; i < 5; i++) {
        cin >> sayilar1[i];
        toplam += sayilar1[i];
    }

    float ortalama = (float)toplam / 5;
    cout << "Ortalama: " << ortalama << endl;

    

    // Ödev

    //Kullanıcıdan 10 sayı al. Sadece çift olanları ekrana yazdır.

    int sayi;
    int sayilar[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "lütfen sayi giriniz: ";
        cin >> sayilar[i];
  
    }

    for (int i = 0; i < 10; i++)
    {
        if (sayilar[i] % 2 == 0)
        {
            cout << sayilar[i] << " ";
        }
    }
    

    //5 elemanlı bir dizi oluştur. En büyük ve en küçük sayıyı bul.

    int dizi[5] = {10,15,11,14,9};
    int sonuc = dizi[0];


    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] > sonuc)
        {
            sonuc = dizi[i];
        }    
    }
    cout << "En büyük sayi: " <<sonuc << endl;

    for (int i = 0; i < 5; i++)
    {
       if (dizi[i] < sonuc)
       {
            sonuc = dizi[i];
       }
       
    }
    cout << "En küçük sayi: " << sonuc;

    */


    // Kullanıcıdan 5 not al. Ortalamasını hesapla.  Ortalamaya göre:  >= 85: “Pekiyi”  70–84: “İyi”  50–69: “Orta”  < 50: “Kaldı”

    int sinavlar[5];
    float ort = 0;
    int toplam = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Lütfen sinav sonuclarinizi giriniz: ";
        cin >> sinavlar[i];
        toplam += sinavlar[i];
    }
    ort = (float)toplam / 5;

    cout << "Ortalama: " << ort;


    

    


    
    

    return 0;
}