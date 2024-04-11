#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Mahasiswa
{
    string nama;
    string nim;
    Mahasiswa *next;
} *head, *tail, *curr;

void tambahDepan()
{
    curr = new Mahasiswa;

    cout << "\nMasukkan Nama : ";
    cin >> curr->nama;
    cout << "Masukkan NIM : ";
    cin >> curr->nim;

    if (head == NULL)
    {
        head = curr;
        tail = curr;
    }
    else
    {

        curr->next = head;
        head = curr;
    }
    cout << "\nData " << curr->nama << " berhasil diinput!\n";
}

void tambahBelakang()
{
    Mahasiswa *baru = new Mahasiswa;
    baru->next = NULL;

    cout << "\nMasukkan Nama : ";
    cin >> baru->nama;
    cout << "Masukkan NIM : ";
    cin >> baru->nim;

    if (head == NULL)
    {
        head = baru;
        tail = baru;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }

    cout << "\nData " << baru->nama << " berhasil diinput!\n";
}

void tambahTengah()
{
    curr = new Mahasiswa;

    cout << "\nMasukkan Nama : ";
    cin >> curr->nama;
    cout << "Masukkan NIM : ";
    cin >> curr->nim;

    int pos;
    cout << "Masukkan posisi : ";
    cin >> pos;

    if (pos == 1)
    {
        curr->next = head;
        head = curr;

        cout << "\nData " << curr->nama << " berhasil diinput!\n";
        return;
    }

    Mahasiswa *temp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        if (temp == NULL)
        {
            cout << "\nPosisi terlalu besar!\n";
            return;
        }

        temp = temp->next;
    }

    curr->next = temp->next;
    temp->next = curr;

    cout << "\nData " << curr->nama << " berhasil diinput !\n ";
}
void ubahDepan()
{
    if (head == NULL)
    {
        cout << "\nData kosong!\n";
        return;
    }

    string namaBaru, nimBaru;
    cout << "\nMasukkan Nama Baru : ";
    cin >> namaBaru;
    cout << "Masukkan NIM Baru : ";
    cin >> nimBaru;

    string namaLama = head->nama;
    head->nama = namaBaru;
    head->nim = nimBaru;

    cout << "\nData " << namaLama << " berhasil diganti dengan  data " << namaBaru << "!\n";
}

void ubahBelakang()
{
    if (head == NULL)
    {
        cout << "\nData kosong!\n";
        return;
    }

    cout << "\nMasukkan Nama baru : ";
    string namaBaru;
    cin >> namaBaru;
    cout << "Masukkan NIM baru : ";
    string nimBaru;
    cin >> nimBaru;

    string namaLama = tail->nama;
    cout << namaLama << endl;
    tail->nama = namaBaru;
    tail->nim = nimBaru;

    cout << "\nData berhasil diubah!\n";
    cout << "Data " << namaLama << " telah diganti dengan data " << tail->nama << "!\n";
}
void ubahTengah()
{
    if (head == NULL)
    {
        cout << "\nData kosong!\n";
        return;
    }

    int pos;
    cout << "Masukkan posisi : ";
    cin >> pos;

    Mahasiswa *temp = head;

    for (int i = 1; i < pos; i++)
    {
        if (temp == NULL)
        {
            cout << "\nPosisi terlalu besar!\n";
            return;
        }

        temp = temp->next;
    }

    string old_name = temp->nama; // simpan nama lama untuk  ditampilkan
    cout << "\nMasukkan Nama Baru : ";
    cin >> temp->nama;
    cout << "Masukkan NIM Baru : ";
    cin >> temp->nim;

    cout << "\nData " << old_name << " telah diganti dengan data " << temp->nama << "!\n";
}

void hapusDepan()
{
    if (head == NULL)
    {
        cout << "\nData kosong!\n";
        return;
    }

    curr = head;
    head = head->next;

    cout << "\nData dengan nama " << curr->nama << "berhasil dihapus !\n ";
    delete curr;
}

void hapusBelakang()
{
    if (head == NULL)
    {
        cout << "\nData kosong!\n";
        return;
    }

    if (head == tail)
    {
        cout << "\nData dengan nama " << tail->nama << " berhasil  dihapus!\n";
        delete head;
        head = NULL;
        tail = NULL;
    }
    else
    {
        curr = head;

        while (curr->next != tail)
        {
            curr = curr->next;
        }

        cout << "\nData dengan nama " << tail->nama << " berhasil  dihapus!\n";
        tail = curr;
        curr = curr->next;

        delete curr;
        tail->next = NULL;
    }
}

void hapusTengah()
{
    if (head == NULL)
    {
        cout << "\nData kosong!\n";
        return;
    }

    int pos;
    cout << "Masukkan posisi : ";
    cin >> pos;
    if (pos == 1)
    {
        curr = head;
        head = head->next;

        cout << "\nData dengan nama " << curr->nama << " berhasil  dihapus!\n";
        delete curr;

        cout << "\nData berhasil dihapus!\n";
        return;
    }

    Mahasiswa *temp = head;

    for (int i = 1; i < pos - 1; i++)
    {
        if (temp == NULL)
        {
            cout << "\nPosisi terlalu besar!\n";
            return;
        }

        temp = temp->next;
    }

    curr = temp->next;
    temp->next = curr->next;

    cout << "\nData dengan nama " << curr->nama << " berhasil  dihapus!\n";
    delete curr;

    cout << "\nData berhasil dihapus!\n";
}

void tampilkan()
{
    if (head == NULL)
    {
        cout << "\nData kosong!\n";
        return;
    }

    curr = head;

    cout << "\nData Mahasiswa:\n";
    while (curr != NULL)
    {
        cout << "Nama : " << curr->nama << endl;
        cout << "NIM : " << curr->nim << endl
             << endl;
        curr = curr->next;
    }
}

int main()
{
    int pilihan;

    do
    {
        cout << "\n---PROGRAM SINGLE LINKED LIST NON-CIRCULAR--- \n";
        cout << "1. Tambah Depan\n";
        cout << "2. Tambah Belakang\n";
        cout << "3. Tambah Tengah\n";
        cout << "4. Ubah Depan\n";
        cout << "5. Ubah Belakang\n";
        cout << "6. Ubah Tengah\n";
        cout << "7. Hapus Depan\n";
        cout << "8. Hapus Belakang\n";
        cout << "9. Hapus Tengah\n";
        cout << "10. Tampilkan\n";
        cout << "11. Keluar\n";
        cout << "Pilih: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            tambahDepan();
            break;
        case 2:
            tambahBelakang();
            break;
        case 3:
            tambahTengah();
            break;
        case 4:
            ubahDepan();
            break;
        case 5:
            ubahBelakang();
            break;
        case 6:
            ubahTengah();
            break;
        case 7:
            hapusDepan();
            break;
        case 8:
            hapusBelakang();
            break;
        case 9:
            hapusTengah();
            break;
        case 10:
            tampilkan();
            break;
        case 11:
            cout << "\nProgram Selesai.\n";
            break;
        default:
            cout << "\nPilihan tidak valid!\n";
            break;
        }

        cout << "\n";

    } while (pilihan != 11);

    return 0;
}