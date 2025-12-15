#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string name = "Universitas Jember";
    cout << "Nama: " << name << endl;

    vector<int> nilai(5);
    for(int i=0; i<5; i++) nilai[i] = (i+1)*5;

    cout << "Nilai: ";
    for(int n : nilai) cout << n << " ";
    cout << endl;
}
