#include <iostream>

using namespace std;

class Player {
private:
    string name;
    int score;

public:
    void setData(string name, int score) {
        this->name = name;   // ✔️ doğru eşleştirme
        this->score = score;
    }

    void showData(){
        cout << "Name: " << name << ", Score: " << score << endl;
    }
};

int main()
{
    /*
    this pointer, sınıfın içindeki her nesnenin kendisini temsil eden özel bir pointer’dır. 
    Bir üye fonksiyon içinde, çağrıyı yapan nesneye this ile erişebilirsin.

    const olarak işaretlenen bir method, sınıfın veri üyelerini değiştiremez. 
    Bu sayede fonksiyonun nesneyi “okuyacağı” garanti edilir.
    */

    Player p1;
    p1.setData("Gs", 2);
    p1.showData();
    return 0;
}