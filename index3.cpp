#include <iostream>
using namespace std;

int s = 2, p = 4, l = 5, r = 10;
const float PI = 3.14;

int main(){
// Luas Persegi L= s x s
cout << "Luas Persegi: " << (s * s) << endl;

// Keliling Persegi K = 4 x s
cout << "Keliling Persegi: " << (4 * s) << endl;

// Luas Persegi Panjang L= P x L
cout << "Luas Persegi Panjang: " << (p * l) << endl;

//  Keliling Persegi Panjang K= 2 x (p + l)
cout << "Keliling Persegi Panjang: " << (2 * (p + l)) << endl;

// Luas Lingkaran L= pi x r x r
cout << "Luas Lingkaran: " << (PI * r * r) << endl;

// Keliling Lingkaran K= 2 x pi x r
cout << "Keliling Lingkaran: " << (2 * PI * r) << endl;

    return 0;
}