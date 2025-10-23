#include <iostream>
using namespace std;

int main() {
    int arr[3][3] = {
        {5, 12, 7},
        {9, 3, 15},
        {4, 8, 10}
    };

    int maxVal = arr[0][0];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] > maxVal){
                maxVal = arr[i][j];
            }
        }
    }

    cout << "hasil: " << maxVal << endl;
    return 0;
}
