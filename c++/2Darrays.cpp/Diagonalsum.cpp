// //M-1  Time Complexity -> O(n2)
// #include<iostream>
// using namespace std;
// const int COL=100;
// void DiagonalSum(int arr[][COL],int n ){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 sum+=arr[i][j];
//             }
//             else if(j==n-i-1){
//                 sum+=arr[i][j];
//             }
//         }
//     }
//     cout<<sum;
// }

// int main(){
//     int arr[100][COL];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     DiagonalSum(arr,n);
    
//     return 0;
// }

//M-2  Time Complexity -> O(n)
#include<iostream>
using namespace std;
const int COL=100;
void DiagonalSum(int arr[][COL],int n ){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i][i];
        if(i!=n-i-1){
            sum+=arr[i][n-i-1];
        }
    }
    cout<<sum;
}

int main(){
    int arr[100][COL];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    DiagonalSum(arr,n);
    
    return 0;
}


//m-3
#include<iostream>
using namespace std;
void diagonalsum(int arr[][3],int n,int m){
    int sum=0;
    int i=0;
    int j=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(j==i || j==n-i-1){
                sum=sum + arr[i][j];
            }
        }
    }
    cout<<sum;
}
int main() {
    int arr[][3]={{1,2,3},
                {4,5,6},
                {7,8,9},
                };
diagonalsum(arr,3,3);
}