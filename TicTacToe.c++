#include <iostream>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};

void showBoard() {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) cout << board[i][j] << " ";
        cout << endl;
    }
}

bool checkWin() {
    for(int i=0;i<3;i++)
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2]) return true;
    for(int j=0;j<3;j++)
        if(board[0][j]==board[1][j] && board[1][j]==board[2][j]) return true;
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2]) return true;
    if(board[0][2]==board[1][1] && board[1][1]==board[2][0]) return true;
    return false;
}

int main() {
    int pos, turn = 0;
    char mark;
    while(turn < 9) {
        showBoard();
        cout << "Player " << (turn%2+1) << " (X/O): ";
        mark = (turn%2==0) ? 'X' : 'O';
        cout << "Enter position: "; cin >> pos;
        int row = (pos-1)/3, col = (pos-1)%3;
        if(board[row][col]!='X' && board[row][col]!='O')
            board[row][col] = mark;
        else {
            cout << "Invalid move!" << endl; continue;
        }
        if(checkWin()) {
            showBoard();
            cout << "Player " << (turn%2+1) << " wins!" << endl;
            return 0;
        }
        turn++;
    }
    showBoard();
    cout << "It's a draw!" << endl;
    return 0;
}
