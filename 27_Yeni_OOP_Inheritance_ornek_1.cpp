#include <iostream>

using namespace std;

class Animal{
public:    
    string name;

    void speak(){
        cout << "Hayvanlar ses çıkartır." << endl;
    }

    void nameShow(){
        cout << name << endl;
    }
};

class Dog : public Animal{
public:
    void bark(){
        cout << "Wof Wof ... " << endl;
    }

};

class Cat : public Animal{
public:
    void meov(){
        cout << "Meov Meov ... " << endl;
    }
};

int main(int argc, char const *argv[])
{
    /*
    Aşağıdaki sınıf yapısını kalıtımla oluştur ve main içinde test et:
    class Animal: string name, void speak()
    class Dog : void bark()
    class Cat : void meow()

    Her bir sınıf için uygun çıktılar verdir. Örneğin:
    Dog d;
    d.name = "Karabaş";
    d.speak();    // "I am an animal"
    d.bark();     // "Woof!"    
    */

    Dog d;
    Cat c;
    d.name = "kömür";
    d.nameShow();
    d.bark();
    c.name= "Pamuk";
    c.nameShow();
    c.meov();

    
    return 0;
}