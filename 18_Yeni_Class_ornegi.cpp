#include <iostream>

using namespace std;

class Movie{
public:
    string title;
    string director;
    int duration;

    void showInfo(){
        cout << "Movie name is " << title << ". Director name is " << duration << ". Duration: " << duration << " minute" <<endl;
    }

};

int main(int argc, char const *argv[])
{
    /*


    Movie adında bir sınıf oluştur.

    Özellikler:

    string title
    string director
    int duration (dakika)

    Fonksiyonlar:

    void showInfo(): Film bilgilerini yazdırır.
    main() içinde 2 farklı film oluştur, bilgilerini gir ve göster.


    */

    Movie m1;
    m1.title = "Esaretin Bedeli";
    m1.director = "Yavuz Ünal";
    m1.duration = 180;    
    m1.showInfo();

    Movie m2;
    m2.title = "Esaretin Bedeli";
    m2.director = "Yavuz Ünal";
    m2.duration = 180;    
    m2.showInfo();



    return 0;
}