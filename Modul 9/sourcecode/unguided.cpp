#include <iostream>
#include <iomanip>
using namespace std;

const int simpulMax = 10;
string simpul[simpulMax];
int busur[simpulMax][simpulMax];
int Pandia_2311102076;
void tampilGraph()
{
    cout << setw(10) << " ";
    for (int kolom = 0; kolom < Pandia_2311102076;
         kolom++)
    {
        cout << setw(10) << simpul[kolom];
    }
    cout << endl;
    for (int baris = 0; baris < Pandia_2311102076;
         baris++)
    {
        cout << setw(10) << simpul[baris];
        for (int kolom = 0; kolom < Pandia_2311102076;
             kolom++)
        {
            cout << setw(10) << busur[baris][kolom];
        }
        cout << endl;
    }
}
int main()
{
    cout << "Silahkan Masukkan Jumlah Simpul : ";
    cin >> Pandia_2311102076;
    if (Pandia_2311102076 > simpulMax || Pandia_2311102076 <  2)
    {
        cout << "Jumlah simpul tidak valid!" << endl;
        return 0;
    }
    cout << "Silahkan Masukkan Nama Simpul" << endl;
    for (int i = 0; i < Pandia_2311102076; i++)
    {
        cout << "Simpul " << i + 1 << " : ";
        cin >> simpul[i];
    }
    cout << "Silahkan Masukkan Bobot Antar Simpul" << endl;
    for (int baris = 0; baris < Pandia_2311102076;
         baris++)
    {
        for (int kolom = 0; kolom < Pandia_2311102076;
             kolom++)
        {
            cout << simpul[baris] << " --> " << simpul[kolom]
                 << " = ";
            cin >> busur[baris][kolom];
        }
    }
    tampilGraph();
    return 0;
}