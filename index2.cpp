#include <iostream>
using namespace std;

int main() {
  int A[2][3];
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      cout << "Masukkan nilai: ";
      cin >> A[i][j];
    }
  }

  cout << "\nIsi array:\n";
  for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
      cout << A[i][j] << " ";
    }
    cout << endl;
  }
}