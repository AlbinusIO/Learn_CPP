#include <iostream>
using namespace std;

int main() {
    // Contoh nilai murid
    int nilai[] = {90, 75, 88, 65, 92};
    int jumlahMurid = sizeof(nilai) / sizeof(nilai[0]);

    int countAbove85 = 0;

    // Menampilkan index murid dengan nilai di bawah 70
    cout << "Index siswa dengan nilai di bawah 70: ";
    bool adaDiBawah70 = false;

    for (int i = 0; i < jumlahMurid; i++) {
        if (nilai[i] > 85) {
            countAbove85++;
        }
        if (nilai[i] < 70) {
            cout << i << " ";
            adaDiBawah70 = true;
        }
    }

    if (!adaDiBawah70) {
        cout << "Tidak ada";
    }

    cout << endl;

    // Menampilkan total murid yang nilainya di atas 85
    if (countAbove85 == 0) {
        cout << "Total siswa dengan nilai di atas 85: Murid-murid Fahmi bukan pecinta kucing" << endl;
    } else {
        cout << "Total siswa dengan nilai di atas 85: " << countAbove85 << endl;
    }

    return 0;
}
