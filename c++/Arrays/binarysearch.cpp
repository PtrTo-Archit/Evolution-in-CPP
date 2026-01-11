// #include<iostream>
// using namespace std;
// int binarysearch(int *arr,int n,int key){
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(key==arr[mid]){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return -1;

// }
// int main(){
//     int arr[100];
//     int size;
//     int key;
//     cin>>key;
//     cin>>size;
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<binarysearch(arr,size,key);
//     return 0;
// }

#include<iostream>
using namespace std;
bool binarysearch(int *arr,int n,int key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(key==arr[mid]){
            return 1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

}
int main(){
    int arr[100];
    int size;
    int key;
    cin>>key;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    bool found=binarysearch(arr,size,key);
    if(found){
        cout<<"key is found";
    }
    else{
        cout<<"key not found";
    }
    return 0;
}