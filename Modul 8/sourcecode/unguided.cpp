#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool binarySearch(string sentence, char target)
{
    int left = 0;
    int right = sentence.length() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (sentence[mid] == target)
        {
            return true;
        }
        if (sentence[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return false;
}
int main()
{
    string sentence;
    char target;
    cout << "Masukkan Kalimat: ";
    getline(cin, sentence);
    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> target;
// Mengubah kalimat menjadi lowercase agar pencariancase intensitive
transform(sentence.begin(), sentence.end(),sentence.begin(), ::tolower);
///Mencari huruf dalam kalimat menggunakan Binary
bool found = binarySearch(sentence,tolower(target));
if (found){
cout << "Huruf " << target << " ditemukan dalam kalimat." << endl;
}else {
cout << "Huruf " << target << " tidak ditemukan dalam kalimat." <<endl;
}
return 0;
}