#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan tinggi piramida: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        for (int spasi = 1; spasi <= n-i; spasi++) {
            cout << " ";
        }
        for (int bintang = 1; bintang <= 2*i-1; bintang++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
