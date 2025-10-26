#include <iostream>
#include <string>
using namespace std;

string encrypt(string text, int key) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = text[i] + key;
    }
    return text;
}

string decrypt(string text, int key) {
    for (int i = 0; i < text.length(); i++) {
        text[i] = text[i] - key;
    }
    return text;
}

int main() {
    string teks;
    int key;

    cout << "Masukkan teks: ";
    cin >> teks;
    cout << "Masukkan kunci: ";
    cin >> key;

    string encrypted = encrypt(teks, key);
    string decrypted = decrypt(encrypted, key);

    cout << "Hasil enkripsi: " << encrypted << endl;
    cout << "Hasil dekripsi: " << decrypted << endl;

    return 0;
}
