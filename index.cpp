#include <iostream>
using namespace std;

struct mahasiswa{
  string nama;
  string alamat;
  int usia;
};

int main(){
  mahasiswa mhs1;
  mhs1.nama = "joni";
  mhs1.alamat = "Jl.mawar";
  mhs1.usia = 19;

  cout << "nama: " << mhs1.nama << endl;
}
