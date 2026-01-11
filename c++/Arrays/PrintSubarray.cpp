// #include<iostream>
// using namespace std;
// void Subarrays(int *arr,int n){
// for(int start=0;start<n;start++){
//     for(int end=start;end<n;end++){
//         for(int i=start;i<=end;i++){
//             cout<<arr[i];
//         }
//         cout<<" ";
//     }
//     cout<<endl;
// }
// }
// int main(){
//     int arr[100];
//     int size;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     Subarrays(arr,size);
//     return 0;

// }

#include<iostream>
using namespace std;
void PrintSubarray(int arr[], int n){
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            for(int i=start;i<end;i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    PrintSubarray(arr,n);
    return 0;
}