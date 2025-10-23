#include <iostream>
#include <string>
using namespace std;

int main() {
    // Array unsur dan massa atom relatif (Ar)
    string unsur[] = {"H", "O", "C", "N"};
    double massaAtom[] = {1.008, 16.00, 12.01, 14.01};
    int jumlahUnsur = 4;

    string senyawa;
    int jumlah;
    double totalMassa = 0;

    cout << "=== Kalkulator Massa Senyawa Sederhana ===\n";
    cout << "Masukkan jumlah jenis unsur dalam senyawa: ";
    cin >> jumlah;

    // Loop untuk menghitung tiap unsur
    for (int i = 0; i < jumlah; i++) {
        string namaUnsur;
        int atom;

        cout << "Masukkan simbol unsur ke-" << i + 1 << ": ";
        cin >> namaUnsur;
        cout << "Masukkan jumlah atomnya: ";
        cin >> atom;

        // Nested loop untuk mencari massa atom dari array
        for (int j = 0; j < jumlahUnsur; j++) {
            if (namaUnsur == unsur[j]) {
                double massaSementara = massaAtom[j] * atom;
                totalMassa += massaSementara;
                cout << "→ " << namaUnsur << " (" << atom << " atom) = "
                     << massaSementara << " gram/mol\n";
            }
        }
    }

    cout << "---------------------------------\n";
    cout << "Massa molar total senyawa = " << totalMassa << " gram/mol\n";

    return 0;
}
