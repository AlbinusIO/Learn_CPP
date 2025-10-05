#include <iostream>
using namespace std;

int main() {
    int arr[5]; 
    int cari, ketemu = -1;

    cout << "Masukkan 5 angka secara bergantian:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Angka ke-" << i << ": ";
        cin >> arr[i];
    }

    cout << "\nMasukkan angka yang ingin dicari: ";
    cin >> cari;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == cari) {
            ketemu = i;
            break;
        }
    }

    if (ketemu != -1)
        cout << "Ditemukan pada index ke-" << ketemu;
    else
        cout << "Tidak ditemukan";

    return 0;
}