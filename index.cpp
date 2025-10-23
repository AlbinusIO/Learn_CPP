#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Masukkan angka pertama: ";
    if (!(cin >> a)) return 0; // validasi sederhana

    cout << "Masukkan operator (+ - * /): ";
    cin >> op;

    cout << "Masukkan angka kedua: ";
    if (!(cin >> b)) return 0;

    cout << fixed << setprecision(6);

    switch (op) {
        case '+':
            cout << "Hasil: " << a + b << '\n';
            break;
        case '-':
            cout << "Hasil: " << a - b << '\n';
            break;
        case '*':
            cout << "Hasil: " << a * b << '\n';
            break;
        case '/':
            if (b != 0.0)
                cout << "Hasil: " << a / b << '\n';
            else
                cout << "Error: pembagian dengan nol!" << '\n';
            break;
        default:
            cout << "Operator tidak dikenal." << '\n';
    }

    return 0;
}