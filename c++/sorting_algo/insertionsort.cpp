// #include<iostream>
// using namespace std;
// void print(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void insertionsort(int *arr, int n){
//     // this for loop is the first element of each unsorted sorted array
//     for(int i=1;i<n;i++){
//        int curr=arr[i];
//        int prev=i-1;
//        //this loop is for checking the place for curr in the sorted array
//        while(prev>=0 && arr[prev]>curr){
//         swap(arr[prev+1],arr[prev]);
//         prev--;
//     }
//     }
//     print(arr,n);

// }

// int main() {
//     int arr[100];
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     cout << "Enter " << size << " elements:" << endl;
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }
//     insertionsort(arr,size);
// }
// #include<iostream>
// using namespace std;
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void insertionsort(int arr[],int n){
//     for(int i=1;i<n;i++){
//         int curr=arr[i];
//         int prev=i-1;
//         while(prev>=0 && arr[prev]>curr){
//             swap(arr[prev+1],arr[prev]);
//             prev--;
//         }
//     }
//     print(arr,n);
// }
// int main(){
// int arr[]={5,4,1,3,2};
// insertionsort(arr,5);
// }
#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        for(int j=0;j<n-1;j++){
            while(prev>=0 && arr[prev]<curr){
                swap(arr[prev+1],arr[prev]);
                prev--;
            }
        }
    }
    print(arr,n);
}
int main(){
    int arr[]={5,4,1,3,2};
    insertionsort(arr,5);
    return 0;

}