#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> get_2D(vector<int>&arr){
    int rows=2;
    int cols=2;
    vector<vector<int>>mat(rows,vector<int>(cols,0));
    if(arr.size()!=rows*cols){
        return {};
    }
    for(int i=0;i<rows*cols;i++){
        mat[i/cols][i%cols]=arr[i];
    }
    return mat;

}
int main(){
    vector<int>arr={1,2,3,4};
   vector<vector<int>>mat = get_2D(arr);
   for(int i=0;i<mat.size();i++){
    for(int j=0;j<mat[i].size();j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;

}
//M-2
// #include<iostream>
// using namespace std;
// void Print(int matrix[][2],int m,int n){
//     cout<<"2 D Array : "<<endl;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int OneD_to_twoD(int arr[],int k,int m,int n){
//     int matrix[m][2];
//     if(k!=m*n){
//         cout<<"Conversion not possible"<<endl;
//         return false;
//     }
//     for(int i=0;i<m*n;i++){
//          int row=i/n;
//          int col=i%n;
//          matrix[row][col]=arr[i];
//         }
//     Print(matrix,m,2);
//     return true;

// }
// int main(){
//     int arr[]={1,2,3,4};
//     int m=2,n=2;
//     int k=sizeof(arr)/sizeof(int);
//     cout<<"1 D Array : "<<endl;
//     for(int i=0;i<k;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     OneD_to_twoD(arr,k,m,n);
//     return 0;
// }