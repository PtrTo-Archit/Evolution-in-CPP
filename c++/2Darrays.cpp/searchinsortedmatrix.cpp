//M-1  Time Complexity -> O(n+m)
#include<iostream>
using namespace std;
const int COL=100;
bool SearchMatrix(int arr[][COL],int n,int m,int key ){
    int i=n-1, j=0;
    while(i>=0 && j<m){
        if(arr[i][j]==key){
            cout<<"Key is found at index ("<<i<<","<<j<<")";
            return true;
        }
        else if(arr[i][j]<key){
            j++;
        }
        else{
            i--;
        }
    }
    cout<<"Key not found";
    return false;
    
}

int main(){
    int arr[100][COL];
    int n,m,key;
    cin>>n>>m>>key;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    SearchMatrix(arr,n,m,key);
    
    return 0;
}