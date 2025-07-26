#include <iostream>

using namespace std;

class User {
public:
    static int userCount; // sınıfa ait static değişken
    string name;

    User(string n) {
        name = n;
        userCount++;
    }

    void show() {
        cout << "Name: " << name << endl;
    }

    static void showCount() {
        cout << "Total users: " << userCount << endl;
    }
};

int User::userCount = 0;

int main(int argc, char const *argv[])
{
    /* 
    
    static Üye Değişkenler 

    Normalde sınıfın her nesnesi kendi değişken kopyalarına sahiptir.
    Ama static olarak tanımlanan üyeler bütün sınıf boyunca TEK bir kopyaya sahiptir.
    Yani nesneye değil, sınıfa aittir.
    
    
    */
    User u1("Ali");
    User u2("Veli");
    User::showCount(); // static fonksiyon sınıf üzerinden çağrılır
    return 0;
    
}