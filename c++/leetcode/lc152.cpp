// time complexity - O(n)
#include<iostream>
using namespace std;
void maxProd(int *arr, int n){
    int ans=arr[0];
    int maxi=arr[0];
    int mini=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<0){
            swap(maxi,mini);
        }
        maxi=max(arr[i],maxi*arr[i]);
        mini=min(arr[i],mini*arr[i]);
        ans=max(ans,maxi);
    }
    
    cout<<ans;
}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    maxProd(arr,size);
    return 0;
}



//TIme complexity = O(n2)
#include<iostream>
#include<climits>
using namespace std;
void maxProd(int *arr, int n){
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=i;j<n;j++){
           prod*=arr[j];
           ans=max(ans,prod);
        }
        
      
    }
    
    cout<<ans;
}
int main(){
    int arr[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    maxProd(arr,size);
    return 0;
}
