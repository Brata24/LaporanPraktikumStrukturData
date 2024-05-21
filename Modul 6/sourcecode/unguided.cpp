#include <iostream>
#include <stack>
using namespace std;

string membalikKalimat(string kalimat)
{
    stack<char> charStack;
    string Hasil;
    for (int i = 0; i < kalimat.length(); i++)
    {
        charStack.push(kalimat[i]);
    }
    while (!charStack.empty())
    {
        Hasil += charStack.top();
        charStack.pop();
    }
    return Hasil;
}
int main()
{
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    string Hasil = membalikKalimat(kalimat);
    cout << "Hasil : " << Hasil << endl;
    return 0;
}