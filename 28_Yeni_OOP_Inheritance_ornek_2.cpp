#include <iostream>

using namespace std;

class Employee {
    string name;
    float baseSalary;



};

class Manager : public Employee {

};

int main(int argc, char const *argv[])
{
    /*
    
    Ödev 2: Ücret Hesaplama

    Aşağıdaki gibi bir yapı kur:
    Employee: name, baseSalary, getSalary() → sadece maaşı döndürür
    Manager: bonus, getSalary() → maaş + bonus
    Developer: projectCount, getSalary() → maaş + (1000 * proje sayısı)
    Her sınıftan 1 nesne oluştur ve getSalary() fonksiyonunu override ederek çıktısını al.
    
    
    */
    return 0;
}