#include<iostream>
using namespace std;
void secondSum(int mat[][3],int m){
    int sum=0;
    for(int j=0;j<m;j++){
        sum+=mat[1][j];
    }
    cout<<sum;
}
int main(){
    int mat[][3]={{1,2,3},{11,5,6},{7,8,9}};
    secondSum(mat,3);
    return 0;
}