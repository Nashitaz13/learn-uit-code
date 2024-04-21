#include<bits/stdc++.h>
using namespace std;
/*
isSafe: Hàm này kiểm tra xem có thể đặt quân hậu tại vị trí (row, col) trên bàn cờ hay không. Nếu có quân hậu nào khác nằm trên cùng hàng hoặc đường chéo với vị trí này thì trả về false.

printBoard: Hàm này in ra bàn cờ hiện tại. Nếu có quân hậu ở vị trí (i, j) thì in ra “X”, ngược lại in ra “.”.

solveNQ: Hàm này giải bài toán N-Queens bằng phương pháp đệ quy và quay lui. Thuật toán sẽ thử đặt quân hậu ở mỗi hàng của cột hiện tại và sau đó đệ quy để giải bài toán cho các cột tiếp theo.

solve: Hàm này khởi tạo mảng board để lưu vị trí của các quân hậu, sau đó gọi hàm solveNQ để giải bài toán. Nếu không tìm được lời giải, hàm sẽ in ra “Solution does not exist”.

main: Hàm chính của chương trình, nhận vào số N từ người dùng và gọi hàm solve để giải bài toán.
*/
bool isSafe(int board[], int row, int col, int n) {
    for (int i = 0; i < col; i++)
        if (board[i] == row || abs(board[i] - row) == abs(i - col))
            return false;
    return true;
}

void printBoard(int board[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (board[j] == i)
                cout << "X ";
            else
                cout << ". ";
        }
        cout << endl;
    }
}

bool solveNQ(int board[], int col, int n) {
    if (col >= n)
        return true;
    for (int i = 0; i < n; i++) {
        if (isSafe(board, i, col, n)) {
            board[col] = i;
            if (solveNQ(board, col + 1, n))
                return true;
            board[col] = 0;
        }
    }
    return false;
}

void solve(int n) {
    int* board = new int[n];
    for (int i = 0; i < n; i++)
        board[i] = 0;
    if (!solveNQ(board, 0, n)) {
        cout << "Solution does not exist";
        return;
    }
    printBoard(board, n);
}

int main() {
    int n;
    cin >> n;
    solve(n);
    return 0;
}
