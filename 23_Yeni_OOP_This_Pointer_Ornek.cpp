#include <iostream>

using namespace std;

class Rectangle {

private:
    int width, height;
    

public:
    Rectangle ( int w , int h){
        this->height = h;
        this->width = w;
    }

    int getArea() const{
        return height * width;
    }

    void getPerimeter() const{
        cout << "Alan " << getArea()<< endl;
    }



};



int main()
{
    /*
    Rectangle adında bir sınıf oluştur.

    Özellikler:
    int width, height
    Yapıcı fonksiyonla bu değerleri al.
    getArea() ve getPerimeter() fonksiyonları yaz ve const olarak işaretle.
    Bu fonksiyonlar sadece hesaplama yapsın, veri değiştirmesin.
    main() içinde 2 dikdörtgen oluştur ve sonuçları yazdır.
    
    */

    const Rectangle r1(100, 3);
    r1.getArea();
    r1.getPerimeter();

    return 0;
}