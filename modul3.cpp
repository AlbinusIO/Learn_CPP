#include <iostream>
#include <string>
using namespace std;

struct Tanggal {
    int hari, bulan, tahun;
};

struct Mahasiswa {
    string nama;
    int nim;
    Tanggal lahir;
};

int main() {
    Mahasiswa mhs;
    cout << "Nama: "; getline(cin, mhs.nama);
    cout << "NIM : "; cin >> mhs.nim;
    cout << "Tanggal Lahir (dd mm yyyy): ";
    cin >> mhs.lahir.hari >> mhs.lahir.bulan >> mhs.lahir.tahun;

    cout << "\nData Mahasiswa\n";
    cout << "Nama : " << mhs.nama << endl;
    cout << "NIM  : " << mhs.nim << endl;
    cout << "Lahir: " << mhs.lahir.hari << "/" 
         << mhs.lahir.bulan << "/" << mhs.lahir.tahun << endl;
}
