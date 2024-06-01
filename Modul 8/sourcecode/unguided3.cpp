#include <iostream>
using namespace std;

int main()
{
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int size = sizeof(data) / sizeof(data[0]); //Mendapatkan ukuran array 
    int target = 4;
    int count = 0; // Variabel untuk menghitung jumlahkemunculan angka 4 
    for (int i = 0; i < size; i++)
    {
        if (data[i] == target)
        {
            count++;
        }
    }
    std::cout << "Jumlah angka 4 dalam data: " << count
              << std::endl;
    return 0;
}