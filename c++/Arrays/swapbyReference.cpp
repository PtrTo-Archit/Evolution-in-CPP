#include<iostream>
using namespace std;
void swap(int &p1, int &p2){
    int temp=p1;
    p1=p2;
    p2=temp;
    
}
int main(){
    int arr[]={10, 20};
    swap(arr[0],arr[1]);
    cout<<arr[0]<<" "<<arr[1];
    return 0;
}