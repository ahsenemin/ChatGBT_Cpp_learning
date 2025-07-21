#include <iostream>
using namespace std;

class Hayvan {
public:
    virtual void sesCikar() {
        cout << "Hayvan ses çıkarıyor." << endl;
    }
};

class Kedi : public Hayvan {
public:
    void sesCikar() override {
        cout << "Miyav!" << endl;
    }
};

int main() {
    Hayvan* h = new Kedi();
    h->sesCikar();  // Miyav! (virtual sayesinde)
    delete h;
}

