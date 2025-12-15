/*Soal 1 — Validasi Password Sederhana (Percabangan)
Deskripsi Soal:
Buatlah sebuah program C++ yang berfungsi untuk memvalidasi sebuah password berdasarkan aturan tertentu. Program akan menerima input berupa sebuah string password, kemudian memeriksa apakah password tersebut memenuhi syarat berikut:
Kriteria Password:
1.	Mengandung minimal 8 karakter
2.	Mengandung setidaknya satu huruf besar (A–Z)
3.	Mengandung setidaknya satu huruf kecil (a–z)
4.	Mengandung setidaknya satu angka (0–9)
Output:
•	Jika semua syarat terpenuhi → tampilkan:
•	Password valid.
•	Jika salah satu atau lebih syarat tidak terpenuhi → tampilkan pesan kesalahan spesifik, contoh:
•	Password harus memiliki huruf besar.
•	Password harus memiliki huruf kecil.
•	Password harus memiliki angka.
•	Password minimal 8 karakter.
Ketentuan:
•	Tidak menggunakan library <cctype> (cek karakter menggunakan rentang ASCII)
•	Gunakan percabangan if dan else. */

#include <iostream>
using namespace std;

int main(){
  string password;
  cout << "masukkan password: ";
  cin >> password;

  bool KarakterMinimal = password.length() >= 8;
  bool HurufBesar = false;
  bool HurufKecil = false;
  bool Angka = false;

  for (int i = 0; i < password.length(); i++){
    char c = password[i];

    if(c >= 'A' && c <= 'Z') HurufBesar = true;
    else if(c >= 'a' && c <= 'z') HurufKecil = true;
    else if(c >= '0' && c <= '9') Angka = true;
  }

  if(KarakterMinimal && HurufBesar && HurufKecil && Angka){
    cout << "Password valid" << endl;
  }else{
    if(!KarakterMinimal) cout << "Password minimal 8 karakter\n";
    if(!HurufBesar) cout << "Password harus memiliki huruf besar\n";
    if(!HurufKecil) cout << "Password harus memiliki huruf kecil\n";
    if(!Angka) cout << "Password harus memiliki angka\n";
  }

}