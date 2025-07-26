#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { // virtula unutma
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override { // override anahtar kelimesi önerilir ama zorunlu değildir
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal* a = new Dog(); // ana class pointer oluşumu
    /* Dog d; // dog nesnesi oluşumu

    a = &d; // dog nesnesin adresi pointer nesnesine atanıyor
    cout << &d << endl;
    cout << a << endl; */

    a->speak(); // Dog barks (virtual sayesinde alt sınıftaki fonksiyon çalışır)

    return 0;
}
