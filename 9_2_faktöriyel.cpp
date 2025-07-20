#include <iostream>

using namespace std;

int faktoriyelHesaplama(int sayi){
    int sonuc = 1;

    for (size_t i = 1; i <= sayi; i++)
    {       
        sonuc *= i;  
    }
    return sonuc;
}

int main(int argc, char const *argv[])
{
    cout << faktoriyelHesaplama(5);

    return 0;
}