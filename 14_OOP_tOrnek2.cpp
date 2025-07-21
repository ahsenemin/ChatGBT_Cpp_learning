#include <iostream>

using namespace std;

class Sekil
{
public:
    virtual void alan() = 0;

};

class Dikdortgen : public Sekil
{
private:
    int genislik, yukseklık;
public:
    Dikdortgen(int g , int y){
        genislik = g;
        yukseklık = y;

    }

    void alan() override {
        cout << "Dikdörtgenin Alanı: " << genislik * yukseklık<< endl;
    }
};

class Daire : public Sekil{
private:
    int yarcap;
    public:
        Daire(int r){
            yarcap = r;
        }
    void alan() override {
        cout << "Dairenin Alanı: " << 3 * yarcap * yarcap << endl;
    }

};




int main()
{
    Sekil* s1 = new Dikdortgen(12,13);
    Sekil* s2 = new Daire(3);

    s1 ->alan();
    s2 ->alan();
    return 0;
}