#include<iostream>
using namespace std;
int ArraySum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;

}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Sum of elemnts of array is: "<<ArraySum(arr,size)<<endl;
    return 0;
}