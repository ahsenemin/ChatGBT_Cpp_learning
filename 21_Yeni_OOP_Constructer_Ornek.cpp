#include <iostream>
#include <string>

using namespace std;

class Student{
public:
    string name;
    int number;
    float averageGrade;

    Student (string n, int num ,float a){
        name = n;
        number = num;
        averageGrade = a;
    }

    ~Student (){
        cout << "Student " << name << " silindi." << endl;

    }

    void yazdir (){
        cout << "Adı: " << name << endl;
        cout << "Numarası: " << number << endl;
        cout << "Ortalama Not: " << averageGrade << endl;
    }
};



int main(int argc, char const *argv[])
{

    /*
    Student adında bir sınıf oluştur.

    Özellikler:
    string name
    int number
    float averageGrade

    Yapıcı fonksiyon (constructor):
    3 bilgiyi parametre olarak alsın.
    Yıkıcı fonksiyon (destructor):
    Öğrenci silinirken "Student [name] destroyed" yazsın.

    main() içinde en az 2 öğrenci oluştur ve bilgilerini yazdır.
    */

    Student s1("Ahsen", 123 , 3.12);
    s1.yazdir();
    

    return 0;
}