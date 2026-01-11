#include<iostream>
#include<climits>
using namespace std;
int MaxSum(int arr[],int n){
    int maxsum=INT_MIN;
    int currsum=0; 
    for(int start=0;start<n;start++){
            currsum+=arr[start];
            maxsum=max(maxsum,currsum);
            if(currsum<0){
                currsum=0;
            }
        }
    return maxsum;
}



int main(){
int size;
cin>>size;
int arr[100];
for(int i=0;i<size;i++){
    cin>>arr[i];
}
cout<<MaxSum(arr,size)<<endl;

    return 0;
}