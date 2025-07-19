#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    
    if (kosul) {
        // kosul doğruysa burası çalışır
    } else if (baska_kosul) {
        // ikinci koşul doğruysa burası çalışır
    } else {
        // hiçbir koşul sağlanmazsa burası çalışır
    }
    

    switch (degisken) {
    case deger1:
        // işlem
        break;
    case deger2:
        // işlem
        break;
    default:
        // hiçbiri değilse
    }
    */

    // Ödev

    /*
    
    Kullanıcıdan bir sıcaklık değeri al.

    Kurallar:
        •	0’ın altı: “Dondurucu”
        •	0–15 arası: “Soğuk”
        •	16–25 arası: “Ilık”
        •	26–35 arası: “Sıcak”
        •	36 üstü: “Çok sıcak”    
    
    
    

    float sicaklik_degeri ;

    cout << "Lütfen sıcaklık değeri giriniz: ";
    cin >> sicaklik_degeri;


    if (sicaklik_degeri <= 0 )
    {
        cout << sicaklik_degeri << " bu derece sıcaklık dondurucu.";

    }else if (sicaklik_degeri > 0 && sicaklik_degeri <= 15)
    {
        cout << sicaklik_degeri << " bu derece sıcaklık Soğuk.";
    }
    else if ( sicaklik_degeri > 15 && sicaklik_degeri <= 25)
    {
        cout << sicaklik_degeri << " bu derece sıcaklık ılık.";
    }
    else if ( sicaklik_degeri > 26 && sicaklik_degeri <= 35 )
    {
        cout << sicaklik_degeri << " bu derece sıcaklık Sıcak.";
    }else
    {
        cout << sicaklik_degeri << " bu derece sıcaklık çok sıcak.";
    }
    
    
    */

    /*
    
    Kullanıcıdan iki sayı ve bir işlem türü (toplama, çıkarma, çarpma, bölme) seçmesini iste.
	•	Kullanıcı işlemi 1-Topla, 2-Çıkar, 3-Çarp, 4-Böl şeklinde girsin.
	•	switch ile işleme göre sonuç yaz.
    
    */
    float sayi1, sayi2, sonuc = 0;
    char islem;

    cout << "Lütfen bir sayı giriniz: ";
    cin >> sayi1;

    cout << "Lütfen bir sayı daha giriniz: ";
    cin >> sayi2;

    cout << "İşlem seçin: t = toplama, f = çıkarma, c = çarpma, b = bölme: ";
    cin >> islem;

    switch (islem) {
        case 't':
        case 'T':
            sonuc = sayi1 + sayi2;
            cout << "Sonuç: " << sonuc << endl;
            break;

        case 'f':
        case 'F':
            sonuc = sayi1 - sayi2;
            cout << "Sonuç: " << sonuc << endl;
            break;

        case 'c':
        case 'C':
            sonuc = sayi1 * sayi2;
            cout << "Sonuç: " << sonuc << endl;
            break;

        case 'b':
        case 'B':
            if (sayi2 != 0) {
                sonuc = sayi1 / sayi2;
                cout << "Sonuç: " << sonuc << endl;
            } else {
                cout << "Hata: Sıfıra bölme!" << endl;
            }
            break;

        default:
            cout << "Geçersiz işlem seçimi!" << endl;
            break;
    }

    return 0;
}
