#include<iostream>
#include<climits>
using namespace std;


int getMax(int arr[], int n){
    int maxi= INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(arr[i],maxi);
       /* if(arr[i]>maxi){
            maxi=arr[i];
        }*/
    }
    return maxi;
}

int getMin(int arr[], int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(arr[i],mini);
        /*if(arr[i]<mini){
            mini=arr[i];
        }*/
    }
    return mini;
}
int main() {
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The maximum element is "<<getMax(arr,size)<<endl;
    cout<<"The minimum element is "<<getMin(arr,size)<<endl;
    return 0;
    
}