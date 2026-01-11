#include<iostream>
using namespace std;
int search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    cout<<"Enter the element to search: "<<endl;
    int key;
    cin>>key;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int index = search(arr,size,key);
    if(index==-1){
        cout<<"Key is absent"<<endl;
    }
    else{
        cout<<"Key is present at index :"<<index<<endl;
    }
    return 0;
 }

