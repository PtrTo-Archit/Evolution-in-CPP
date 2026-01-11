#include<iostream>
using namespace std;
void count7(int mat[][3],int n,int m){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==7){
                count++;
            }
        }
    }
    cout<<count;
}
int main(){
    int mat[][3]={{4,7,8},{8,8,7},{7,7,7}};
    count7(mat,3,3);
}