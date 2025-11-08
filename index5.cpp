#include <iostream>
using namespace std;

int main(){
	for (int i = 1; i <= 10; i++) {
		
    cout << "awal iterasi " << i << endl;

    // ilustrasi perintah continue
    if (i % 2 == 0) {
        cout << "    iterasi dihentikan!" << endl;
        continue;

        // sebelum iterasi dihentikan,
        // perintah i++ akan tetap dijalankan
    }

    cout << "    halo dunia" << endl;
} 
