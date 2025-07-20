#include <iostream>
#include <string>

using namespace std;

/* void arttir(int *ptr) {
    (*ptr)++;
} 

int katiAl (int *ptr){
    return (*ptr) * 2;
}
*/

void swapPointer(int *ptr1 , int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2 ;
    *ptr2 = temp;
}

int main()
{
    /* 
    char *p;
    float *fp;
    double *dp;

    // cout << *fp;

    int sayi = 1453;

    cout << "Değişkenin değeri: " << sayi << endl;
    cout << "Değişken adresi: "<< &sayi << endl;

    cout << endl;

    int *ip = &sayi;
    cout << "Pointer'in gosterdigi adres: " << ip << endl;
    cout << "Pointer'in gosterdigi adres degeri: " << *ip << endl;
    cout << "Pointer adresi: " << &ip << endl;

  

    int sayilar[] = {55, 66, 77, 88, 99, 18};
    int *ptr = sayilar;

    cout << "1.eleman: " << *ptr << endl;
    ptr++;
    cout << "2.eleman: " << *ptr << endl;
    cout << "5.eleman: " << *(ptr + 3) << endl;
    ptr--;
    cout << "1.eleman: " << *ptr << endl;

    

    int x = 7;
    cout << x << endl; // 7 
    cout << &x << endl; // 0x16....b38

    int *ptr = &x;

    cout << *ptr << endl; // 7
    cout << ptr << endl; // 0x16....b38


    int dizi[3] = {10, 20, 30};
    int *p = dizi;


    cout << *p << endl; // 10
    cout <<  &dizi << endl;
    cout << *(p + 1) << endl; // 20
    cout << *(p + 2) << endl;


    x = *ptr
    &x = ptr
    

    int x = 5;
    arttir(&x);  // x'in adresini gönderiyoruz
    cout << x << endl;   // 6
    

    // Bir int değişken tanımlayın, pointer ile bu değişkenin adresini ve değerini ekrana yazdırın.

    int x = 5;
    int *ptr = &x;

    cout << "Değişekenin Değeri: " << *ptr << endl;
    cout << "Değişkenin Adresi: " << ptr << endl;
    

    // Pointer kullanarak bir dizinin elemanlarını yazdıran bir fonksiyon yazın.

    int sayilar[3] = {10,20,30};
    int *ptr = sayilar;

    cout << *ptr << endl;
    cout << *(ptr + 1) << endl;
    cout << *(ptr + 2) << endl;



    // Bir fonksiyon yazın: Parametre olarak aldığı int pointer değerini 2 katına çıkarsın.

    int sayi = 5 ;
    cout << katiAl(&sayi) << endl;

    return 0;
    

    // Pointer kullanarak 2 değişkenin değerini swap (yer değiştirme) yapan bir fonksiyon yazın.

    int sayi1 = 10, sayi2 = 20;

    cout << "Swap Öncesi: x = " << sayi1 << " y = " << sayi2 << endl;

    swapPointer(&sayi1,&sayi2);

    cout << "Swap Sonrası: x = " << sayi1 << " y = " << sayi2 << endl;
    */

    

    



}



