#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // ofstream -> dosya olusturma varsa açma

    ofstream dosya("veri.txt");  // veri.txt dosyası açılır (yoksa oluşturulur)

    if (!dosya) {
        cout << "Dosya açılamadı!" << endl;
        return 1;
    }

    dosya << "Merhaba Dünya!" << endl;
    dosya << "Bu bir dosya yazma örneğidir." << endl;

    dosya.close();  // Dosyayı kapat

    cout << "Veriler dosyaya yazıldı." << endl;
    return 0;
}
