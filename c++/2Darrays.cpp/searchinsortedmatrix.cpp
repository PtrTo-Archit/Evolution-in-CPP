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
//M-2 
/* #include<iostream>
using namespace std;
bool searchmatrix(int matrix[][4],int n,int m,int key){
    int row=0;
    int col=m-1;
    //int start=matrix[row][col];// yeh start bahar nhi declare kr sakte wrna loop mein start humesha 40 value hi lega toh loop infinite chalega
    while(row<n && col>=0){
    int start=matrix[row][col];
    if(start==key){
        cout<<"("<<row<<","<<col<<")"<<endl;
        return true;
    }
    else if(start<key){
        row++;
    }
    else{
        col--;
    }
    
}
cout<<"Key not found"<<endl;
return false;

}
int main(){
    int matrix[4][4]={{10,20,30,40},
                      {15,25,35,45},
                      {27,29,37,48},
                      {32,33,39,50}};
    int key=37;
    searchmatrix(matrix,4,4,key);
    return 0;
}
    */