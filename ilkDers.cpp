#include <iostream> // giriş ve çıkış işlemleri için gerekli kütüphane

using namespace std; // std ad alanını kullanmak için gerekli

int main() { // ana fonksiyon, programın başlangıç noktası
    int yas = 20;
    float boy = 1.75;
    char cinsiyet = 'E';
    bool aktifMi = true;
    const double PI = 3.1415;

    cout << "Yas: " << yas << endl;
    cout << "Boy: " << boy << endl;
    cout << "Cinsiyet: " << cinsiyet << endl;
    cout << "Aktif mi? " << aktifMi << endl;
    cout << "PI sayisi: " << PI << endl;

    yas++; // artır
    cout << "Yeni yas: " << yas << endl;
    

    return 0;
}