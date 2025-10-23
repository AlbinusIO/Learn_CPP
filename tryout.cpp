#include <iostream>
#include <iomanip>
#include <limits> // Tambahan untuk membersihkan buffer input
using namespace std;

struct Siswa {
    string nama;
    int nilai[3];
    float rata;
    string status;
};

int main() {
    string mapel[3] = {"MAT", "B.Ing", "PROG"};
    Siswa siswa[5] = {
        {"Rusdi",  {80, 78, 89}},
        {"Fuad",   {91, 88, 98}},
        {"Ironi",  {88, 78, 77}},
        {"Siimut", {88, 76, 66}},
        {"David",  {90, 90, 90}}
    };

    int jumlahsiswa = 5, jumlahmapel = 3;

    // Hitung rata dan status awal
    for (int i = 0; i < jumlahsiswa; i++) {
        int total = 0;
        for (int j = 0; j < jumlahmapel; j++) {
            total += siswa[i].nilai[j];
        }
        siswa[i].rata = (float)total / jumlahmapel;

        if (siswa[i].rata >= 80 && siswa[i].nilai[2] >= 85) {
            siswa[i].status = "LULUS DENGAN PRESTASI";
        }
        else if (siswa[i].rata >= 70) {
            siswa[i].status = "LULUS BIASA";
        }
        else {
            siswa[i].status = "REMIDI";
        }
    }

    int pilihan;
    do {
        cout << "\npilih menu yang tersedia\n";
        cout << "1. Cek Siswa Lulus/Remidi Berdasarkan Nama\n";
        cout << "2. Koreksi Nilai Siswa\n";
        cout << "3. Keluar\n";
        cout << "masukkan angka urutan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1: {
                string cariNama;
                cout << "Masukkan nama siswa: ";

                // Bersihkan buffer sebelum getline
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                getline(cin, cariNama);

                bool ketemu = false;

                for (int i = 0; i < jumlahsiswa; i++) {
                    if (siswa[i].nama == cariNama) {
                        cout << "Nama: " << siswa[i].nama 
                             << " | Status: " << siswa[i].status << endl;
                        ketemu = true;
                        break;
                    }
                }
                if (!ketemu) {
                    cout << "Siswa dengan nama " << cariNama << " tidak ditemukan.\n";
                }
                break;
            }

            case 2: {
                int idxSiswa, idxMapel, nilaiBaru;
                cout << "Masukkan nomor siswa (0-4): ";
                cin >> idxSiswa;

                if (idxSiswa < 0 || idxSiswa >= jumlahsiswa) {
                    cout << "Nomor siswa tidak valid!\n";
                    continue;
                }

                cout << "Masukkan indeks mapel (0: MAT, 1: B.Ing, 2: PROG): ";
                cin >> idxMapel;

                switch (idxMapel) {
                    case 0:
                    case 1:
                    case 2:
                        cout << "Nilai lama " << siswa[idxSiswa].nilai[idxMapel]
                             << ". Masukkan nilai baru: ";
                        cin >> nilaiBaru;
                        siswa[idxSiswa].nilai[idxMapel] = nilaiBaru;

                        // Update ulang rata-rata dan status
                        {
                            int total = 0;
                            for (int j = 0; j < jumlahmapel; j++) {
                                total += siswa[idxSiswa].nilai[j];
                            }
                            siswa[idxSiswa].rata = (float)total / jumlahmapel;

                            if (siswa[idxSiswa].rata >= 80 && siswa[idxSiswa].nilai[2] >= 85) {
                                siswa[idxSiswa].status = "LULUS DENGAN PRESTASI";
                            }
                            else if (siswa[idxSiswa].rata >= 70) {
                                siswa[idxSiswa].status = "LULUS BIASA";
                            }
                            else {
                                siswa[idxSiswa].status = "REMIDI";
                            }
                        }

                        cout << "Nilai berhasil diperbarui!\n";
                        break;
                    default:
                        cout << "Indeks mapel tidak valid!\n";
                        continue;
                }
                break;
            }

            case 3:
                cout << "Keluar dari program...\n";
                break;

            default:
                cout << "Pilihan tidak valid!\n";
        }

    } while (pilihan != 3);
	
		cout << "No\tNama\t\tMAT\tB.Ing\tPROG\tRata\t   status\n";
	cout << "================================================================================\n";

    for (int i = 0; i < jumlahsiswa; i++) {
        cout << i + 1 << "\t"
             << siswa[i].nama << "\t\t"
             << siswa[i].nilai[0] << "\t"
             << siswa[i].nilai[1] << "\t"
             << siswa[i].nilai[2] << "\t"
             << siswa[i].rata << "\t   "
			 << siswa[i].status << endl;
    }

    return 0;
};
