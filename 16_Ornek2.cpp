#include <iostream>
#include <string>
#include <fstream>

using namespace std;


void ogrenciEkle(){

    string adSoyad;
    string id;
    float gno;
    string bolum;

    cin.ignore();
    cout << "Ögrencinin Adı: ";
    getline(cin,adSoyad);

    cout << "Ögrencinin ID: ";
    getline(cin,id);

    cout << "Ögrencinin Bölümü: ";
    getline(cin,bolum);

    cout << "Ögrencinin GNO: ";
    cin >> gno;

    

    ofstream yaz("Ornek2ogrenci.txt",ios::app);  
    if (!yaz) {
        cerr << "Yazma işlemi başarısız!" << endl;
        return;
    }

    yaz << "Ögrencinin ID: " << id << " Adı: " << adSoyad << " GNO: " << gno << " Bölüm: " << bolum << endl;
    yaz.close();
    cout << "Ogrenci Kaydedildi: ";


}

void ogrenciGoster(){

    ifstream oku("Ornek2ogrenci.txt");
    if (!oku) {
        cerr << "Okuma işlemi başarısız!" << endl;
        return;
    }

    cout << " --- Ögrenci Kayit bilgileri --- " << endl;

    string line;
    bool kayitVarmi = false;

    while (getline(oku,line))
    {
        cout << line << endl;
        kayitVarmi = true;

    }
    if (!kayitVarmi) cout << "hiç öğrenci yok\n";
    oku.close();




}

int main(int argc, char const *argv[])
{
    int secim;
    do
    {
        cout << "\n===== Ogrenci Kayit Sistemi =====" << endl;
        cout << "1. Yeni Ogrenci Ekle" << endl;
        cout << "2. Tum Ogrencileri Goster" << endl;
        cout << "3. Cikis" << endl;
        cout << "Seciminiz: ";
        cin >> secim;

        switch (secim)
        {
        case 1: ogrenciEkle(); break;
        case 2: ogrenciGoster(); break;
        case 3: cout << "Programdan çıkılıyor..." << endl; break;
        default: cout << "Gecersiz secim. Tekrar deneyiniz."<< endl; break;
        }

    } while (secim != 3);

    return 0 ;
    
}