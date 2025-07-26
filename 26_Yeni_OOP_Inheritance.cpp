#include <iostream>

using namespace std;

class Person { // sınıf Parent 
public:
    string name;

    void sayHi() {
        cout << "Hi, I'm " << name << endl;
    }
};

class Student : public Person {
public:
    int studentID;
    void study() {
        cout << name << " is studying..." << endl;
    }
};

int main() {
    Student s1;
    s1.name = "Ahmet";
    s1.studentID = 123;
    s1.sayHi();     // Base class fonksiyonu
    s1.study();     // Derived class fonksiyonu

    return 0;
}

/* 

| Miras Türü  | Base'deki `public` → | Base'deki `protected` → | Base'deki `private` → |
| ----------- | -------------------- | ----------------------- | --------------------- |
| `public`    | `public`             | `protected`             | erişilemez            |
| `protected` | `protected`          | `protected`             | erişilemez            |
| `private`   | `private`            | `private`               | erişilemez            |



*/