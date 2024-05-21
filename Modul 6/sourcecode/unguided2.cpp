#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool cekpalindrom(const string &kalimat)
{
    stack<char> STRUCTT;
    string kalimatkecil = "";
    // mengonversi semua huruf menjadi huruf kecil
    for (char abjad : kalimat)
    {
        kalimatkecil += tolower(abjad);
    }
    // Memasukkan semua karakter dari kalimat ke dalam stack 
    for (char abjad : kalimatkecil)
    {
        STRUCTT.push(abjad);
    }
    // Memeriksa setiap karakter dari kalimat
    for (char abjad : kalimatkecil)
    {
        if (STRUCTT.top() != abjad)
        {
            return false;
        }
        STRUCTT.pop();
    }
    return true;
}
int main()
{
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    if (cekpalindrom(kalimat))
    {
        cout << "Kalimat tersebut adalah: palindrom." << endl;
    }
    else
    {
        cout << "Kalimat tersebut adalah: bukan palindrom." << endl;
    }
    return 0;
}