// #include<iostream>
// using namespace std;
// const int COL=100;
// void SpiralMatrix(int arr[][COL],int n,int m ){
//     int srow=0, scol=0;
//     int erow=n-1,ecol=m-1;
//     while(srow<=erow && scol<=ecol){
//         //top
//         for(int j=scol;j<=ecol;j++){
//             cout<<arr[srow][j]<<" ";
//         }
//         //right
//         for(int i=srow+1;i<=erow;i++){
//             cout<<arr[i][ecol]<<" ";
//         }
//         //bottom
//         for(int j=ecol-1;j>=scol;j--){
//             if(srow==erow){
//                 break;
//             }
//             cout<<arr[erow][j]<<" ";
//         }
//         //left
//         for(int i=erow-1;i>srow;i--){
//             if(scol==ecol){
//                 break;
//             }
//             cout<<arr[i][srow]<<" ";
//         }
//         srow++;
//         scol++;
//         erow--;
//         ecol--;
//     }
// }

// int main(){
//     int arr[100][COL];
//     int n ,m;
//     cin>>n>>m;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     SpiralMatrix(arr,n,m);
    
//     return 0;
// }
#include<iostream>
using namespace std;
void spiral(int arr[][4],int n,int m){
    int srow=0;
    int scol=0;
    int erow=n-1;
    int ecol=m-1;
    while(srow<=erow && scol<=ecol){
    //top
    for(int j=scol;j<=ecol;j++){
        cout<<arr[srow][j]<<" ";
    }
    //right
     for(int i=srow+1;i<=erow;i++){
        cout<<arr[i][ecol]<<" ";
    }
    //bottom
     for(int j=ecol-1;j>=scol;j--){
        if(srow==erow){
            break;
        }
        cout<<arr[erow][j]<<" ";
    }
    //left
     for(int i=erow-1;i>=srow+1;i--){
        if(scol==ecol){
            break;
        }
        cout<<arr[i][scol]<<" ";
    }
    srow++;
    scol++;
    erow--;
    ecol--;
}

}
int main() {
    int arr[][4]={{1,2,3,4},
                {5,6,7,8},
                {9,10,11,12},
            };
   spiral(arr,3,4);
   return 0;

}