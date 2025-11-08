#include <iostream>
using namespace std;

int main() {
    int mahasiswa = 10;
    int totalHadir = 0;
    int status;
    
    cout << "Masukkan status kehadiran (1=hadir, 0=tidak hadir):\n";
    
    for(int i = 1; i <= mahasiswa; i++) {
        cout << "Mahasiswa " << i << ": ";
        cin >> status;
        if (status == 1) {
            totalHadir++;
        }
    }
    
    // Hitung persentase kehadiran
    float persentase = (float)totalHadir / mahasiswa * 100;
    
    cout << "\nHasil:\n";
    cout << "Total hadir: " << totalHadir;
    cout << "Persentase kehadiran: " << persentase << "%" << endl;
    
    // Evaluasi kedisiplinan
    if (persentase >= 90) {
        cout << "Status: Sangat disiplin" << endl;
    } else if (persentase >= 75 && persentase <= 89) {
        cout << "Status: Cukup disiplin" << endl;
    } else if (persentase >= 50 && persentase < 75) {
        cout << "Status: Kurang disiplin" << endl;
    } else {
        cout << "Status: Tidak disiplin" << endl;
    }


    return 0;
}