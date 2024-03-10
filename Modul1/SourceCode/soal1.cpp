#include <iostream>

using namespace std;

int main()
{
    int nilai0;
    float nilai1,nilai2;
    float tambahan,kurangan,kalian,bagian;

    cout << "KALKULATOR ANAK DIAMOND \n";
    
    cout <<"================================"<<endl;
    cout << "Tambahan  (1)" <<endl;
    cout << "Kurangan  (2)" <<endl;
    cout << "Perkalian (3)" <<endl;
    cout << "Pembagian (4)" <<endl;
    cout <<"================================"<<endl;
    cout << "Masukan pilihan : ";
    cin >> nilai0;
    cout << endl;
    cout <<"================================"<<endl;

    cout << "Nilai 1 : ";
    cin >>nilai1;
    cout << "Nilai 2 : ";
    cin >>nilai2;

    tambahan = nilai1 + nilai2;
    kurangan = nilai1 - nilai2;
    kalian   = nilai1 * nilai2;
    bagian   = nilai1 / nilai2;

    if (nilai0==1){
        cout << "Hasil : " << tambahan <<endl;
    }
    else if (nilai0==2){
        cout << "Hasil : " << kurangan <<endl;
    }
    else if (nilai0==3){
        cout << "Hasil : " << kalian <<endl;
    }
    else if (nilai0==4){
        cout << "Hasil : " << bagian <<endl;
    }

    cout <<"================================"<<endl;

    return 0;
}