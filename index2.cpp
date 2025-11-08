#include <iostream>
using namespace std;


int main(){
	int loop;
	cout << "masukkan jumlah biodata: ";
	cin >> loop;
	
	string nama[loop], jk[loop];
	int umur[loop];
	
	
	for (int i = 0;i < loop; i++){
		cout << "biodata" << endl;
		cout << "nama: ";
		cin >> nama[i];
		cout << "jenis kelamin: ";
		cin >> jk[i];
		cout << "umur: ";
		cin >> umur[i];
		cout << " " << endl;
	}
	
	
	
	for (int i = 0;i < loop; i++){
		cout << "=====semua biodata=====" << endl;
		cout << "nama: " << nama[i] << endl;
		cout << "jenis kelamin: " << jk[i] << endl;
		cout << "umur: "<< umur[i] << endl;
		cout << " " << endl;
	}
	
  
}