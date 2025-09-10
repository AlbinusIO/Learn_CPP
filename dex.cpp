#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cout << "masukkan ukuran persegi: ";
	cin >> n;
	
	for(int i = 0;i < n;i++ ) { //baris
		for (int j + 0; j < n; j++) {//kolom
			cout << "*";
		}
		cout << endl; //pindahbaru
	}
 return 0;
}