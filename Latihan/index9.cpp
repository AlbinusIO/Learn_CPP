/* Deskripsi Soal:
Buatlah program C++ yang membaca beberapa angka dari pengguna, kemudian menentukan untuk setiap angka apakah angka tersebut:
•	Genap atau ganjil
•	Prima atau bukan prima
Input:
•	Jumlah angka yang akan dicek (N)
•	N buah angka integer
Output:
Untuk setiap angka, tampilkan format seperti:
Angka 7: Ganjil, Prima
Angka 12: Genap, Bukan Prima
Ketentuan:
•	Gunakan perulangan untuk memproses setiap angka
•	Fungsi pengecekan prima menggunakan loop sederhana (pembagi dari 2 hingga n-1)
•	Tanpa menggunakan library matematika seperti <cmath> untuk sqrt()
 */

#include <iostream>
using namespace std;

int prima(int n){
  if (n <= 1) return false;

  for(int i = 2; i < n; i++ ){
    if(n % 1 == 0){
      return false;
    }
  }
  return true;
}


 int main(){
  int N;
  cout << "masukkan angka: ";
  cin >> N;

  

 }