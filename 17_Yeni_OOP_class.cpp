#include <iostream>
#include <string>

using namespace std;

class Person{
public:    
    string name;
    int age;

    void introduce(){
        cout << "My name is " << name << ". I am " << age << "years old"<< endl;
    }
};

int main()
{
    // class: verileri (attributes) ve fonksiyonları (methods) bir arada tutan bir şablondur. 
    // Bir sınıfı tanımladıktan sonra bu sınıftan nesneler (objects) oluşturabiliriz. Gerçek dünyadaki nesneleri modellemek için kullanılır.

    Person p1;
    p1.name = "Alice";
    p1.age = 21;
    p1.introduce();




    return 0;

}