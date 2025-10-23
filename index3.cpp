#include <iostream>
using namespace std;

int main() {
    char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int turn = 0;
    char player = 'X'; 
    int row, col;

    while(turn < 9) {
        cout << "\nPapan Permainan:\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout << board[i][j];
                if(j<2) cout << " | ";
            }
            cout << endl;
            if(i<2) cout << "--+---+--\n";
        }

        cout << "\nGiliran Pemain " << player << endl;
        cout << "Masukkan baris (0-2): "; cin >> row;
        cout << "Masukkan kolom (0-2): "; cin >> col;

        // Validasi input
        if(row < 0 || row > 2 || col < 0 || col > 2){
            cout << "Input tidak valid! Coba lagi.\n";
            continue;
        }

        if(board[row][col] == ' '){
            board[row][col] = player;
            turn++;
        } else {
            cout << "Kotak sudah terisi!\n";
            continue;
        }

        // Ubah pemain
        if(player == 'X') player = 'O';
        else player = 'X';
    }

    cout << "\nPermainan selesai!\n";
    return 0;
}
