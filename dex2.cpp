#include <iostream>
using namespace std;

int a, b, t, p, l;

int main() {
// Perhitungan Keliling Persegi Panajng
  cout << "Keliling Persegi" << endl;
  cout << "Panjang Persegi: ";
  cin >> p;
  cout << "Lebar Persegi: ";
  cin >> l;
  // rumus Luas= 2 x (p + l)
  cout << "Hasil: " << (2 * (p + l)) << " cm" << endl;

// Perhitungan Luas Trapesium
cout << "Luas Trapesium" << endl;
 cout << "Panjang Sisi a: ";
  cin >> a;
  cout << "Panjang Sisi b: ";
  cin >> b;
    cout << "Tinggi Trapesium: ";
  cin >> t;
  // rumus Luas= 2 x (p + l)
  cout << "Hasil: " << 0.5 * (a + b) * t << " cm" <<endl;


return 0;
}