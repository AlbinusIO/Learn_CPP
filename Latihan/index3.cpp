#include <iostream>
using namespace std;

float tambah(float a, float b) { return a + b; }
float kurang(float a, float b) { return a - b; }
float kali(float a, float b) { return a * b; }
float bagi(float a, float b) { return a / b; }

int main() {
    float x, y;
    char op;

    cout << "Masukkan dua angka: ";
    cin >> x >> y;
    cout << "Pilih operasi (+ - * /): ";
    cin >> op;

    switch (op) {
        case '+': cout << "Hasil: " << tambah(x, y); break;
        case '-': cout << "Hasil: " << kurang(x, y); break;
        case '*': cout << "Hasil: " << kali(x, y); break;
        case '/': cout << "Hasil: " << bagi(x, y); break;
        default: cout << "Operasi tidak valid!"; break;
    }
    return 0;
}
