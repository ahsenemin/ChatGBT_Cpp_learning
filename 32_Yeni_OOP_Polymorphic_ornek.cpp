#include <iostream>

using namespace std;

class Shape{
public:
    virtual float getArea(){
        return 0;
    }
    virtual void draw(){}


};
class Rectangle: public Shape{
private:
    float height, width;
public:
    Rectangle(float h, float w){
        height = h;
        width = w;

    }

    float getArea() override{
        return height * width;
    }
    void draw() override{
        cout << "Drawing Triangle";
    }


};

class Circle : public Shape {
private: 
    float cap;
public:

    Circle(float c){
        cap = c;
    }

    float getArea() override{
        return 3.14 * cap * cap;
    }
    void draw() override{
        cout << "Drawing Circle";
    }

};

class Triangle : public Shape {
private:
    float taban;
    float yukseklik;
public:

    Triangle( float t, float y){
        taban = t;
        yukseklik = y;
    }
    float getArea() override{
        return (taban * yukseklik) /2;
    }
    void draw() override{
        cout << "Drawing Rectangle";
    }

};



int main(int argc, char const *argv[])
{
    /*
    
    ÖDEV 3: POLYMORPHIC ŞEKİL HESAPLAMA

    Görev:
    Aşağıdaki gereksinimlere göre bir sınıf yapısı kur:
    Shape sınıfı: taban sınıf, getArea() ve draw() fonksiyonları virtual olmalı.
    Rectangle, Circle, Triangle sınıfları bu sınıftan türesin.
    Her biri getArea() fonksiyonunu override etsin.
    Her biri kendine uygun draw() fonksiyonuna sahip olsun.
    Main fonksiyonda bir Shape* array’i oluştur ve her türden bir nesne bu diziye eklensin.
    Tüm şekillerin alanı ve çizimi draw() ile gösterilsin.

    Örnek Çıktı:
    Drawing Circle, Area: 78.5
    Drawing Rectangle, Area: 200
    Drawing Triangle, Area: 120

    */

    Shape* s1 = new Rectangle(3,4);
    s1->draw();
    cout << ", Area: " << s1->getArea() << endl;
    
    Shape* s2 = new Circle(3);
    s2->draw();
    cout << ", Area: " << s2->getArea() << endl;

    Shape* s3 = new Triangle(3,4);
    s3->draw();
    cout << ", Area: " << s3->getArea() << endl;

    delete s1;
    delete s2;
    delete s3;
    

    return 0;
}