#include <iostream>
#include <string>   // string tipi için
using namespace std;

// Toplama, çıkarma, çarpma, bölme işlemlerini ayrı fonksiyonlarda yazın. Kullanıcıdan iki sayı alın ve sonuçları ekrana yazdırın.
int topla (int a , int b){
    return a + b ;
}
int cıkartma (int a , int b ){
    return a - b ;
}
int carpma (int a, int b){
    return a * b;
}
int bolme (int a, int b){
    if (b == 0)
    {
        return 00;
    }
    else
    {
        return a / b ;

    }
}
void yazdirma(string yazi){
    cout << yazi << endl;
}


int main(int argc, char const *argv[])
{
    int sayi1 , sayi2;
    char islem ;

    yazdirma("Lütfen bir sayi giriniz: ");
    cin >> sayi1;

    yazdirma("Lütfen bir sayi giriniz: ");
    cin >> sayi2;

    yazdirma ("yapmak istediğiniz işlemi seçiniz: ");
    cin >> islem;

    switch (islem)
    {
    case '+':
        cout << topla(sayi1, sayi2);
        break;
    case '-':
        cıkartma(sayi1, sayi2);
        break;
    case '*':
        carpma(sayi1, sayi2);
        break;
    case '/':
        bolme(sayi1, sayi2);
        break;
    
    default:
        yazdirma("islem hatali");
        break;
    }

    return 0;
}

