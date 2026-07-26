// #include<iostream>
// #include<string>
// using namespace std;
// void permutations(string str, string ans){
//     int n=str.size();
//     if(n==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<n;i++){
//         char ch=str[i];
//         string nextStr = str.substr(0,i) + str.substr(i+1,n-i-1);
//         permutations(nextStr,ans + ch);
//     }
// }
// int main() {
//     string str= "abc";
//     string ans = "";
//     permutations(str,ans);
//     return 0;
// }

//M-2 Optimized Solution
#include <iostream>
#include <vector>

using namespace std;

void print(const vector<vector<char>>& board) {
    int n = board.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

void solveNQueens(vector<vector<char>>& board, int row, int n,
                   vector<bool>& cols, vector<bool>& leftDiags, vector<bool>& rightDiags) {
    if (row == n) {
        print(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        // O(1) mathematical index formulas
        int leftIdx = row - col + (n - 1);
        int rightIdx = row + col;

        // O(1) check instead of O(N) loop
        if (!cols[col] && !leftDiags[leftIdx] && !rightDiags[rightIdx]) {
            // Place Queen & mark attacks
            board[row][col] = 'Q';
            cols[col] = true;
            leftDiags[leftIdx] = true;
            rightDiags[rightIdx] = true;

            // Recurse to next row
            solveNQueens(board, row + 1, n, cols, leftDiags, rightDiags);

            // Backtrack: remove Queen & unmark attacks
            board[row][col] = '.';
            cols[col] = false;
            leftDiags[leftIdx] = false;
            rightDiags[rightIdx] = false;
        }
    }
}

int main() {
    int n = 4;
    vector<vector<char>> board(n, vector<char>(n, '.'));

    // Lookup tracking arrays for O(1) checks
    vector<bool> cols(n, false);
    vector<bool> leftDiags(2 * n - 1, false);  // Index: row - col + (n - 1)
    vector<bool> rightDiags(2 * n - 1, false); // Index: row + col

    solveNQueens(board, 0, n, cols, leftDiags, rightDiags);

    return 0;
}