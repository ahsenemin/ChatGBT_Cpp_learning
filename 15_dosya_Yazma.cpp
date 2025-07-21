#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream dosya("veri.txt");  // veri.txt dosyasını okuma modunda aç
    if (!dosya) {
        cout << "Dosya bulunamadı!" << endl;
        return 1;
    }

    string satir;
    while (getline(dosya, satir)) {  // Satır satır oku
        cout << satir << endl;
    }

    dosya.close();
    return 0;
}
