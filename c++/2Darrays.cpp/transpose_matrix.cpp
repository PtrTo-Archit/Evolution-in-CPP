#include<iostream>
using namespace std;
void print(int trans[][2],int col,int row){
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}
void transpose(int mat[][3],int n,int m){
    int col=m; int row=n;
    int trans[3][2]={{0}};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[j][i]=mat[i][j];
        }
    }
print(trans,col,row);
}
int main(){
    int mat[][3]={{1,2,3},{4,5,6}};
    transpose(mat,2,3);
    return 0;
}