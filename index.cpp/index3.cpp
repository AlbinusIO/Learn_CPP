#include <iostream>
using namespace std;

const float PI = 3.14;

int main() {
    int pilihan;
    float sisi, panjang, lebar, jariJari;

    cout << "=== Program Menghitung Luas & Keliling ===" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Lingkaran" << endl;
    cout << "Pilih bentuk (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "\nMasukkan sisi persegi: ";
            cin >> sisi;
            cout << "Luas Persegi      = " << sisi * sisi << endl;
            cout << "Keliling Persegi  = " << 4 * sisi << endl;
            break;

        case 2:
            cout << "\nMasukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            cout << "Luas Persegi Panjang      = " << panjang * lebar << endl;
            cout << "Keliling Persegi Panjang  = " << 2 * (panjang + lebar) << endl;
            break;

        case 3:
            cout << "\nMasukkan jari-jari lingkaran: ";
            cin >> jariJari;
            cout << "Luas Lingkaran      = " << PI * jariJari * jariJari << endl;
            cout << "Keliling Lingkaran  = " << 2 * PI * jariJari << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
