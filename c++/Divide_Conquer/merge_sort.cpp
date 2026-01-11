//Time complexity -> O(nlogn)
//space complexity -> O(n)

#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int si,int mid, int ei){
    vector<int>temp;
    int i=si;
    int j=mid+1;
    while(i<=mid && j<=ei){
    if(arr[i]<=arr[j]){
        temp.push_back(arr[i++]);
    }
    else{
        temp.push_back(arr[j++]);
    }
}
    // while loop for copying remaining element of left and right to temp
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=ei){
        temp.push_back(arr[j++]);
    }
    // copy from temp to original
    for(int idx=si,x=0;idx<=ei;idx++){
        arr[idx]=temp[x++];
    }
}
void Printarr(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
void mergeSort(int arr[], int si, int ei){
    if(si>=ei){
        return;
    }
    int mid = si + (ei-si)/2;
    mergeSort(arr,si,mid);// left
    mergeSort(arr,mid+1,ei); // right

    merge(arr,si,mid,ei);// conquer
}
int main() {
int arr[]={9,6,3,7,5,2,4};
int n=7;
mergeSort(arr,0,n-1);
Printarr(arr,n);
}