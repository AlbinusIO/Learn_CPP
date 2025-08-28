#include <iostream>
using namespace std;

int main(){
  float nilai1, nilai2, nilai3, rata;

    cout << "Masukkan nilai mata kuliah 1: ";
    cin >> nilai1;
    cout << "Masukkan nilai mata kuliah 2: ";
    cin >> nilai2;
    cout << "Masukkan nilai mata kuliah 3: ";
    cin >> nilai3;

    // hitung rata-rata
    rata = (nilai1 + nilai2 + nilai3) / 3;
    cout << "\nRata-rata nilai: " << rata << endl;

      if (rata >= 80) {
      cout << "Keterangan: Lulus dengan Baik" << endl;
    } 
      else if (rata >= 60 && rata <= 79) {
      cout << "Keterangan: Lulus" << endl;
    } 
      else {
      cout << "Keterangan: Tidak Lulus" << endl;
    }
return 0;
}