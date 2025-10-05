#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char teks[100];
    int shift;

    cout << "Masukkan teks: ";
    cin.getline(teks, 100);
    cout << "Masukkan shift: ";
    cin >> shift;

    for (int i = 0; teks[i] != '\0'; i++) {
        if (isalpha(teks[i])) {
            char batas = isupper(teks[i]) ? 'A' : 'a';
            teks[i] = (teks[i] - batas + shift) % 26 + batas;
        }
    }

    cout << "Hasil enkripsi: " << teks << endl;
}
