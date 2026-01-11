// #include<iostream>
// using namespace std;
// void print(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void selectionsort(int *arr, int n){
//     // this for loop is the last element of each sorted array
//     for(int i=0;i<n-1;i++){
//        int minidx=i;
//        //this loop is for checking the smallest in unsorted array
//        for(int j=i+1;j<n;j++){
//         if(arr[j]<arr[minidx]){
//             minidx=j;
//         }

//        }
//        swap(arr[i],arr[minidx]);
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
//     selectionsort(arr,size);
// }

// #include<iostream>
// using namespace std;
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void selectionsort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         int minidx=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[j]>arr[i]){
//                 minidx=j;
//             }
//             swap(arr[i],arr[minidx]);
//         }
//     }
//     print(arr,n);
// }
// int main(){
//     int arr[]={5,4,3,2,1};
//     selectionsort(arr,5);

// }
#include<iostream>
using namespace std;
void print (int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
       int minidx=i;
       for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minidx]){
            minidx=j;
        }
        swap(arr[i],arr[minidx]);
       }
    }
    print(arr,n);
}
int main(){
int arr[]={5,4,1,3,2};
selectionsort(arr,5);
return 0;
}