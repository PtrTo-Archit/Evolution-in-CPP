#include<iostream>
using namespace std;
void alternate(int arr[], int n){
    int start=0;
    while(start<n-1){
        swap(arr[start],arr[start+1]);
        start+=2;
    }
}
void Printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    alternate(arr,size);
    Printarray(arr,size);
    return 0;
}