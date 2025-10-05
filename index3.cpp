#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int temp, total = 0;

    cout << "Masukkan 5 nilai integer:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Nilai ke-" << i << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar nilai
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	
    cout << "\nHasil urutan dari yang terendah: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
        total += arr[i]; 
    }

    cout << "\nJumlah seluruh nilai setelah diurutkan: " << total << endl;

    return 0;
}
