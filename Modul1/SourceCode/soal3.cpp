#include <iostream>
#include <map>

using namespace std;

int main()
{
    // membuat map dengan tipe data <string, int>
    map<string, int> m;

    // memasukkan data ke dalam map
    m["apel"] = 10;
    m["jeruk"] = 20;
    m["pisang"] = 30;

    // mengakses data dalam map
    cout << "Jumlah apel: " << m["apel"] << endl;
    cout << "Jumlah jeruk: " << m["jeruk"] << endl;

    // mengubah data dalam map
    m["jeruk"] = 25;

    // menampilkan data dalam map setelah diubah
    cout << "Jumlah apel: " << m["apel"] << endl;
    cout << "Jumlah jeruk: " << m["jeruk"] << endl;

    // menghapus data dalam map
    m.erase("pisang");

    // menampilkan data dalam map setelah dihapus
    cout << "Jumlah apel: " << m["apel"] << endl;
    cout << "Jumlah jeruk: " << m["jeruk"] << endl;

    return 0;
}
