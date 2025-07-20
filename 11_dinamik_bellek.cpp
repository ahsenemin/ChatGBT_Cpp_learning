#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{

    /* 
    int *ptr = new int;     // heap’te bir int alanı aç
    *ptr = 10;              // değeri ata
    cout << *ptr << endl;   // 10

    
    int *dizi = new int[5];  // 5 elemanlı int dizisi oluştur

    for (int i = 0; i < 5; i++) {
        dizi[i] = i * 10;
        cout << dizi[i] << " ";
    } 
    

    int n;
    cout << "Dizi boyutu: ";
    cin >> n;

    int *arr = new int[n];  // Dinamik dizi oluştur

    for (int i = 0; i < n; i++) {
        cout << "Eleman " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Dizi elemanları: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;  // Belleği serbest bırak
    

    int *p = new int(5);
    int *q = new int(10);
    int(swap(*p, *q)); // STL swap fonksiyonu ile
    

    
    int satir = 3, sutun = 4;
    int **matris = new int*[satir];

    for (int i = 0; i < satir; i++) {
        matris[i] = new int[sutun];
    }

    // Değer atama
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            matris[i][j] = i + j;
        }
    }

    for (int i = 0; i < satir; i++) {
        delete[] matris[i];
    }
    delete[] matris;
    

    // Kullanıcıdan n elemanlı bir dizi boyutu al. Dinamik bellek ile bu diziyi oluştur ve en büyük elemanı bul.

    int uzunluk;
    cout << " Dizinin uzunluğunu giriniz: ";
    cin >> uzunluk;

    int *num = new int[uzunluk];

    for (int i = 0; i < uzunluk; i++)
    {
        cout << "Dizinin "<< i << ". elemanını giriniz: ";
        cin >> num[i];
    }
    int enbuyuk = num[0];
    for (int i = 0; i < uzunluk; i++)
    {
        if (enbuyuk < num[i])
        {
            enbuyuk = num[i];
        }
        
    }

    cout << "En büyük: " << enbuyuk << endl;
    delete[] num;
    */

    // 2x3 boyutunda dinamik bir matris oluştur ve kullanıcıdan elemanları al, ardından ekrana yazdır.
    return 0;
}