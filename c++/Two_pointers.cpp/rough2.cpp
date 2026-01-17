#include<iostream>
#include<vector>
using namespace std;
vector<pair<int,int>> searchmatrix(int matrix[][4],int n,int m,int key){
    int i=0;
    int j=m-1;
    vector<pair<int,int>>v;
    while(i<n && j>=0){
        if(matrix[i][j]==key){
            v.push_back({i,j});
            return v;
        }
        else if(matrix[i][j]<key){
            i++;
        }
        else{
            j--;
        }
    }
    return v;
}
int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
    int key=37;
    vector<pair<int,int>>v=searchmatrix(matrix,4,4,key);
    cout<<"("<<v[0].first<<","<<v[0].second<<")";
    return 0;
}