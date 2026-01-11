#include<iostream>
using namespace std;
int partition(int arr[], int si,int ei){
    int i=si-1; int pivot=arr[ei];
    for(int j=si;j<ei;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    //pivotidx
    swap(arr[i],arr[ei]);
    return i;

}
void quickSort(int arr[],int si, int ei){
    if(si>=ei){
        return;
    }
    int pi=partition(arr,si,ei);
    quickSort(arr,si,pi-1);// left
    quickSort(arr,pi+1,ei);// right
}
void PrintArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int arr[]={6,3,7,5,2,4};
    int n=6;
    quickSort(arr,0,n-1);
    PrintArr(arr,n);
    return 0;
}