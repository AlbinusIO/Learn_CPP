/* Deskripsi Soal:
Buat program C++ untuk menganalisis sejumlah nilai mahasiswa. Program menerima input berupa sejumlah nilai (maksimal 10 nilai), kemudian menghitung statistik sederhana.
Input:
•	Jumlah nilai (N), maksimal 10
•	Nilai-nilai (integer atau float)
Output yang Dihitung:
1.	Nilai tertinggi
2.	Nilai terendah
3.	Nilai rata-rata
4.	Jumlah nilai yang berada di atas rata-rata
Ketentuan:
•	Gunakan array untuk menyimpan nilai
•	Gunakan loop untuk proses perhitungan
•	Tidak menggunakan fungsi STL seperti max_element, min_element, atau vector
 */

 #include <iostream>
 using namespace std;

 int main(){
  int N;
  float nilai[10];
  cout << "masukkan nilai: ";
  cin >> N;

  if(N < 1 || N > 10){
    cout << "jumlah nilai antara 1 sampai 10" << endl;
  }

  for (int i = 0; i < N; i++){
    cout << "nilai ke-" << i+1 << ":";
    cin >> nilai[i];
  }

  float max = nilai[0];
  float min = nilai[0];
  float total = 0;

  for (int i = 0; i < N; i++){
    if(nilai[i] > max){
      max = nilai[i];
    }
    if(nilai[i] < min){
      min = nilai[i];
    }
    total += nilai[i];
  }

  float rata = total / N;

  int diatas = 0;
  for(int i = 0; i < N; i++){
    if(nilai[i] > rata){
      diatas++;
    }
  }

  cout << max << endl;
  cout << min << endl;
  cout << rata << endl;
  cout << diatas << endl;

 }