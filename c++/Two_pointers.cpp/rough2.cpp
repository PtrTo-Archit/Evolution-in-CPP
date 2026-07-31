// #include<iostream>
// using namespace std;
// int min_sort(int arr[],int n){
//     int i=0;
//     int j=n-1;
//     while(i<j){
//         int mid=i+ (j-i)/2;
//         if(arr[mid]<arr[j]){
//             j=mid;
//         }
//         else{
//             i=mid+1;
//         }
//     }
//     return arr[j];
// }
// int main(){
//     int arr[]={4,5,6,7,0,1,2};
//     cout<<min_sort(arr,7);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void total_sub(string str,string subset){
//     if(str.size()==0){
//         cout<<subset<<endl;
//         return;
//     }
//     total_sub(str.substr(1),subset+str[0]);
//     total_sub(str.substr(1),subset);

// }
// int main(){
//     string str="abc";
//     string subset="";
//     total_sub(str,subset);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void perm(string str,string ans){
//     if(str.size()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<str.size();i++){
//         char ch=str[i];
//         int n=str.size();
//         string nextStr=str.substr(0,i) + str.substr(i+1,n-i-1);
//         perm(nextStr,ans+ch);
//     }
// }
// int main(){
//     string str="abc";
//     string ans="";
//     perm(str,ans);
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void printBoard(vector<vector<char>>&chess){
//     int n=chess.size();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<chess[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl<<"-----------------"<<endl;
// }
// bool isSafe(vector<vector<char>>&chess,int row,int col){
//     int n=chess.size();
//     for(int i=0;i<row;i++){
//         if(chess[i][col]=='Q'){
//             return false;
//         }
//     }
//     for(int i=row,j=col;i>=0 && j>=0;i--,j--){
//         if(chess[i][j]=='Q'){
//             return false;
//         }
//     }
//     for(int i=row,j=col;i>=0 && j<=n-1;i--,j++){
//         if(chess[i][j]=='Q'){
//             return false;
//         }
//     }
//     return true;
// }
// bool nQueens(vector<vector<char>>&chess,int row){
//     int n=chess.size();
//     if(row==n){
//         printBoard(chess);
//         return true;
//     }
//     for(int j=0;j<n;j++){
//         if(isSafe(chess,row,j)){
//         chess[row][j]='Q';

//         if(nQueens(chess,row+1)){
//             return true;
//         }
//         chess[row][j]='.';
//         }
//     }
//     return false;

// }
// int main(){
//     vector<vector<char>>chess;
//     int n=5;
//     for(int i=0;i<n;i++){
//         vector<char>Startrow;
//         for(int j=0;j<n;j++){
//             Startrow.push_back('.');
//         }
//         chess.push_back(Startrow);
//     }
//     nQueens(chess,0);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void find_subset(string str,string subset){
//     int n=str.size();
//     if(n==0){
//         cout<<subset<<endl;
//         return;
//     }
//     find_subset(str.substr(1),subset+str[0]);
//     find_subset(str.substr(1),subset);

// }
// int main(){
//     string str="abc";
//     string subset="";
//     find_subset(str,subset);
//     return 0;
// }
// #include<iostream>
// using namespace std;
//  int print_sperm(string str,string sperm){
//     int n=str.size();
//     if(n==0){
//         cout<<sperm<<endl;
//         return 1;
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         char ch=str[i];
//         string nextStr=str.substr(0,i) + str.substr(i+1,n-i-1);
//         count+=print_sperm(nextStr,sperm + str[i]);
//     }
//     return count;
// }
// int main(){
//     string str="abc";
//     string sperm="";
//     int count=print_sperm(str,sperm);
//     cout<<count;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// int print_perm(string &str, int start) {
//     int n = str.size();
//     if (start == n) {
//         cout << str << endl;
//         return 1;
//     }
    
//     int count = 0;
//     for (int i = start; i < n; i++) {
//         swap(str[start], str[i]);          // choice: bring str[i] to position 'start'
//         count += print_perm(str, start + 1); // recurse on remaining part
//         swap(str[start], str[i]);          // undo — restore original order
//     }
//     return count;
// }

// int main() {
//     string str = "abc";
//     int count = print_perm(str, 0);
//     cout << count << endl;
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<vector<char>>&chess){
//     int n=chess.size();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<chess[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// bool isSafe(vector<vector<char>>&chess,int row,int col){
//     int n=chess.size();
//     for(int i=0;i<row;i++){
//         if(chess[i][col]=='Q'){
//             return false;
//         }
//     }
//     for(int i=row,j=col;i>=0 && j>=0;i--,j--){
//         if(chess[i][j]=='Q'){
//             return false;
//         }
//     }
//     for(int i=row,j=col;i>=0 && j<=n-1;j++,i--){
//         if(chess[i][j]=='Q'){
//             return false;
//         }
//     }
//     return true;
// }
// void nQueens(vector<vector<char>>& chess , int row){
//     int n=chess.size();
//     if(row==n){
//         print(chess);
//         return;
//     }
//     for(int j=0;j<n;j++){
//         if(isSafe(chess,row,j)){
//             chess[row][j]='Q';
//             nQueens(chess,row+1);
//             chess[row][j]='.';
//         }
//     }
// }
// int main(){
//     int n=4;
//     vector<vector<char>>chess(n,vector<char>(n,'.'));
//     nQueens(chess,0);
//     print(chess);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int nCr(int n,int r){
//     if(r>n-r){
//         r=n-r;
//     }

//     long long ans=1;
//     for(int i=1;i<=r;i++){
//         ans=ans*(n-r+i)/i;
//     }
//     return ans;
// }
// int gridWays(int n,int m){
//    long long count=nCr(n+m-2,n-1);
//    return count;
// }
// int main(){
//     int n=3;
//     int m=3;
//     int count=gridWays(n,m);
//     cout<<count;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void print(int sudoku[9][9]){
//     for(int i=0;i<9;i++){
//         for(int j=0;j<9;j++){
//             cout<<sudoku[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// bool isSafe(int sudoku[][9],int row,int col,int digit){
//     for(int i=0;i<9;i++){
//         if(sudoku[i][col]==digit){
//             return false;
//         }
//     }
//     for(int j=0;j<9;j++){
//         if(sudoku[row][j]==digit){
//             return false;
//         }
//     }
//     int startRow=(row/3)*3;
//     int startCol=(col/3)*3;
//     for(int i=startRow;i<=startRow+2;i++){
//         for(int j=startCol;j<=startCol+2;j++){
//             if(sudoku[i][j]==digit){
//                 return false;
//             }
//         }
//     }
// }
// bool SS(int sudoku[9][9],int row ,int col){
//     if(row==9){
//         print(sudoku);
//         return true;
//     }
//     int nextRow=row;
//     int nextCol=col+1;
//     if(col+1==9){
//         nextRow=row+1;
//         nextCol=0;
//     }
//     if(sudoku[row][col]!=0){
//         return SS(sudoku,nextRow,nextCol);
//     }
//     for(int digit=1;digit<=9;digit++){
//         if(isSafe(sudoku,row,col,digit)){
//             sudoku[row][col]=digit;
//             if(SS(sudoku,nextRow,nextCol)){
//                 return true;
//             }
//             sudoku[row][col]=0;
//         }
//     }
//     return false;
// }
// int main(){
//     int sudoku[9][9] = {{0, 0, 8, 0, 0, 0, 0, 0, 0},
//                     {4, 9, 0, 1, 5, 7, 0, 0, 2},
//                     {0, 0, 3, 0, 0, 4, 1, 9, 0},
//                     {1, 8, 5, 0, 6, 0, 0, 2, 0},
//                     {0, 0, 0, 0, 2, 0, 0, 6, 0},
//                     {9, 6, 0, 4, 0, 5, 3, 0, 0},
//                     {0, 3, 0, 0, 7, 2, 0, 0, 4},
//                     {0, 4, 9, 0, 3, 0, 0, 5, 7},
//                     {8, 2, 7, 0, 0, 9, 0, 1, 3}};

//                     SS(sudoku,0,0);
//                     print(sudoku);
//                     return 0;
// }

// #include<iostream>
// using namespace std;
// int GridWays(int r,int c, int n,int m){
//     if(r==n-1 && c==m-1){
//         return 1;
//     }
//     if(r>=n || c>=m){
//         return 0;
//     }
//     int val1=GridWays(r,c+1,n,m);
//     int val2=GridWays(r+1,c,n,m);
//     return val1 + val2;
// }
// int main() {
//     int n=3;
//     int m=3;
//    cout<<"Total Ways : "<< GridWays(0,0,n,m);
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<string>&ans){
//     int n=ans.size();
//     for(int i=0;i<n;i++){
//         cout<<ans[i];
//     }
//     cout<<endl;
// }
// bool validPath(int grid[][4],int row,int col,int n,string path,vector<string>&ans){
//     if(row<0 || col<0 || row>=n || col>=n || grid[row][col]!=1){
//         return false;
//     }
//     if(row==n-1 && col==n-1){
//         ans.push_back(path);
//         return true;
//     }
//     grid[row][col]=-1;
//     validPath(grid,row-1,col,n,path+'U',ans);
//     validPath(grid,row+1,col,n,path+'D',ans);
//     validPath(grid,row,col-1,n,path+'L',ans);
//     validPath(grid,row,col+1,n,path+'R',ans);
//     grid[row][col]=1;
// }
// int main(){
//     int grid[][4]={{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
//     int n=4;
//     string path="";
//     vector<string>ans;
//     validPath(grid,0,0,n,path,ans);
//     print(ans);
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int count_subset(string str,string subset){
//     if(str.size()==0){
//         cout<<subset<<endl;
//         return 1;
//     }
//     int count =0;
//     count+=count_subset(str.substr(1),subset+str[0]);
//     count+=count_subset(str.substr(1),subset);
//     return count;

// }
// int main(){
//     string str="abc";
//     string subset="";
//     int count=count_subset(str,subset);
//     cout<<count;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void total(string str,string perm){
//     if(str.size()==0){
//         cout<<perm<<endl;
//         return;
//     }
//     for(int i=0;i<str.size();i++){
//         string nextStr=str.substr(0,i) + str.substr(i+1,str.size()-i-1);
//         total(nextStr,perm+str[i]);
//     }
// }
// int main(){
//     string str="abc";
//     string perm="";
//     total(str,perm);
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<vector<char>>& board){
//     int n=board.size();
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<board[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<"---------------"<<endl;
//     return;
// }
// bool isSafe(vector<vector<char>>&board, int row,int col){
//     int n=board.size();
//     for(int i=0;i<row;i++){
//         if(board[i][col]=='Q'){
//             return false;
//         }
//     }
//     for(int i=row,j=col;i>=0 && j>=0;i--,j--){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//     }
//     for(int i=row,j=col;i>=0 && j<n;i--,j++){
//         if(board[i][j]=='Q'){
//             return false;
//         }
//     }
//     return true;
// }
// bool nQueens(vector<vector<char>>&board, int row){
//     int n=board.size();
//     if(row==n){
//         print(board);
//         return true;
//     }
//     for(int j=0;j<n;j++){
//         if(isSafe(board,row,j)){
//             board[row][j]='Q';
//             if(nQueens(board,row+1)){
//                 return true;
//             }
//             board[row][j]='.';
//         }
//     }
//     return false;

// }
// int main(){
//     int n=4;
//     vector<vector<char>>board(n,vector<char>(n,'.'));
//    cout<<nQueens(board,0);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int Comb(int N,int R){
// if(R>N-R){
//     R=N-R;
//     }
//     long long ans=1;
//     for(int i=1;i<=R;i++){
//         ans=ans*(N-R+i)/i;
//     }
//     return ans;

// }
// int gridways(int n,int m){
//     int N=n+m-2;
//     int R=n-1;
//     return Comb(N,R);
// }
// int main(){
//     int n=3;
//     int m=3;
//     long long count=gridways(n,m);
//     cout<<count;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// void print(int sudoku[9][9]){
//     for(int i=0;i<9;i++){
//         for(int j=0;j<9;j++){
//             cout<<sudoku[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// bool isSafe(int sudoku[9][9],int row,int col,int digit){
//     for(int j=0;j<9;j++){
//         if(sudoku[row][j]==digit){
//             return false;
//         }
//     }
//     for(int i=0;i<9;i++){
//         if(sudoku[i][col]==digit){
//             return false;
//         }
//     }
//     int startrow=(row/3)*3;
//     int startcol=(col/3)*3;
//     for(int i=startrow;i<=startrow+2;i++){
//         for(int j=startcol;j<=startcol+2;j++){
//             if(sudoku[i][j]==digit){
//                 return false;
//             }
//         }
//     }
//     return true;
// }
// bool sudokuSolver(int sudoku[9][9],int row,int col){
//     if(row==9){
//         return true;
//     }
//     int nextrow=row;
//     int nextcol=col+1;
//     if(nextcol==9){
//         nextrow=row+1;
//         nextcol=0;
//     }
//     if(sudoku[row][col]!=0){
//         return sudokuSolver(sudoku,nextrow,nextcol);
//     }
//     for(int digit=1;digit<=9;digit++){
//         if(isSafe(sudoku,row,col,digit)){
//             sudoku[row][col]=digit;
//             if(sudokuSolver(sudoku,nextrow,nextcol)){
//                 return true;
//             }
//             sudoku[row][col]=0;
//         }
//     }
//     return false;
// }
// int main(){
//     int sudoku[9][9]={{0,0,8,0,0,0,0,0,0},
//                       {4,9,0,1,5,7,0,0,2},
//                       {0,0,3,0,0,4,1,9,0},
//                       {1,8,5,0,6,0,0,2,0},
//                       {0,0,0,0,2,0,0,6,0},
//                       {9,6,0,4,0,5,3,0,0},
//                       {0,3,0,0,7,2,0,0,4},
//                       {0,4,9,0,3,0,0,5,7},
//                       {8,2,7,0,0,9,0,1,3}};
//     sudokuSolver(sudoku, 0, 0);
//     print(sudoku);
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void subset2(string &str,string &subset,int idx){
//     if(idx==str.size()){
//         cout<<subset<<endl;
//         return;
//     }
//     subset.push_back(str[idx]);
//     subset2(str,subset,idx+1);
//     subset.pop_back();
//     int next = idx + 1;
//     while(next < str.size() && str[next] == str[idx]){
//         next++;
//     }
//     subset2(str, subset, next);

// }
// int main(){
//     string str="aba";
//     sort(str.begin(),str.end());
//     string subset="";
//     subset2(str,subset,0);
//     return 0;

// }
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>mat;
void print(vector<vector<int>>&mat){
    int n=mat.size();
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
void recurse(vector<int>&nums, vector<int>&count,int idx){
    if(idx==nums.size()){
        mat.push_back(count);
        return;
    }
    for(int j=0;j<nums.size();j++){
        if(nums[j]==1e9){
            continue;
        }
        int val=nums[j];
        count.push_back(nums[j]);
        nums[j]=1e9;
        recurse(nums,count,idx+1);
        count.pop_back();
        nums[j]=val;
        int next=idx+1;
         while(next<nums.size() && nums[next]==nums[idx]){
            next++;
        }
    }
}
int main(){
    vector<int>nums={1,2,3,3};
    int n=nums.size();
    vector<int>count;
    recurse(nums,count,0);
    print(mat);
    return 0;
}