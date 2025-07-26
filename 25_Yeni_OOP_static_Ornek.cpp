#include <iostream>

using namespace std;

class Employee {
private:
    string name;
    int id;
    static int count;

public:
    Employee(string n) {
        name = n;
        id = ++count;  // count 0'dan başlar, ilk çalışan 1 alır
    }

    void show() {
        cout << "Name: " << name << ", ID: " << id << endl;
    }

    static void showCount() {
        cout << "Toplam çalışan sayısı: " << count << endl;
    }
};

int Employee::count = 0;

int main(int argc, char const *argv[])
{

    /* 
    
    Aşağıdaki özelliklerde bir Employee sınıfı yaz:
    string name
    int id – her nesneye otomatik artan bir ID verilecek (örn. 1, 2, 3...)
    static int count – kaç tane çalışan oluşturulduğunu saysın

    Yapıcı fonksiyon:
    name parametresi alsın
    id otomatik verilsin (count üzerinden)
    show() fonksiyonu: ID ve ismi yazdırsın
    showCount() fonksiyonu: Toplam çalışan sayısını yazsın (static)

    */

    Employee e1("Ahsen");
    Employee e2("Mehmmet");
    
    e1.show();
    e2.show();
    
    Employee::showCount();


    return 0;
    
}