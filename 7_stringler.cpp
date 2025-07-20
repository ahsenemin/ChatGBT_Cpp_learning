#include <iostream>
#include <string>

using namespace std;

int main()
{

    //cin >> isim; // yalnızca ilk kelimeyi alır
    // cout << isim ;


    /* 
    getline(cin,isim); // boşlukları da dahil eder
    cout << isim << endl;


    cout << isim.length() << endl;    // karakter sayısı
    cout << isim[0];          // ilk harf 
    


    string s1 = "Merhaba";
    string s2 = "Dünya";
    string sonuc = s1 + " " + s2;  // Birleştirme
    cout << sonuc << endl;  // Merhaba Dünya

    // empty() -> boşmu kontrol eder

    // substr(x, y) -> x. indexten başla, y karakter al
    // find("a") -> “a” karakterinin konumunu bulur
    // append("...") -> Stringin sonuna ekler

    cout << sonuc.empty() << endl;
    

    // Ödev
    // 1. Kullanıcıdan bir isim al. Her harfini ayrı satıra yazdır.

    string ad ;
    getline(cin,ad);
    for (int i = 0; i < ad.length(); i++)
    {
        cout << ad[i] <<endl;
    }
    
    // 	2. Girilen bir kelimenin uzunluğunu ve tersini yazdır.

    string kelime;
    cout << "Kelime: ";
    cin >> kelime;
    int uzunluk = kelime.length();

    cout << "Kelimenin uzunluğu: " << uzunluk << endl ;

    for (int i = uzunluk; i >= 0; i--)
    {
        cout << kelime[i];
    }
    

    // 3. Kullanıcının girdiği bir cümlede kaç boşluk olduğunu bulan programı yaz (for döngüsüyle).
    string cumle;
    cout << "Cümle: ";
    getline(cin, cumle);
    int sayac = 0;

    for (int i = 0; i < cumle.length(); i++)
    {
        if (cumle[i] == ' ')
        {
            sayac++;
        }

        
    }
    cout << sayac ;
    */

    // 5 farklı ismi kullanıcıdan alıp bir dizide tut. Daha sonra bu isimleri alfabetik olarak sırala (sort() STL ile işlenecek, şimdi sadece tut).
    
    

    return 0;
}