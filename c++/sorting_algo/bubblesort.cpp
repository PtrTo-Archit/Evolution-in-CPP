#include<iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int arr[],int n){
    //outer loop will run for n-1 turns that is for each element
    for(int i=0;i<n-1;i++){
        bool isSwap=false;
        cout<<"outer loop"<<endl;
        for(int j=0;j<n-i-1;j++){
            cout<<"inner loop"<<" ";
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;
            }
        }
        
        if(!isSwap){
            break;//already sorted
        }
        
    }
    cout<<endl;
    print(arr,n);
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    return 0;
}
