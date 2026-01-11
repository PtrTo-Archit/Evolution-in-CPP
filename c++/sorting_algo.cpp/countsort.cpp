// #include<iostream>
// #include<climits>
// using namespace std;
// void print(int arr[], int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void countsort(int *arr, int n){
//     int freq[10000]={0};
//     int maxval=INT_MIN;
//     int minval=INT_MAX;
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//         maxval=max(maxval,arr[i]);
//         minval=min(minval,arr[i]);
//     }
//     for(int i=maxval, j=0;i>=minval;i--){
//         while(freq[i]>0){
//             arr[j++]=i;
//             freq[i]--;
//         }
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
//     countsort(arr,size);
// }
// #include<iostream>
// #include<climits>
// using namespace std;
// void print(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void countsort(int arr[],int n){
//     int freq[100000];
//     int minval=INT_MAX;
//     int maxval=INT_MIN;
//     for(int i=0;i<n;i++){
//         minval=min(minval,arr[i]);
//         maxval=max(maxval,arr[i]);
//     }
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(int i=minval,j=0;i<=maxval;i++){
//         while(freq[i]>0){
//             arr[j++]=i;
//             freq[i]--;
//         }
//     }
//     print(arr,n);
// }
// int main(){
// int arr[]={5,4,1,3,2};
// countsort(arr,5);
// return 0;
// }
#include<iostream>
#include<climits>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void countsort(int arr[],int n){
    int minval=INT_MAX;
    int maxval=INT_MIN;
    for(int i=0;i<n;i++){
        minval=min(minval,arr[i]);
        maxval=max(maxval,arr[i]);
    }
    int freq[100000];
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=minval,j=0;i<=maxval;i++){
        if(freq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
    print(arr,n);
}
int main(){
int arr[]={5,4,1,3,2};
countsort(arr,5);
return 0;
}