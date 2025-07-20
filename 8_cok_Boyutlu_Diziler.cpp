#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /*
    int matriss[3][4]; // 3 satır, 4 sütunluk bir matris

    
     * * *
     * * * 
     * * * 
     * * *
    */
    /*
    // başlangıç değeri atama

    int matris[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
    };

    // eleman yazdırma

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matris[i][j] << " ";

        }
        cout << endl;
    }

    // eleman yazma


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Tablo [" << i << "," << j << "]: ";
            cin >> matriss[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matriss[i][j] << " ";

        }
        cout << endl;
    }
    */
    int A[2][2] = {
        {1, 2}, 
        {3, 4}
    };
    int B[2][2] = {
        {5, 6}, 
        {7, 8}
    };
    int C[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
        
    }
    


    return 0;
}