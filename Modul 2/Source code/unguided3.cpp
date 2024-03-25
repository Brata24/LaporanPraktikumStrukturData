#include <iostream>
using namespace std;

int main()
{
    int n;
    int pilihan;
    double total = 0;
    int maks, min;
    bool pertama = true;

    cout << "Masukkan jumlah nilai: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        double nilai;
        cout << "Masukkan nilai ke-" << i << ": ";
        cin >> nilai;
        total += nilai;

        if (pertama)
        {
            maks = nilai;
            min = nilai;
            pertama = false;
        }
        else
        {
            if (nilai > maks)
            {
                maks = nilai;
            }
            if (nilai < min)
            {
                min = nilai;
            }
        }
    }

    do
    {
        cout << "\n\nMenu:\n";
        cout << "1. Mencari nilai rata-rata\n";
        cout << "2. Mencari nilai maksimum\n";
        cout << "3. Mencari nilai minimum\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Nilai rata-rata: " << total / n << endl;
            break;
        case 2:
            cout << "Nilai maksimum: " << maks << endl;
            break;
        case 3:
            cout << "Nilai minimum: " << min << endl;
            break;
        case 4:
            cout << "Anda Keluar Dari Program.\n";
            break;
        default:
            cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 4);

    return 0;
}
