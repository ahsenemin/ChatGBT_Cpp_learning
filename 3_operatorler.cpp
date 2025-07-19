#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    +
    -
    /
    *
    %
    
    * Eğer her iki değer int ise, / sonucu int olur. 5 / 2 = 2 (ondalık kısmı atılır)
    

    int a = 10 , b = 5;

    cout << "Toplam: " << a + b << endl;
    cout << "Fark: " << a - b << endl;
    cout << "Çarpım: " << a * b << endl;
    cout << "Bölüm: " << a / b << endl;
    cout << "Kalan: " << a % b << endl;
    */
    /*
    ==
    !=
    <
    >
    >=
    <=

    
    


    int x = 7, y = 5;

    cout << (x == y) << endl;  // 0 (false)
    cout << (x != y) << endl;  // 1 (true)
    cout << (x > y) << endl;   // 1
    cout << (x < y) << endl;   // 0
    cout << (x >= 7) << endl;  // 1
    cout << (y <= 4) << endl;  // 0
    */


    /*
    1.	Kullanıcıdan iki sayı al.
	2.	Bu iki sayı için:
		Toplam, fark, çarpım, bölüm ve kalanını hesapla.
	3.	Bu iki sayıyı karşılaştır:
		Hangisi büyük, eşit mi değil mi gibi karşılaştırma sonuçlarını yazdır.
	4.	Ekstra: Eğer her iki sayı da pozitifse ve çiftse “Her ikisi de pozitif çift sayılar” yazsın.
    
    */


    float sayi1 , sayi2;

    cout << "Lütfen 1. sayıyı giriniz: ";
    cin >> sayi1;

    cout << "Lütfen 2. sayıyı giriniz: ";
    cin >> sayi2; 

    cout << "Toplam: " << sayi1 + sayi2 << endl;
    cout << "Fark: " << sayi1 - sayi2 << endl;
    cout << "Çarpım: " << sayi1 * sayi2 << endl;
    cout << "Bölüm: " << sayi1 / sayi2 << endl;



    return 0;
}