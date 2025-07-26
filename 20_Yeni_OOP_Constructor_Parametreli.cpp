#include <iostream>

using namespace std;

class Student { // sınıf
public:
    string name;
    int grade;

    Student(string n, int g) { // constructer
        name = n;
        grade = g;
    }
    ~Student(){ // Destructer
        cout << "Student yok edildi." << endl;
    }

    void showInfo() {
        cout << "Öğrenci: " << name << ", Notu: " << grade << endl;
    }
};

int main() {
    Student s1("Ahmet", 85);
    s1.showInfo();
    return 0;
}
