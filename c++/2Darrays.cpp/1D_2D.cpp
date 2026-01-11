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