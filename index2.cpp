#include <iostream>
using namespace std;

float toFahrenheit(float c) { return (c * 9/5) + 32; }
float toKelvin(float c) { return c + 273.15; }
float toReamur(float c) { return c * 4/5; }

int main() {
    float c;
    int pilihan;

    cout << "Masukkan suhu dalam Celcius: ";
    cin >> c;
    cout << "Pilih konversi:\n1. Fahrenheit\n2. Kelvin\n3. Reamur\nPilihan: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: cout << "Hasil: " << toFahrenheit(c) << " °F"; break;
        case 2: cout << "Hasil: " << toKelvin(c) << " K"; break;
        case 3: cout << "Hasil: " << toReamur(c) << " °R"; break;
        default: cout << "Pilihan tidak valid!";
    }

    return 0;
}
