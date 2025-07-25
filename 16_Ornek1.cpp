#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    //  öğrenci bilgilerini alıp bir dosyaya yazan ve daha sonra dosyadan okuyup ekrana yazdıran bir mini uygulama hazırlayalım.
     
    string adSoyad;
    string id;
    float gno;
    string bolum;

    cout << "Ögrencinin Adı: ";
    getline(cin,adSoyad);

    cout << "Ögrencinin ID: ";
    getline(cin,id);

    cout << "Ögrencinin GNO: ";
    cin >> gno;

    cout << "Ögrencinin Bölümü: ";
    getline(cin,bolum);


    ofstream yaz("Ornek1ogrenci.txt");  
    if (!yaz) {
        cout << "Yazma işlemi başarısız!" << endl;
        return 1;
    }

    yaz << "Ögrencinin ID: " << id << " Adı: " << adSoyad << " GNO: " << gno << " Bölüm: " << bolum << endl;
    yaz.close();

    cout << "yazma işlemi başarılı." << endl ;

    ifstream oku("Ornek1ogrenci.txt");
    if (!oku) {
        cout << "Okuma işlemi başarısız!" << endl;
        return 1;
    }

    cout << " --- Ögrenci Kayit bilgileri --- " << endl;

    string line;
    while (getline(oku,line))
    {
        cout << line << endl;

    }
    oku.close();

    return 0 ;
    
}