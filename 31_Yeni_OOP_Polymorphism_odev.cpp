#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    float baseSalary;

public:
    Employee(string n, float b) {
        name = n;
        baseSalary = b;
    }

    virtual int getSalary() {
        return baseSalary;
    }

    virtual void show() {
        cout << "Name: " << name << ", Salary: " << getSalary() << endl;
    }

    virtual ~Employee() {} // Sanal yıkıcı (virtual destructor)
};

class Manager : public Employee {
private:
    float bonus;

public:
    Manager(string n, float b, float bonusAmount) : Employee(n, b) {
        bonus = bonusAmount;
    }

    int getSalary() override {
        return baseSalary + bonus;
    }

    void show() override {
        cout << "Name: " << name << ", Manager Salary: " << getSalary() << endl;
    }
};

class Developer : public Employee {
private:
    int projectCount;

public:
    Developer(string n, float b, int pCount) : Employee(n, b) {
        projectCount = pCount;
    }

    int getSalary() override {
        return baseSalary + (1000 * projectCount);
    }

    void show() override {
        cout << "Name: " << name << ", Developer Salary: " << getSalary() << endl;
    }
};

int main() {
    Employee* e;

    Manager m("Ali", 3000, 500); // name, baseSalary, bonus
    Developer d("Zeynep", 2500, 3); // name, baseSalary, projectCount

    e = &m;
    e->show(); // Polymorphism: Manager’ın show() fonksiyonu çağrılır

    e = &d;
    e->show(); // Polymorphism: Developer’ın show() fonksiyonu çağrılır

    return 0;
}

/*
    
    Ödev 2: Ücret Hesaplama
    Aşağıdaki gibi bir yapı kur:

    Employee: name, baseSalary, getSalary() → sadece maaşı döndürür
    Manager: bonus, getSalary() → maaş + bonus
    Developer: projectCount, getSalary() → maaş + (1000 * proje sayısı)

    Her sınıftan 1 nesne oluştur ve getSalary() fonksiyonunu override ederek çıktısını al.

    */