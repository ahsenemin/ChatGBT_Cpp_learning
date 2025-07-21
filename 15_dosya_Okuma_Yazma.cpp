#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream dosya("veri.txt", ios::in | ios::out | ios::app); 
    // ios::in = okuma, ios::out = yazma, ios::app = sona ekleme

    if (!dosya) {
        cout << "Dosya açılamadı!" << endl;
        return 1;
    }

    dosya << "Yeni satır eklendi." << endl;
    dosya.close();

    return 0;
}
