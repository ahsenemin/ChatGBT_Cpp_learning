#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    // for döngüsü 
    // while Döngüsü
    // do while Döngüsü

    // örnekler

    /*
    // 1 den 100 e kadar bütün çift sayıları yazdır

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        
    }

    

    // kullanıcı 0 girene kadar sayıları toplayan prgram

    int sayi, toplam = 0;

    do
    {
        cout << "lütfen bir sayi giriniz (0 = çıkış): ";
        cin >> sayi;
        toplam += sayi;
    } while (sayi != 0);

    cout << "toplam: " << toplam;
    
    

    // ödev

    // Kullanıcıdan bir sayı al. 1’den o sayıya kadar olan tek sayıları yazdır. (for kullan)

    int sayi, toplam = 0;
    cout << "Lütfen toplamını merak ettiğiniz sayı giriniz: ";
    cin >> sayi;

    for (int i = 0; i < sayi; i++)
    {
        toplam += i;
    }
    cout << "toplam: " << toplam << endl;

    

    // Kullanıcıdan sürekli sayılar al. 0 girilene kadar girilen sayıların ortalamasını hesapla. (do-while kullan)

    int sayi, sayac = 0, toplam = 0;
    float ortalama = 0;

    do
    {
        cout << "lütfen sayı giriniz (0 = çıkış): ";
        cin >> sayi;
        toplam += sayi;
        sayac++;
    } while (sayi != 0);

    ortalama = toplam / (sayac - 1);

    cout << "ortalama: " << ortalama << endl;


    

    // Kullanıcıdan 5 sayı al. Her sayı 10 ile 50 arasında mı değil mi kontrol et. (while kullan)

    int sayi, sayac = 0;
    
    while (sayac < 5)
    {
        cout << "Lütfen sayi giriniz: ";
        cin >> sayi;

        if (sayi > 10 && sayi < 50 )
        {
            continue;
        }
        else
        {
            cout << sayi << " girdiğiniz sayi 10 ile 50 arasında değildir";
            break;
        }
        sayac++;
        
    }
    */

    return 0;
}