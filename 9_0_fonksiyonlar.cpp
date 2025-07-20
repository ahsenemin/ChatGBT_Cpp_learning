#include <iostream>
#include <string>

using namespace std;

// int topla(int, int);   prototip fonksiyon

/*

// var sayılan parametreli
void selamVer(string isim = "Ziyaretçi") {
    cout << "Merhaba, " << isim << "!" << endl;
}

*/

// parametre alan geriye döndüren fonksiyon
int topla(int a, int b) {
    return a + b;
}

// parametresiz geriye döndürmeyen fonksiyon
void selamVer() { // Added parentheses here
    cout << "Merhabalar" << endl;
}

// parametreli geriye döndürmeyen fonksiyon
void selam(string isim) {
    cout << "Merhaba, " << isim << "!" << endl;
}

int main()
{
    cout << topla(5, 3) << endl; // Added endl for new line

    selamVer();        // Merhabalar
    selam("Ahsen");    // Merhaba, Ahsen!

    return 0;
}