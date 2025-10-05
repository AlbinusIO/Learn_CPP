#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Masukkan jumlah baris: ";
    cin >> rows;

    int i = rows;
    // Perulangan utama untuk membuat baris
    do {
        int j = 1;
        // Perulangan untuk mencetak bintang di setiap baris
        do {
            cout << "* ";
            j++;
			if (j > i) break;
        } while (true);

        // Pindah ke baris baru setelah satu baris selesai
        cout << endl;
        i--;
    } while (i > 0);

    return 0;
}
