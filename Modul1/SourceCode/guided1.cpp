#include <iostream>

using namespace std;

int main()
{
    char op;
    float num1, num2;
    cout << "Masukan oprator (+, -, *, /) ";
    cin >> op;
    cout << "Masukan dua angka ";
    cin >> num1 >> num2;
    switch (op)
    {
    case '+':
        cout << "Hasil dari " << num1 << "+" << num2 << " adalah " << num1 + num2;
        break;
    case '-':
        cout << "Hasil dari " << num1 << "-" << num2 << " adalah " << num1 - num2;
        break;
    case '*':
        cout << "Hasil dari " << num1 << "x" << num2 << " adalah " << num1 * num2;
        break;
    case '/':
        cout << "Hasil dari " << num1 << ":" << num2 << " adalah " << num1 / num2;
        break;

    default:
        cout << "Error! oprator is not correct";
    }
    return 0;
}
