#include <iostream>

using namespace std;

// Struct
struct PUBGM_Player
{
    string nama;
    string tim;
    int umur;
};

// Class
class MLBB_Player
{
public:
    string nama;
    string tim;
    int umur;

    void printPlayer()
    {
        cout << "Nama : " << nama << endl;
        cout << "Tim  : " << tim << endl;
        cout << "Umur : " << umur << endl;
    }
};

int main()
{
    // Struct
    cout << "PlayerUnknown's Battlegrounds\n";
    cout << "==============================\n";
    PUBGM_Player player1 = {"Mas Faiz", "Ngawi Esport", 17};
    cout << "Nama: " << player1.nama << endl;
    cout << "Tim: " << player1.tim << endl;
    cout << "Umur: " << player1.umur << endl;

    // Class
    cout << "\tMobile Legends\n";
    cout << "==============================\n";
    MLBB_Player player2;
    player2.nama = "Mr.Ironi";
    player2.tim = "Ngawi Glory";
    player2.umur = 15;
    player2.printPlayer();

    return 0;
}
