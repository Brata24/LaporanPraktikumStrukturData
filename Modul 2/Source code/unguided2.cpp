#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    // input ukuran array tiga dimensi
    cout << "Masukkan ukuran dimensi pertama: ";
    cin >> a;
    cout << "Masukkan ukuran dimensi kedua: ";
    cin >> b;
    cout << "Masukkan ukuran dimensi ketiga: ";
    cin >> c;
    // inisialisasi array tiga dimensi dengan nilai acak 
    int arr[a][b][c];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
            }
        }
        cout << endl;
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cout << "Input Elemen [" << i << "][" << j << "]["<< k << "] =";
                cin >> arr[i][j][k];
            }
        }
    }
    cout << endl;

    // print array
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                cout << arr[i][j][k] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
