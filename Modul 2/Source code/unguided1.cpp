#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Masukan data array: \n";
    for (int i = 0; i < n; i++)
    {
        cout << i+1 << " = ";
        cin >> arr[i];
    }

    cout << "Data array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl << "Nomor genap: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl
         << "Nomor ganjil: ";
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
